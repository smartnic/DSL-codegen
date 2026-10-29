
// Generated from SimdDsl.g4 by ANTLR 4.13.2


#include "SimdDslListener.h"
#include "SimdDslVisitor.h"

#include "SimdDslParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SimdDslParserStaticData final {
  SimdDslParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimdDslParserStaticData(const SimdDslParserStaticData&) = delete;
  SimdDslParserStaticData(SimdDslParserStaticData&&) = delete;
  SimdDslParserStaticData& operator=(const SimdDslParserStaticData&) = delete;
  SimdDslParserStaticData& operator=(SimdDslParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag simddslParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SimdDslParserStaticData> simddslParserStaticData = nullptr;

void simddslParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simddslParserStaticData != nullptr) {
    return;
  }
#else
  assert(simddslParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimdDslParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "structDeclaration", "fieldDeclaration", "vectorType", 
      "typeName", "vectorWidthDeclaration", "declaration", "assignment", 
      "compoundAssignment", "updateStatement", "callStatement", "call", 
      "argList", "arg", "expression", "lvalue"
    },
    std::vector<std::string>{
      "", "'struct'", "'{'", "'}'", "';'", "'*'", "'vector'", "'vector_width'", 
      "'='", "'+='", "'-='", "'--'", "'('", "')'", "','", "'+'", "'-'", 
      "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "IDENTIFIER", "INT", "WS", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,156,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,1,0,3,0,37,8,0,1,0,5,0,40,8,0,10,0,12,0,43,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,52,8,1,1,2,1,2,1,2,1,2,5,2,58,8,2,
  	10,2,12,2,61,9,2,1,2,1,2,3,2,65,8,2,1,3,1,3,1,3,1,3,1,3,1,3,3,3,73,8,
  	3,1,3,1,3,1,3,3,3,78,8,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,3,7,93,8,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,
  	10,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,3,12,117,8,12,1,12,1,
  	12,1,13,1,13,1,13,5,13,124,8,13,10,13,12,13,127,9,13,1,14,1,14,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,142,8,15,1,15,1,
  	15,1,15,5,15,147,8,15,10,15,12,15,150,9,15,1,16,1,16,1,16,1,16,1,16,0,
  	1,30,17,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,0,2,1,0,9,10,1,
  	0,15,16,156,0,34,1,0,0,0,2,51,1,0,0,0,4,53,1,0,0,0,6,77,1,0,0,0,8,79,
  	1,0,0,0,10,82,1,0,0,0,12,84,1,0,0,0,14,88,1,0,0,0,16,96,1,0,0,0,18,101,
  	1,0,0,0,20,106,1,0,0,0,22,110,1,0,0,0,24,113,1,0,0,0,26,120,1,0,0,0,28,
  	128,1,0,0,0,30,141,1,0,0,0,32,151,1,0,0,0,34,36,3,4,2,0,35,37,3,12,6,
  	0,36,35,1,0,0,0,36,37,1,0,0,0,37,41,1,0,0,0,38,40,3,2,1,0,39,38,1,0,0,
  	0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,44,1,0,0,0,43,41,1,0,0,
  	0,44,45,5,0,0,1,45,1,1,0,0,0,46,52,3,14,7,0,47,52,3,16,8,0,48,52,3,18,
  	9,0,49,52,3,20,10,0,50,52,3,22,11,0,51,46,1,0,0,0,51,47,1,0,0,0,51,48,
  	1,0,0,0,51,49,1,0,0,0,51,50,1,0,0,0,52,3,1,0,0,0,53,54,5,1,0,0,54,55,
  	5,18,0,0,55,59,5,2,0,0,56,58,3,6,3,0,57,56,1,0,0,0,58,61,1,0,0,0,59,57,
  	1,0,0,0,59,60,1,0,0,0,60,62,1,0,0,0,61,59,1,0,0,0,62,64,5,3,0,0,63,65,
  	5,4,0,0,64,63,1,0,0,0,64,65,1,0,0,0,65,5,1,0,0,0,66,67,3,8,4,0,67,68,
  	5,18,0,0,68,69,5,4,0,0,69,78,1,0,0,0,70,72,3,10,5,0,71,73,5,5,0,0,72,
  	71,1,0,0,0,72,73,1,0,0,0,73,74,1,0,0,0,74,75,5,18,0,0,75,76,5,4,0,0,76,
  	78,1,0,0,0,77,66,1,0,0,0,77,70,1,0,0,0,78,7,1,0,0,0,79,80,5,6,0,0,80,
  	81,3,10,5,0,81,9,1,0,0,0,82,83,5,18,0,0,83,11,1,0,0,0,84,85,5,7,0,0,85,
  	86,5,19,0,0,86,87,5,4,0,0,87,13,1,0,0,0,88,89,5,6,0,0,89,92,5,18,0,0,
  	90,91,5,8,0,0,91,93,3,30,15,0,92,90,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,
  	0,94,95,5,4,0,0,95,15,1,0,0,0,96,97,3,32,16,0,97,98,5,8,0,0,98,99,3,30,
  	15,0,99,100,5,4,0,0,100,17,1,0,0,0,101,102,3,32,16,0,102,103,7,0,0,0,
  	103,104,3,30,15,0,104,105,5,4,0,0,105,19,1,0,0,0,106,107,3,32,16,0,107,
  	108,5,11,0,0,108,109,5,4,0,0,109,21,1,0,0,0,110,111,3,24,12,0,111,112,
  	5,4,0,0,112,23,1,0,0,0,113,114,5,18,0,0,114,116,5,12,0,0,115,117,3,26,
  	13,0,116,115,1,0,0,0,116,117,1,0,0,0,117,118,1,0,0,0,118,119,5,13,0,0,
  	119,25,1,0,0,0,120,125,3,28,14,0,121,122,5,14,0,0,122,124,3,28,14,0,123,
  	121,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,27,1,
  	0,0,0,127,125,1,0,0,0,128,129,3,30,15,0,129,29,1,0,0,0,130,131,6,15,-1,
  	0,131,132,5,12,0,0,132,133,3,30,15,0,133,134,5,13,0,0,134,142,1,0,0,0,
  	135,136,3,32,16,0,136,137,5,11,0,0,137,142,1,0,0,0,138,142,3,24,12,0,
  	139,142,3,32,16,0,140,142,5,19,0,0,141,130,1,0,0,0,141,135,1,0,0,0,141,
  	138,1,0,0,0,141,139,1,0,0,0,141,140,1,0,0,0,142,148,1,0,0,0,143,144,10,
  	4,0,0,144,145,7,1,0,0,145,147,3,30,15,5,146,143,1,0,0,0,147,150,1,0,0,
  	0,148,146,1,0,0,0,148,149,1,0,0,0,149,31,1,0,0,0,150,148,1,0,0,0,151,
  	152,5,18,0,0,152,153,5,17,0,0,153,154,5,18,0,0,154,33,1,0,0,0,12,36,41,
  	51,59,64,72,77,92,116,125,141,148
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simddslParserStaticData = std::move(staticData);
}

}

