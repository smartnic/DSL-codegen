#include "SimdDslCodeGenerator.h"

#include <algorithm>
#include <any>
#include <stdexcept>
#include <vector>

namespace {

using Parser = SimdDslParser;

int elementBits(const std::string &typeName) {

    if (typeName == "int8" || typeName == "uint8") return 8;
    if (typeName == "int16" || typeName == "uint16") return 16;
    if (typeName == "int32" || typeName == "uint32" || typeName == "int") return 32;
    if (typeName == "int64" || typeName == "uint64") return 64;

    throw std::runtime_error("unsupported vector element type: " + typeName);

}

void validateTarget(int registerBits, int bits) {

    if (registerBits != 128 && registerBits != 256)
        throw std::runtime_error("vector_width must be 128 or 256 for AVX2");

    if (bits != 8 && bits != 16 && bits != 32 && bits != 64)
        throw std::runtime_error("vector element width must be 8, 16, 32, or 64 bits");

    if (registerBits % bits != 0)
        throw std::runtime_error("register width must be divisible by element width");

}

struct Binary {
    std::string op;  // "+" or "-"
    Parser::ExpressionContext *lhs;
    Parser::ExpressionContext *rhs;
};


// Normalizes both `a + b` and the legacy add(a, b) / sub(a, b) / decrement(a, n).
Binary asBinary(Parser::ExpressionContext *e) {

    if (auto *a = dynamic_cast<Parser::AddSubExprContext *>(e)) {
        return {a->op->getText(), a->expression(0), a->expression(1)};
    }

    if (auto *c = dynamic_cast<Parser::CallExprContext *>(e)) {

        const std::string name = c->call()->IDENTIFIER()->getText();
        std::vector<Parser::ArgContext *> args;
        if (c->call()->argList() != nullptr) args = c->call()->argList()->arg();
        if ((name == "add" || name == "sub" || name == "decrement") && args.size() == 2) {
            return {name == "add" ? "+" : "-", args[0]->expression(), args[1]->expression()};
        }

        throw std::runtime_error("unsupported primitive or wrong argument count: " + name);
    }

    throw std::runtime_error("unsupported expression: " + e->getText());
}

// Lowers one per-packet statement into the SIMD implementation.
class Kernel {
public:
    Kernel(int registerBits, const std::map<std::string, int> &fieldBits)
        : registerBits_(registerBits), fieldBits_(fieldBits) {}

    // Returns the field name of packet.field and records it as an input.
    std::string fieldOf(Parser::LvalueContext *lv) {

        if (lv->IDENTIFIER().size() != 2) {
            throw std::runtime_error("expected packet.field as a vector operand: " + lv->getText());
        }

        const std::string field = lv->IDENTIFIER(1)->getText();
        const auto it = fieldBits_.find(field);

        if (it == fieldBits_.end())
            throw std::runtime_error("vector field is not declared: " + field);
            
        if (bits_ == 0) 
            bits_ = it->second;
        else if (bits_ != it->second)
            throw std::runtime_error("operands must have the same element width");
        if (std::find(inputs_.begin(), inputs_.end(), field) == inputs_.end())
            inputs_.push_back(field);
        
        return field;
    }

    void scan(Parser::ExpressionContext *e) {

        if (auto *p = dynamic_cast<Parser::ParenExprContext *>(e)) {
            scan(p->expression());
        } 
        else if (auto *l = dynamic_cast<Parser::LvalueExprContext *>(e)) {
            fieldOf(l->lvalue());
        } 
        else if (dynamic_cast<Parser::IntExprContext *>(e) != nullptr) {
            // constants adopt the width of the vector operands
        } 
        else if (auto *d = dynamic_cast<Parser::DecrementExprContext *>(e)) {
            fieldOf(d->lvalue());
        } 
        else {
            const Binary b = asBinary(e);
            scan(b.lhs);
            scan(b.rhs);
        }

    }

    std::string simd(Parser::ExpressionContext *e) {

        if (auto *p = dynamic_cast<Parser::ParenExprContext *>(e)) return simd(p->expression());
        if (auto *l = dynamic_cast<Parser::LvalueExprContext *>(e)) return load(fieldOf(l->lvalue()));
        if (auto *i = dynamic_cast<Parser::IntExprContext *>(e)) return set1(i->INT()->getText());
        if (auto *d = dynamic_cast<Parser::DecrementExprContext *>(e))
            return binarySimd("-", load(fieldOf(d->lvalue())), set1("1"));

        const Binary b = asBinary(e);

        return binarySimd(b.op, simd(b.lhs), simd(b.rhs));
    }

