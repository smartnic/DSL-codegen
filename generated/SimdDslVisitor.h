
// Generated from SimdDsl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimdDslParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SimdDslParser.
 */
class  SimdDslVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SimdDslParser.
   */
    virtual std::any visitProgram(SimdDslParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(SimdDslParser::StatementContext *context) = 0;

    virtual std::any visitStructDeclaration(SimdDslParser::StructDeclarationContext *context) = 0;

    virtual std::any visitFieldDeclaration(SimdDslParser::FieldDeclarationContext *context) = 0;

    virtual std::any visitVectorType(SimdDslParser::VectorTypeContext *context) = 0;

    virtual std::any visitTypeName(SimdDslParser::TypeNameContext *context) = 0;

    virtual std::any visitVectorWidthDeclaration(SimdDslParser::VectorWidthDeclarationContext *context) = 0;

    virtual std::any visitDeclaration(SimdDslParser::DeclarationContext *context) = 0;

    virtual std::any visitAssignment(SimdDslParser::AssignmentContext *context) = 0;

    virtual std::any visitCallStatement(SimdDslParser::CallStatementContext *context) = 0;

    virtual std::any visitForStatement(SimdDslParser::ForStatementContext *context) = 0;

    virtual std::any visitLoopInitializer(SimdDslParser::LoopInitializerContext *context) = 0;

    virtual std::any visitCondition(SimdDslParser::ConditionContext *context) = 0;

    virtual std::any visitLoopUpdate(SimdDslParser::LoopUpdateContext *context) = 0;

    virtual std::any visitBlock(SimdDslParser::BlockContext *context) = 0;

    virtual std::any visitCall(SimdDslParser::CallContext *context) = 0;

    virtual std::any visitArgList(SimdDslParser::ArgListContext *context) = 0;

    virtual std::any visitArg(SimdDslParser::ArgContext *context) = 0;

    virtual std::any visitExpression(SimdDslParser::ExpressionContext *context) = 0;

    virtual std::any visitLvalue(SimdDslParser::LvalueContext *context) = 0;


};