SimdDslParser::SimdDslParser(TokenStream *input) : SimdDslParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SimdDslParser::SimdDslParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SimdDslParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *simddslParserStaticData->atn, simddslParserStaticData->decisionToDFA, simddslParserStaticData->sharedContextCache, options);
}

SimdDslParser::~SimdDslParser() {
  delete _interpreter;
}

const atn::ATN& SimdDslParser::getATN() const {
  return *simddslParserStaticData->atn;
}

std::string SimdDslParser::getGrammarFileName() const {
  return "SimdDsl.g4";
}

const std::vector<std::string>& SimdDslParser::getRuleNames() const {
  return simddslParserStaticData->ruleNames;
}

const dfa::Vocabulary& SimdDslParser::getVocabulary() const {
  return simddslParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimdDslParser::getSerializedATN() const {
  return simddslParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

SimdDslParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::StructDeclarationContext* SimdDslParser::ProgramContext::structDeclaration() {
  return getRuleContext<SimdDslParser::StructDeclarationContext>(0);
}

tree::TerminalNode* SimdDslParser::ProgramContext::EOF() {
  return getToken(SimdDslParser::EOF, 0);
}

SimdDslParser::VectorWidthDeclarationContext* SimdDslParser::ProgramContext::vectorWidthDeclaration() {
  return getRuleContext<SimdDslParser::VectorWidthDeclarationContext>(0);
}

std::vector<SimdDslParser::StatementContext *> SimdDslParser::ProgramContext::statement() {
  return getRuleContexts<SimdDslParser::StatementContext>();
}

SimdDslParser::StatementContext* SimdDslParser::ProgramContext::statement(size_t i) {
  return getRuleContext<SimdDslParser::StatementContext>(i);
}


size_t SimdDslParser::ProgramContext::getRuleIndex() const {
  return SimdDslParser::RuleProgram;
}

void SimdDslParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void SimdDslParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any SimdDslParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::ProgramContext* SimdDslParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, SimdDslParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    structDeclaration();
    setState(36);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimdDslParser::T__6) {
      setState(35);
      vectorWidthDeclaration();
    }
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimdDslParser::T__5

    || _la == SimdDslParser::IDENTIFIER) {
      setState(38);
      statement();
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
    match(SimdDslParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SimdDslParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::DeclarationContext* SimdDslParser::StatementContext::declaration() {
  return getRuleContext<SimdDslParser::DeclarationContext>(0);
}

SimdDslParser::AssignmentContext* SimdDslParser::StatementContext::assignment() {
  return getRuleContext<SimdDslParser::AssignmentContext>(0);
}

SimdDslParser::CompoundAssignmentContext* SimdDslParser::StatementContext::compoundAssignment() {
  return getRuleContext<SimdDslParser::CompoundAssignmentContext>(0);
}

SimdDslParser::UpdateStatementContext* SimdDslParser::StatementContext::updateStatement() {
  return getRuleContext<SimdDslParser::UpdateStatementContext>(0);
}

SimdDslParser::CallStatementContext* SimdDslParser::StatementContext::callStatement() {
  return getRuleContext<SimdDslParser::CallStatementContext>(0);
}


size_t SimdDslParser::StatementContext::getRuleIndex() const {
  return SimdDslParser::RuleStatement;
}

void SimdDslParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void SimdDslParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any SimdDslParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::StatementContext* SimdDslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SimdDslParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(51);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(46);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(47);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(48);
      compoundAssignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(49);
      updateStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(50);
      callStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

SimdDslParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::StructDeclarationContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

std::vector<SimdDslParser::FieldDeclarationContext *> SimdDslParser::StructDeclarationContext::fieldDeclaration() {
  return getRuleContexts<SimdDslParser::FieldDeclarationContext>();
}

SimdDslParser::FieldDeclarationContext* SimdDslParser::StructDeclarationContext::fieldDeclaration(size_t i) {
  return getRuleContext<SimdDslParser::FieldDeclarationContext>(i);
}


size_t SimdDslParser::StructDeclarationContext::getRuleIndex() const {
  return SimdDslParser::RuleStructDeclaration;
}

void SimdDslParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void SimdDslParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}


std::any SimdDslParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::StructDeclarationContext* SimdDslParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, SimdDslParser::RuleStructDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(SimdDslParser::T__0);
    setState(54);
    match(SimdDslParser::IDENTIFIER);
    setState(55);
    match(SimdDslParser::T__1);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimdDslParser::T__5

    || _la == SimdDslParser::IDENTIFIER) {
      setState(56);
      fieldDeclaration();
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
    match(SimdDslParser::T__2);
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimdDslParser::T__3) {
      setState(63);
      match(SimdDslParser::T__3);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

SimdDslParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::VectorTypeContext* SimdDslParser::FieldDeclarationContext::vectorType() {
  return getRuleContext<SimdDslParser::VectorTypeContext>(0);
}

tree::TerminalNode* SimdDslParser::FieldDeclarationContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

SimdDslParser::TypeNameContext* SimdDslParser::FieldDeclarationContext::typeName() {
  return getRuleContext<SimdDslParser::TypeNameContext>(0);
}


size_t SimdDslParser::FieldDeclarationContext::getRuleIndex() const {
  return SimdDslParser::RuleFieldDeclaration;
}

void SimdDslParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void SimdDslParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}


