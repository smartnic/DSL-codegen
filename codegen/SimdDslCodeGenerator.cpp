#include "SimdDslCodeGenerator.h"

#include <any>
#include <regex>
#include <stdexcept>

std::any SimdDslCodeGenerator::visitProgram(SimdDslParser::ProgramContext *ctx) {
    visitChildren(ctx);
    return code_;
}

std::any SimdDslCodeGenerator::visitVectorWidthDeclaration(
    SimdDslParser::VectorWidthDeclarationContext *ctx) {
    lanes_ = std::stoi(ctx->INT()->getText());
    if (lanes_ != 8) {
        throw std::runtime_error("this generator currently supports vector_width 8 only");
    }
    return {};
}

std::any SimdDslCodeGenerator::visitForStatement(
    SimdDslParser::ForStatementContext *ctx) {
    code_ += "#include <immintrin.h>\n";
    code_ += "#include <stdint.h>\n\n";
    code_ += "#define LANES " + std::to_string(lanes_) + "\n\n";
    visit(ctx->block());
    return {};
}

std::any SimdDslCodeGenerator::visitDeclaration(
    SimdDslParser::DeclarationContext *ctx) {
    if (ctx->call() == nullptr || ctx->call()->IDENTIFIER()->getText() != "decrement") {
        throw std::runtime_error("only decrement(...) declarations are supported");
    }

    auto *arguments = ctx->call()->argList();
    if (arguments == nullptr || arguments->arg().size() != 2) {
        throw std::runtime_error("decrement requires a vector expression and an amount");
    }

    const std::string input = arguments->arg(0)->getText();
    const std::string amount = arguments->arg(1)->getText();
    std::smatch match;
    const std::regex indexedField(
        R"(^([A-Za-z_][A-Za-z_0-9]*)\[([A-Za-z_][A-Za-z_0-9]*)\]\.([A-Za-z_][A-Za-z_0-9]*)$)");
    if (!std::regex_match(input, match, indexedField) || amount != "1") {
        throw std::runtime_error(
            "expected decrement(packet[index].field, 1)");
    }

    const std::string field = match[3].str();
    code_ += "void decrement_" + field + "(uint32_t *" + field + ", int n) {\n";
    code_ += "    __m256i one = _mm256_set1_epi32(1);\n\n";
    code_ += "    int i = 0;\n";
    code_ += "    for (; i + LANES <= n; i += LANES) {\n";
    code_ += "        __m256i v = _mm256_loadu_si256((const __m256i *)(" + field + " + i));\n";
    code_ += "        v = _mm256_sub_epi32(v, one);\n";
    code_ += "        _mm256_storeu_si256((__m256i *)(" + field + " + i), v);\n";
    code_ += "    }\n\n";
    code_ += "    for (; i < n; i++) {\n";
    code_ += "        " + field + "[i]--;\n";
    code_ += "    }\n";
    code_ += "}\n";
    return {};
}

const std::string &SimdDslCodeGenerator::code() const {
    return code_;
}