    std::string scalar(Parser::ExpressionContext *e) {

        if (auto *p = dynamic_cast<Parser::ParenExprContext *>(e)) return scalar(p->expression());
        if (auto *l = dynamic_cast<Parser::LvalueExprContext *>(e)) return fieldOf(l->lvalue()) + "[i]";
        if (auto *i = dynamic_cast<Parser::IntExprContext *>(e)) return i->INT()->getText();
        if (auto *d = dynamic_cast<Parser::DecrementExprContext *>(e))
            return binaryScalar("-", fieldOf(d->lvalue()) + "[i]", "1");

        const Binary b = asBinary(e);

        return binaryScalar(b.op, scalar(b.lhs), scalar(b.rhs));
    }

    std::string load(const std::string &field) const {
        return prefix() + "_loadu_si" + std::to_string(registerBits_) + "((const " +
               vectorType() + " *) (" + field + " + i))";
    }

    std::string binarySimd(const std::string &op, const std::string &l,
                           const std::string &r) const {
        return prefix() + (op == "+" ? "_add_" : "_sub_") + suffix() + "(" + l + ", " + r + ")";
    }

    std::string binaryScalar(const std::string &op, const std::string &l,
                             const std::string &r) const {
        return "(" + scalarType() + ")(" + l + " " + op + " " + r + ")";
    }

    std::string one() const { return set1("1"); }

    // Emits a vector loop plus a scalar tail for one statement. The separate
    // scalar reference implementation is assembled by the visitor below.
    std::string emitSimd(const std::string &outName,
                         const std::string &simdValue, const std::string &scalarValue) {
        if (bits_ == 0)
            throw std::runtime_error("expression has no vector operand");

        validateTarget(registerBits_, bits_);

        std::string out = "    {\n";
        out += "        const int LANES = " + std::to_string(registerBits_ / bits_) + ";\n";
        out += "        int i = 0;\n";
        out += "        for (; i + LANES <= n; i += LANES) {\n";
        out += "            " + vectorType() + " v = " + simdValue + ";\n";
        out += "            " + prefix() + "_storeu_si" + std::to_string(registerBits_) + "((" +
               vectorType() + " *) (" + outName + " + i), v);\n";
        out += "        }\n";
        out += "        for (; i < n; i++) {\n";
        out += "            " + outName + "[i] = " + scalarValue + ";\n";
        out += "        }\n";
        out += "    }\n";

        return out;
    }

    const std::vector<std::string> &inputs() const { return inputs_; }
    int bits() const { return bits_; }

private:
    std::string prefix() const { return registerBits_ == 256 ? "_mm256" : "_mm"; }
    std::string vectorType() const { return registerBits_ == 256 ? "__m256i" : "__m128i"; }
    std::string suffix() const { return "epi" + std::to_string(bits_); }
    std::string scalarType() const { return "uint" + std::to_string(bits_) + "_t"; }
    std::string set1(const std::string &value) const {
        // the 64-bit broadcast intrinsic is spelled set1_epi64x
        return prefix() + "_set1_" + suffix() + (bits_ == 64 ? "x" : "") + "(" + value + ")";
    }

    int registerBits_;
    int bits_ = 0;
    const std::map<std::string, int> &fieldBits_;
    std::vector<std::string> inputs_;
};

}

std::any SimdDslCodeGenerator::visitProgram(SimdDslParser::ProgramContext *ctx) {
    code_ = "#include <immintrin.h>\n#include <stdint.h>\n\n";
    visitChildren(ctx);

    if (fieldBits_.empty())
        throw std::runtime_error("the DSL program must start with a packet struct containing vector fields");

    if (maxElementBits_ != 0) {
        code_ += "// The widest element type is " + std::to_string(maxElementBits_) +
                 " bits, so a " + std::to_string(registerBits_) + "-bit register has " +
                 std::to_string(registerBits_ / maxElementBits_) + " maximum-width lanes.\n";
    }
    const auto signature = [this](const std::string &name) {

        std::string result = "void " + name + "(";
        bool first = true;

        for (const auto &[parameter, bits] : parameterBits_) {
            if (!first) result += ", ";
            result += "uint" + std::to_string(bits) + "_t *" + parameter;
            first = false;
        }

        if (!first) result += ", ";

        return result + "int n)";
    };

    // Reference implementation: statements remain grouped per packet exactly
    // as written in the DSL.
    code_ += "// Scalar reference implementation of the packet program.\n";
    code_ += signature("process_packets_scalar") + " {\n";
    code_ += "    for (int i = 0; i < n; ++i) {\n";
    code_ += scalarBody_;
    code_ += "    }\n";
    code_ += "}\n\n";

    // AVX2 implementation: each independent element-wise statement is
    // vectorized across the packet arrays, with a scalar remainder loop.
    code_ += "// AVX2 implementation of the same packet program.\n";
    code_ += signature("process_packets_simd") + " {\n";
    code_ += simdBody_;
    code_ += "}\n";
    return code_;
}