std::any SimdDslParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::FieldDeclarationContext* SimdDslParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, SimdDslParser::RuleFieldDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimdDslParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(66);
        vectorType();
        setState(67);
        match(SimdDslParser::IDENTIFIER);
        setState(68);
        match(SimdDslParser::T__3);
        break;
      }

      case SimdDslParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(70);
        typeName();
        setState(72);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimdDslParser::T__4) {
          setState(71);
          match(SimdDslParser::T__4);
        }
        setState(74);
        match(SimdDslParser::IDENTIFIER);
        setState(75);
        match(SimdDslParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorTypeContext ------------------------------------------------------------------

SimdDslParser::VectorTypeContext::VectorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::TypeNameContext* SimdDslParser::VectorTypeContext::typeName() {
  return getRuleContext<SimdDslParser::TypeNameContext>(0);
}


size_t SimdDslParser::VectorTypeContext::getRuleIndex() const {
  return SimdDslParser::RuleVectorType;
}

void SimdDslParser::VectorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorType(this);
}

void SimdDslParser::VectorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorType(this);
}


std::any SimdDslParser::VectorTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitVectorType(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::VectorTypeContext* SimdDslParser::vectorType() {
  VectorTypeContext *_localctx = _tracker.createInstance<VectorTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, SimdDslParser::RuleVectorType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(SimdDslParser::T__5);
    setState(80);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

SimdDslParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::TypeNameContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}


size_t SimdDslParser::TypeNameContext::getRuleIndex() const {
  return SimdDslParser::RuleTypeName;
}

void SimdDslParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void SimdDslParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


std::any SimdDslParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::TypeNameContext* SimdDslParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 10, SimdDslParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(SimdDslParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorWidthDeclarationContext ------------------------------------------------------------------

SimdDslParser::VectorWidthDeclarationContext::VectorWidthDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::VectorWidthDeclarationContext::INT() {
  return getToken(SimdDslParser::INT, 0);
}


size_t SimdDslParser::VectorWidthDeclarationContext::getRuleIndex() const {
  return SimdDslParser::RuleVectorWidthDeclaration;
}

void SimdDslParser::VectorWidthDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorWidthDeclaration(this);
}

void SimdDslParser::VectorWidthDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorWidthDeclaration(this);
}


