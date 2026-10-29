
// Generated from SimdDsl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimdDslParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SimdDslParser.
 */
class  SimdDslListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(SimdDslParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(SimdDslParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(SimdDslParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SimdDslParser::StatementContext *ctx) = 0;

  virtual void enterStructDeclaration(SimdDslParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(SimdDslParser::StructDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(SimdDslParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(SimdDslParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterVectorType(SimdDslParser::VectorTypeContext *ctx) = 0;
  virtual void exitVectorType(SimdDslParser::VectorTypeContext *ctx) = 0;

  virtual void enterTypeName(SimdDslParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(SimdDslParser::TypeNameContext *ctx) = 0;

  virtual void enterVectorWidthDeclaration(SimdDslParser::VectorWidthDeclarationContext *ctx) = 0;
  virtual void exitVectorWidthDeclaration(SimdDslParser::VectorWidthDeclarationContext *ctx) = 0;

  virtual void enterDeclaration(SimdDslParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(SimdDslParser::DeclarationContext *ctx) = 0;

  virtual void enterAssignment(SimdDslParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(SimdDslParser::AssignmentContext *ctx) = 0;

  virtual void enterCompoundAssignment(SimdDslParser::CompoundAssignmentContext *ctx) = 0;
  virtual void exitCompoundAssignment(SimdDslParser::CompoundAssignmentContext *ctx) = 0;

  virtual void enterUpdateStatement(SimdDslParser::UpdateStatementContext *ctx) = 0;
  virtual void exitUpdateStatement(SimdDslParser::UpdateStatementContext *ctx) = 0;

  virtual void enterCallStatement(SimdDslParser::CallStatementContext *ctx) = 0;
  virtual void exitCallStatement(SimdDslParser::CallStatementContext *ctx) = 0;

  virtual void enterCall(SimdDslParser::CallContext *ctx) = 0;
  virtual void exitCall(SimdDslParser::CallContext *ctx) = 0;

  virtual void enterArgList(SimdDslParser::ArgListContext *ctx) = 0;
  virtual void exitArgList(SimdDslParser::ArgListContext *ctx) = 0;

  virtual void enterArg(SimdDslParser::ArgContext *ctx) = 0;
  virtual void exitArg(SimdDslParser::ArgContext *ctx) = 0;

  virtual void enterLvalueExpr(SimdDslParser::LvalueExprContext *ctx) = 0;
  virtual void exitLvalueExpr(SimdDslParser::LvalueExprContext *ctx) = 0;

  virtual void enterCallExpr(SimdDslParser::CallExprContext *ctx) = 0;
  virtual void exitCallExpr(SimdDslParser::CallExprContext *ctx) = 0;

  virtual void enterIntExpr(SimdDslParser::IntExprContext *ctx) = 0;
  virtual void exitIntExpr(SimdDslParser::IntExprContext *ctx) = 0;

  virtual void enterParenExpr(SimdDslParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(SimdDslParser::ParenExprContext *ctx) = 0;

  virtual void enterAddSubExpr(SimdDslParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(SimdDslParser::AddSubExprContext *ctx) = 0;

  virtual void enterDecrementExpr(SimdDslParser::DecrementExprContext *ctx) = 0;
  virtual void exitDecrementExpr(SimdDslParser::DecrementExprContext *ctx) = 0;

  virtual void enterLvalue(SimdDslParser::LvalueContext *ctx) = 0;
  virtual void exitLvalue(SimdDslParser::LvalueContext *ctx) = 0;


};