std::any SimdDslCodeGenerator::visitVectorWidthDeclaration(SimdDslParser::VectorWidthDeclarationContext *ctx) {

    registerBits_ = std::stoi(ctx->INT()->getText());
    if (registerBits_ != 128 && registerBits_ != 256)
        throw std::runtime_error("vector_width must be 128 or 256 for AVX2");

    return {};
}

std::any SimdDslCodeGenerator::visitStructDeclaration(SimdDslParser::StructDeclarationContext *ctx) {

    for (auto *field : ctx->fieldDeclaration()) {
        if (field->vectorType() != nullptr) {
            fieldBits_[field->IDENTIFIER()->getText()] =
                elementBits(field->vectorType()->typeName()->getText());
        }
    }
    return {};
}

std::any SimdDslCodeGenerator::visitDeclaration(SimdDslParser::DeclarationContext *ctx) {

    if (ctx->expression() == nullptr) 
        return {};

    const std::string dest = ctx->IDENTIFIER()->getText();
    Kernel k(registerBits_, fieldBits_);

    k.scan(ctx->expression());

    const std::string out = "out_" + dest;
    const std::string simdValue = k.simd(ctx->expression());
    const std::string scalarValue = k.scalar(ctx->expression());

    simdBody_ += k.emitSimd(out, simdValue, scalarValue);
    scalarBody_ += "        " + out + "[i] = " + scalarValue + ";\n";

    for (const auto &input : k.inputs()) 
    {
        parameterBits_[input] = k.bits();
    }

    parameterBits_[out] = k.bits();
    maxElementBits_ = std::max(maxElementBits_, k.bits());

    return {};
}


std::any SimdDslCodeGenerator::visitAssignment(SimdDslParser::AssignmentContext *ctx) {
    
    Kernel k(registerBits_, fieldBits_);
    
    const std::string target = k.fieldOf(ctx->lvalue());
    
    k.scan(ctx->expression());

    const std::string simdValue = k.simd(ctx->expression());
    const std::string scalarValue = k.scalar(ctx->expression());

    simdBody_ += k.emitSimd(target, simdValue, scalarValue);
    scalarBody_ += "        " + target + "[i] = " + scalarValue + ";\n";

    for (const auto &input : k.inputs()) 
    {
        parameterBits_[input] = k.bits();
    }

    parameterBits_[target] = k.bits();
    maxElementBits_ = std::max(maxElementBits_, k.bits());

    return {};
}


std::any SimdDslCodeGenerator::visitCompoundAssignment(SimdDslParser::CompoundAssignmentContext *ctx) {

    Kernel k(registerBits_, fieldBits_);

    const std::string target = k.fieldOf(ctx->lvalue());
    const std::string op = ctx->op->getText() == "+=" ? "+" : "-";

    k.scan(ctx->expression());

    const std::string simdValue = k.binarySimd(op, k.load(target), k.simd(ctx->expression()));
    const std::string scalarValue = k.binaryScalar(op, target + "[i]", k.scalar(ctx->expression()));
    simdBody_ += k.emitSimd(target, simdValue, scalarValue);
    scalarBody_ += "        " + target + "[i] = " + scalarValue + ";\n";

    for (const auto &input : k.inputs()) 
    {
        parameterBits_[input] = k.bits();
    }

    parameterBits_[target] = k.bits();
    maxElementBits_ = std::max(maxElementBits_, k.bits());

    return {};
}


std::any SimdDslCodeGenerator::visitUpdateStatement(SimdDslParser::UpdateStatementContext *ctx) {

    Kernel k(registerBits_, fieldBits_);

    const std::string target = k.fieldOf(ctx->lvalue());
    const std::string simdValue = k.binarySimd("-", k.load(target), k.one());
    const std::string scalarValue = k.binaryScalar("-", target + "[i]", "1");

    simdBody_ += k.emitSimd(target, simdValue, scalarValue);
    scalarBody_ += "        " + target + "[i] = " + scalarValue + ";\n";

    for (const auto &input : k.inputs()) 
    {
        parameterBits_[input] = k.bits();
    }

    parameterBits_[target] = k.bits();
    maxElementBits_ = std::max(maxElementBits_, k.bits());
    return {};
}


const std::string &SimdDslCodeGenerator::code() const {
    return code_;
}