std::any SimdDslParser::VectorWidthDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitVectorWidthDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::VectorWidthDeclarationContext* SimdDslParser::vectorWidthDeclaration() {
  VectorWidthDeclarationContext *_localctx = _tracker.createInstance<VectorWidthDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, SimdDslParser::RuleVectorWidthDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(SimdDslParser::T__6);
    setState(85);
    match(SimdDslParser::INT);
    setState(86);
    match(SimdDslParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

SimdDslParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::DeclarationContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

SimdDslParser::ExpressionContext* SimdDslParser::DeclarationContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}


size_t SimdDslParser::DeclarationContext::getRuleIndex() const {
  return SimdDslParser::RuleDeclaration;
}

void SimdDslParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void SimdDslParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


std::any SimdDslParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::DeclarationContext* SimdDslParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, SimdDslParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(SimdDslParser::T__5);
    setState(89);
    match(SimdDslParser::IDENTIFIER);
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimdDslParser::T__7) {
      setState(90);
      match(SimdDslParser::T__7);
      setState(91);
      expression(0);
    }
    setState(94);
    match(SimdDslParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

SimdDslParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::LvalueContext* SimdDslParser::AssignmentContext::lvalue() {
  return getRuleContext<SimdDslParser::LvalueContext>(0);
}

SimdDslParser::ExpressionContext* SimdDslParser::AssignmentContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}


size_t SimdDslParser::AssignmentContext::getRuleIndex() const {
  return SimdDslParser::RuleAssignment;
}

void SimdDslParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void SimdDslParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any SimdDslParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::AssignmentContext* SimdDslParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 16, SimdDslParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    lvalue();
    setState(97);
    match(SimdDslParser::T__7);
    setState(98);
    expression(0);
    setState(99);
    match(SimdDslParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundAssignmentContext ------------------------------------------------------------------

SimdDslParser::CompoundAssignmentContext::CompoundAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::LvalueContext* SimdDslParser::CompoundAssignmentContext::lvalue() {
  return getRuleContext<SimdDslParser::LvalueContext>(0);
}

SimdDslParser::ExpressionContext* SimdDslParser::CompoundAssignmentContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}


size_t SimdDslParser::CompoundAssignmentContext::getRuleIndex() const {
  return SimdDslParser::RuleCompoundAssignment;
}

void SimdDslParser::CompoundAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundAssignment(this);
}

void SimdDslParser::CompoundAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundAssignment(this);
}


