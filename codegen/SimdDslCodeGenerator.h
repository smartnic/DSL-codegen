#pragma once

#include <map>
#include <string>

#include "../generated/SimdDslBaseVisitor.h"

class SimdDslCodeGenerator : public SimdDslBaseVisitor {
public:
    std::any visitProgram(SimdDslParser::ProgramContext *ctx) override;
    std::any visitStructDeclaration(
        SimdDslParser::StructDeclarationContext *ctx) override;
    std::any visitVectorWidthDeclaration(
        SimdDslParser::VectorWidthDeclarationContext *ctx) override;
    std::any visitDeclaration(SimdDslParser::DeclarationContext *ctx) override;
    std::any visitAssignment(SimdDslParser::AssignmentContext *ctx) override;
    std::any visitCompoundAssignment(
        SimdDslParser::CompoundAssignmentContext *ctx) override;
    std::any visitUpdateStatement(
        SimdDslParser::UpdateStatementContext *ctx) override;

    const std::string &code() const;

private:
    int registerBits_ = 256;
    int maxElementBits_ = 0;
    std::map<std::string, int> fieldBits_;
    std::map<std::string, int> parameterBits_;
    std::string scalarBody_;
    std::string simdBody_;
    std::string code_;
};
