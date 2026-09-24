#include "SimdDslCodeGenerator.h"

#include <any>
#include <regex>
#include <stdexcept>

namespace {

int elementBits(const std::string &typeName) {
    if (typeName == "int8" || typeName == "uint8") return 8;
    if (typeName == "int16" || typeName == "uint16") return 16;
    if (typeName == "int32" || typeName == "uint32" || typeName == "int") return 32;
    if (typeName == "int64" || typeName == "uint64") return 64;
    throw std::runtime_error("unsupported vector element type: " + typeName);
}

std::string cType(int bits) {
    return "uint" + std::to_string(bits) + "_t";
}

std::string vectorType(int registerBits) {
    return registerBits == 256 ? "__m256i" : "__m128i";
}

std::string intrinsicPrefix(int registerBits) {
    return registerBits == 256 ? "_mm256" : "_mm";
}

std::string intrinsicSuffix(int bits) {
    return "epi" + std::to_string(bits);
}

void validateTarget(int registerBits, int bits) {
    if (registerBits != 128 && registerBits != 256) {
        throw std::runtime_error("vector_width must be 128 or 256 for AVX2");
    }
    if (bits != 8 && bits != 16 && bits != 32 && bits != 64) {
        throw std::runtime_error("vector element width must be 8, 16, 32, or 64 bits");
    }
    if (registerBits % bits != 0) {
        throw std::runtime_error("register width must be divisible by element width");
    }
}

}  // namespace

std::any SimdDslCodeGenerator::visitProgram(SimdDslParser::ProgramContext *ctx) {
    visitChildren(ctx);
    return code_;
}

std::any SimdDslCodeGenerator::visitVectorWidthDeclaration(
    SimdDslParser::VectorWidthDeclarationContext *ctx) {
    registerBits_ = std::stoi(ctx->INT()->getText());
    if (registerBits_ != 128 && registerBits_ != 256) {
        throw std::runtime_error("vector_width must be 128 or 256 for AVX2");
    }
    return {};
}

std::any SimdDslCodeGenerator::visitStructDeclaration(
    SimdDslParser::StructDeclarationContext *ctx) {
    for (auto *field : ctx->fieldDeclaration()) {
        if (field->vectorType() != nullptr) {
            fieldBits_[field->IDENTIFIER()->getText()] =
                elementBits(field->vectorType()->typeName()->getText());
        }
    }
    return {};
}

std::any SimdDslCodeGenerator::visitForStatement(
    SimdDslParser::ForStatementContext *ctx) {
    code_ += "#include <immintrin.h>\n";
    code_ += "#include <stdint.h>\n\n";
    visit(ctx->block());
    return {};
}

std::any SimdDslCodeGenerator::visitDeclaration(
    SimdDslParser::DeclarationContext *ctx) {
    if (ctx->call() == nullptr) {
      
std::any SimdDslCodeGenerator::visitDeclaration(
    SimdDslParser::DeclarationContext *ctx) {
    if (ctx->call() == nullptr) {
        throw std::runtime_error("vector declarations require a supported primitive call");
    }  throw std::runtime_error("vector declarations require a supported primitive call");
    }

    auto *arguments = ctx->call()->argList();
    const std::string operation = ctx->call()->IDENTIFIER()->getText();
    if (arguments == nullptr ||
        ((operation == "decrement" && arguments->arg().size() != 2) ||
         (operation == "add" && arguments->arg().size() != 2))) {
        throw std::runtime_error(operation + " requires two arguments");
    }
    if (operation != "decrement" && operation != "add") {
        throw std::runtime_error("unsupported primitive: " + operation);
    }

    const std::string input = arguments->arg(0)->getText();
    std::smatch match;
    const std::regex indexedField(
        R"(^([A-Za-z_][A-Za-z_0-9]*)\[([A-Za-z_][A-Za-z_0-9]*)\]\.([A-Za-z_][A-Za-z_0-9]*)$)");
    if (!std::regex_match(input, match, indexedField)) {
        throw std::runtime_error("expected packet[index].field as a vector argument");
    }

    const std::string field = match[3].str();
    const auto fieldType = fieldBits_.find(field);
    if (fieldType == fieldBits_.end()) {
        throw std::runtime_error("vector field is not declared: " + field);
    }
    const int bits = fieldType->second;
    validateTarget(registerBits_, bits);
    const int lanes = registerBits_ / bits;
    const std::string prefix = intrinsicPrefix(registerBits_);
    const std::string suffix = intrinsicSuffix(bits);
    const std::string simdType = vectorType(registerBits_);
    const std::string scalarType = cType(bits);
    const std::string destination = ctx->IDENTIFIER()->getText();
    const std::string functionName = operation + "_" + destination;
    const std::string loadIntrinsic = prefix + "_loadu_si" + std::to_string(registerBits_);
    const std::string storeIntrinsic = prefix + "_storeu_si" + std::to_string(registerBits_);

    code_ += "#define LANES " + std::to_string(lanes) + "\n\n";
    if (operation == "decrement") {
        code_ += "void " + functionName + "(" + scalarType + " *" + field + ", int n) {\n";
    } else {
        code_ += "void " + functionName + "(" + scalarType + " *lhs, " + scalarType +
            " *rhs, " + scalarType + " *" + destination + ", int n) {\n";
    }
    if (operation == "decrement") {
        if (arguments->arg(1)->getText() != "1") {
            throw std::runtime_error("decrement currently requires an amount of 1");
        }
        code_ += "    " + simdType + " one = " + prefix + "_set1_" + suffix + "(1);\n\n";
    }
    code_ += "    int i = 0;\n";
    code_ += "    for (; i + LANES <= n; i += LANES) {\n";
    const std::string leftName = operation == "decrement" ? field : "lhs";
    code_ += "        " + simdType + " v = " + loadIntrinsic + "((const " +
        simdType + " *) (" + leftName + " + i));\n";
    if (operation == "decrement") {
        code_ += "        v = " + prefix + "_sub_" + suffix + "(v, one);\n";
    } else {
        const std::string second = arguments->arg(1)->getText();
        std::smatch secondMatch;
        if (!std::regex_match(second, secondMatch, indexedField) ||
            fieldBits_[secondMatch[3].str()] != bits) {
            throw std::runtime_error("add arguments must be matching vector fields");
        }
        code_ += "        " + simdType + " rhs_v = " + loadIntrinsic + "((const " +
            simdType + " *) (rhs + i));\n";
        code_ += "        v = " + prefix + "_add_" + suffix + "(v, rhs_v);\n";
    }
    const std::string outputName = operation == "decrement" ? field : destination;
    code_ += "        " + storeIntrinsic + "((" + simdType + " *) (" + outputName +
        " + i), v);\n";
    code_ += "    }\n\n";
    code_ += "    for (; i < n; i++) {\n";
        if (operation == "decrement") {
            code_ += "        " + field + "[i]--;\n";
        } else {
            code_ += "        " + destination + "[i] = lhs[i] + rhs[i];\n";
        }
    code_ += "    }\n";
    code_ += "}\n";
    return {};
}

const std::string &SimdDslCodeGenerator::code() const {
    return code_;
}
