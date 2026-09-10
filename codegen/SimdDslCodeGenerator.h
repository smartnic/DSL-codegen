#pragma once

#include <string>

#include "SimdDslBaseVisitor.h"

class SimdDslCodeGenerator : public SimdDslBaseVisitor {
public:
    std::any visitProgram(SimdDslParser::ProgramContext *ctx) override;
    std::any visitVectorWidthDeclaration(
        SimdDslParser::VectorWidthDeclarationContext *ctx) override;
    std::any visitForStatement(SimdDslParser::ForStatementContext *ctx) override;
    std::any visitDeclaration(SimdDslParser::DeclarationContext *ctx) override;

    const std::string &code() const;

private:
    int lanes_ = 8;
    std::string code_;
};
