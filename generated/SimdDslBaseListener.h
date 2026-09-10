
// Generated from SimdDsl.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SimdDslListener.h"


/**
 * This class provides an empty implementation of SimdDslListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SimdDslBaseListener : public SimdDslListener {
public:

  virtual void enterProgram(SimdDslParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(SimdDslParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(SimdDslParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SimdDslParser::StatementContext * /*ctx*/) override { }

  virtual void enterStructDeclaration(SimdDslParser::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(SimdDslParser::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(SimdDslParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(SimdDslParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterVectorType(SimdDslParser::VectorTypeContext * /*ctx*/) override { }
  virtual void exitVectorType(SimdDslParser::VectorTypeContext * /*ctx*/) override { }

  virtual void enterTypeName(SimdDslParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(SimdDslParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterVectorWidthDeclaration(SimdDslParser::VectorWidthDeclarationContext * /*ctx*/) override { }
  virtual void exitVectorWidthDeclaration(SimdDslParser::VectorWidthDeclarationContext * /*ctx*/) override { }

  virtual void enterDeclaration(SimdDslParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(SimdDslParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(SimdDslParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(SimdDslParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterCallStatement(SimdDslParser::CallStatementContext * /*ctx*/) override { }
  virtual void exitCallStatement(SimdDslParser::CallStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(SimdDslParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(SimdDslParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterLoopInitializer(SimdDslParser::LoopInitializerContext * /*ctx*/) override { }
  virtual void exitLoopInitializer(SimdDslParser::LoopInitializerContext * /*ctx*/) override { }

  virtual void enterCondition(SimdDslParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(SimdDslParser::ConditionContext * /*ctx*/) override { }

  virtual void enterLoopUpdate(SimdDslParser::LoopUpdateContext * /*ctx*/) override { }
  virtual void exitLoopUpdate(SimdDslParser::LoopUpdateContext * /*ctx*/) override { }

  virtual void enterBlock(SimdDslParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SimdDslParser::BlockContext * /*ctx*/) override { }

  virtual void enterCall(SimdDslParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(SimdDslParser::CallContext * /*ctx*/) override { }

  virtual void enterArgList(SimdDslParser::ArgListContext * /*ctx*/) override { }
  virtual void exitArgList(SimdDslParser::ArgListContext * /*ctx*/) override { }

  virtual void enterArg(SimdDslParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(SimdDslParser::ArgContext * /*ctx*/) override { }

  virtual void enterExpression(SimdDslParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SimdDslParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterLvalue(SimdDslParser::LvalueContext * /*ctx*/) override { }
  virtual void exitLvalue(SimdDslParser::LvalueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