std::any SimdDslParser::CompoundAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitCompoundAssignment(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::CompoundAssignmentContext* SimdDslParser::compoundAssignment() {
  CompoundAssignmentContext *_localctx = _tracker.createInstance<CompoundAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 18, SimdDslParser::RuleCompoundAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    lvalue();
    setState(102);
    antlrcpp::downCast<CompoundAssignmentContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimdDslParser::T__8

    || _la == SimdDslParser::T__9)) {
      antlrcpp::downCast<CompoundAssignmentContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(103);
    expression(0);
    setState(104);
    match(SimdDslParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdateStatementContext ------------------------------------------------------------------

SimdDslParser::UpdateStatementContext::UpdateStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::LvalueContext* SimdDslParser::UpdateStatementContext::lvalue() {
  return getRuleContext<SimdDslParser::LvalueContext>(0);
}


size_t SimdDslParser::UpdateStatementContext::getRuleIndex() const {
  return SimdDslParser::RuleUpdateStatement;
}

void SimdDslParser::UpdateStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdateStatement(this);
}

void SimdDslParser::UpdateStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdateStatement(this);
}


std::any SimdDslParser::UpdateStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitUpdateStatement(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::UpdateStatementContext* SimdDslParser::updateStatement() {
  UpdateStatementContext *_localctx = _tracker.createInstance<UpdateStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, SimdDslParser::RuleUpdateStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    lvalue();
    setState(107);
    match(SimdDslParser::T__10);
    setState(108);
    match(SimdDslParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallStatementContext ------------------------------------------------------------------

SimdDslParser::CallStatementContext::CallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::CallContext* SimdDslParser::CallStatementContext::call() {
  return getRuleContext<SimdDslParser::CallContext>(0);
}


size_t SimdDslParser::CallStatementContext::getRuleIndex() const {
  return SimdDslParser::RuleCallStatement;
}

void SimdDslParser::CallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallStatement(this);
}

void SimdDslParser::CallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallStatement(this);
}


std::any SimdDslParser::CallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitCallStatement(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::CallStatementContext* SimdDslParser::callStatement() {
  CallStatementContext *_localctx = _tracker.createInstance<CallStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, SimdDslParser::RuleCallStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    call();
    setState(111);
    match(SimdDslParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

SimdDslParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::CallContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

SimdDslParser::ArgListContext* SimdDslParser::CallContext::argList() {
  return getRuleContext<SimdDslParser::ArgListContext>(0);
}


size_t SimdDslParser::CallContext::getRuleIndex() const {
  return SimdDslParser::RuleCall;
}

void SimdDslParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void SimdDslParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}


std::any SimdDslParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::CallContext* SimdDslParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 24, SimdDslParser::RuleCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(SimdDslParser::IDENTIFIER);
    setState(114);
    match(SimdDslParser::T__11);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 790528) != 0)) {
      setState(115);
      argList();
    }
    setState(118);
    match(SimdDslParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

SimdDslParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimdDslParser::ArgContext *> SimdDslParser::ArgListContext::arg() {
  return getRuleContexts<SimdDslParser::ArgContext>();
}

SimdDslParser::ArgContext* SimdDslParser::ArgListContext::arg(size_t i) {
  return getRuleContext<SimdDslParser::ArgContext>(i);
}


size_t SimdDslParser::ArgListContext::getRuleIndex() const {
  return SimdDslParser::RuleArgList;
}

void SimdDslParser::ArgListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgList(this);
}

void SimdDslParser::ArgListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgList(this);
}


std::any SimdDslParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::ArgListContext* SimdDslParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 26, SimdDslParser::RuleArgList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    arg();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimdDslParser::T__13) {
      setState(121);
      match(SimdDslParser::T__13);
      setState(122);
      arg();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

SimdDslParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::ExpressionContext* SimdDslParser::ArgContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}


size_t SimdDslParser::ArgContext::getRuleIndex() const {
  return SimdDslParser::RuleArg;
}

void SimdDslParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}

void SimdDslParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}


std::any SimdDslParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::ArgContext* SimdDslParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 28, SimdDslParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SimdDslParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimdDslParser::ExpressionContext::getRuleIndex() const {
  return SimdDslParser::RuleExpression;
}

void SimdDslParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LvalueExprContext ------------------------------------------------------------------

