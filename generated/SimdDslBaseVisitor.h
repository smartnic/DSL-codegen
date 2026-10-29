
// Generated from SimdDsl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimdDslVisitor.h"


/**
 * This class provides an empty implementation of SimdDslVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SimdDslBaseVisitor : public SimdDslVisitor {
public:

  virtual std::any visitProgram(SimdDslParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(SimdDslParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDeclaration(SimdDslParser::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldDeclaration(SimdDslParser::FieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVectorType(SimdDslParser::VectorTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeName(SimdDslParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVectorWidthDeclaration(SimdDslParser::VectorWidthDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(SimdDslParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(SimdDslParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundAssignment(SimdDslParser::CompoundAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdateStatement(SimdDslParser::UpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallStatement(SimdDslParser::CallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(SimdDslParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgList(SimdDslParser::ArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg(SimdDslParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvalueExpr(SimdDslParser::LvalueExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallExpr(SimdDslParser::CallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntExpr(SimdDslParser::IntExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(SimdDslParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSubExpr(SimdDslParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecrementExpr(SimdDslParser::DecrementExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvalue(SimdDslParser::LvalueContext *ctx) override {
    return visitChildren(ctx);
  }


};

