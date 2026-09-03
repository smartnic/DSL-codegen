
// Generated from /home/kunal/Documents/grammar/HelloLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "HelloLangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HelloLangParser.
 */
class  HelloLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(HelloLangParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(HelloLangParser::ProgramContext *ctx) = 0;\

};