SimdDslParser::LvalueContext* SimdDslParser::LvalueExprContext::lvalue() {
  return getRuleContext<SimdDslParser::LvalueContext>(0);
}

SimdDslParser::LvalueExprContext::LvalueExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SimdDslParser::LvalueExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalueExpr(this);
}
void SimdDslParser::LvalueExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalueExpr(this);
}

std::any SimdDslParser::LvalueExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitLvalueExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallExprContext ------------------------------------------------------------------

SimdDslParser::CallContext* SimdDslParser::CallExprContext::call() {
  return getRuleContext<SimdDslParser::CallContext>(0);
}

SimdDslParser::CallExprContext::CallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SimdDslParser::CallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallExpr(this);
}
void SimdDslParser::CallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallExpr(this);
}

std::any SimdDslParser::CallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntExprContext ------------------------------------------------------------------

tree::TerminalNode* SimdDslParser::IntExprContext::INT() {
  return getToken(SimdDslParser::INT, 0);
}

SimdDslParser::IntExprContext::IntExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SimdDslParser::IntExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntExpr(this);
}
void SimdDslParser::IntExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntExpr(this);
}

std::any SimdDslParser::IntExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitIntExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

SimdDslParser::ExpressionContext* SimdDslParser::ParenExprContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}

SimdDslParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SimdDslParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void SimdDslParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any SimdDslParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<SimdDslParser::ExpressionContext *> SimdDslParser::AddSubExprContext::expression() {
  return getRuleContexts<SimdDslParser::ExpressionContext>();
}

SimdDslParser::ExpressionContext* SimdDslParser::AddSubExprContext::expression(size_t i) {
  return getRuleContext<SimdDslParser::ExpressionContext>(i);
}

SimdDslParser::AddSubExprContext::AddSubExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SimdDslParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void SimdDslParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}

std::any SimdDslParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecrementExprContext ------------------------------------------------------------------

SimdDslParser::LvalueContext* SimdDslParser::DecrementExprContext::lvalue() {
  return getRuleContext<SimdDslParser::LvalueContext>(0);
}

SimdDslParser::DecrementExprContext::DecrementExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void SimdDslParser::DecrementExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementExpr(this);
}
void SimdDslParser::DecrementExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementExpr(this);
}

std::any SimdDslParser::DecrementExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitDecrementExpr(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::ExpressionContext* SimdDslParser::expression() {
   return expression(0);
}

SimdDslParser::ExpressionContext* SimdDslParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SimdDslParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SimdDslParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, SimdDslParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(141);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(131);
      match(SimdDslParser::T__11);
      setState(132);
      expression(0);
      setState(133);
      match(SimdDslParser::T__12);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<DecrementExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(135);
      lvalue();
      setState(136);
      antlrcpp::downCast<DecrementExprContext *>(_localctx)->op = match(SimdDslParser::T__10);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(138);
      call();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LvalueExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(139);
      lvalue();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IntExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(140);
      match(SimdDslParser::INT);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(148);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpression);
        setState(143);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(144);
        antlrcpp::downCast<AddSubExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == SimdDslParser::T__14

        || _la == SimdDslParser::T__15)) {
          antlrcpp::downCast<AddSubExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(145);
        expression(5); 
      }
      setState(150);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

SimdDslParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimdDslParser::LvalueContext::IDENTIFIER() {
  return getTokens(SimdDslParser::IDENTIFIER);
}

tree::TerminalNode* SimdDslParser::LvalueContext::IDENTIFIER(size_t i) {
  return getToken(SimdDslParser::IDENTIFIER, i);
}


size_t SimdDslParser::LvalueContext::getRuleIndex() const {
  return SimdDslParser::RuleLvalue;
}

void SimdDslParser::LvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalue(this);
}

void SimdDslParser::LvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalue(this);
}


std::any SimdDslParser::LvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitLvalue(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::LvalueContext* SimdDslParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 32, SimdDslParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(SimdDslParser::IDENTIFIER);
    setState(152);
    match(SimdDslParser::T__16);
    setState(153);
    match(SimdDslParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SimdDslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SimdDslParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void SimdDslParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simddslParserInitialize();
#else
  ::antlr4::internal::call_once(simddslParserOnceFlag, simddslParserInitialize);
#endif
}
