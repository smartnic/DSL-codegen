#pragma once

#include <map>
#include <string>

#include "SimdDslBaseVisitor.h"

class SimdDslCodeGenerator : public SimdDslBaseVisitor {
public:
    std::any visitProgram(SimdDslParser::ProgramContext *ctx) override;
    std::any visitStructDeclaration(
        SimdDslParser::StructDeclarationContext *ctx) override;
    std::any visitVectorWidthDeclaration(
        SimdDslParser::VectorWidthDeclarationContext *ctx) override;
    std::any visitForStatement(SimdDslParser::ForStatementContext *ctx) override;
    std::any visitDeclaration(SimdDslParser::DeclarationContext *ctx) override;

    const std::string &code() const;

private:
    int registerBits_ = 256;
    std::map<std::string, int> fieldBits_;
    std::string code_;
};
