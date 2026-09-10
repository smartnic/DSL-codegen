
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
      "callStatement", "forStatement", "loopInitializer", "condition", "loopUpdate", 
      "block", "call", "argList", "arg", "expression", "lvalue"
    },
    std::vector<std::string>{
      "", "'struct'", "'{'", "'}'", "';'", "'*'", "'vector'", "'vector_width'", 
      "'='", "'for'", "'('", "')'", "'<'", "'<='", "'>'", "'>='", "'++'", 
      "','", "'.'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "IDENTIFIER", "INT", "WS", "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,183,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,5,0,42,8,0,10,
  	0,12,0,45,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,55,8,1,1,2,1,2,1,2,
  	1,2,5,2,61,8,2,10,2,12,2,64,9,2,1,2,1,2,3,2,68,8,2,1,3,1,3,1,3,1,3,1,
  	3,1,3,3,3,76,8,3,1,3,1,3,1,3,3,3,81,8,3,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,
  	6,1,6,1,7,1,7,1,7,1,7,3,7,96,8,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,111,8,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,13,1,13,3,13,139,8,13,1,14,1,14,5,14,143,8,14,10,14,12,14,146,
  	9,14,1,14,1,14,1,15,1,15,1,15,3,15,153,8,15,1,15,1,15,1,16,1,16,1,16,
  	5,16,160,8,16,10,16,12,16,163,9,16,1,17,1,17,1,18,1,18,3,18,169,8,18,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,19,178,8,19,10,19,12,19,181,9,19,
  	1,19,0,0,20,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,0,
  	1,1,0,12,15,181,0,43,1,0,0,0,2,54,1,0,0,0,4,56,1,0,0,0,6,80,1,0,0,0,8,
  	82,1,0,0,0,10,85,1,0,0,0,12,87,1,0,0,0,14,91,1,0,0,0,16,110,1,0,0,0,18,
  	112,1,0,0,0,20,115,1,0,0,0,22,125,1,0,0,0,24,129,1,0,0,0,26,138,1,0,0,
  	0,28,140,1,0,0,0,30,149,1,0,0,0,32,156,1,0,0,0,34,164,1,0,0,0,36,168,
  	1,0,0,0,38,170,1,0,0,0,40,42,3,2,1,0,41,40,1,0,0,0,42,45,1,0,0,0,43,41,
  	1,0,0,0,43,44,1,0,0,0,44,46,1,0,0,0,45,43,1,0,0,0,46,47,5,0,0,1,47,1,
  	1,0,0,0,48,55,3,4,2,0,49,55,3,12,6,0,50,55,3,14,7,0,51,55,3,16,8,0,52,
  	55,3,18,9,0,53,55,3,20,10,0,54,48,1,0,0,0,54,49,1,0,0,0,54,50,1,0,0,0,
  	54,51,1,0,0,0,54,52,1,0,0,0,54,53,1,0,0,0,55,3,1,0,0,0,56,57,5,1,0,0,
  	57,58,5,21,0,0,58,62,5,2,0,0,59,61,3,6,3,0,60,59,1,0,0,0,61,64,1,0,0,
  	0,62,60,1,0,0,0,62,63,1,0,0,0,63,65,1,0,0,0,64,62,1,0,0,0,65,67,5,3,0,
  	0,66,68,5,4,0,0,67,66,1,0,0,0,67,68,1,0,0,0,68,5,1,0,0,0,69,70,3,8,4,
  	0,70,71,5,21,0,0,71,72,5,4,0,0,72,81,1,0,0,0,73,75,3,10,5,0,74,76,5,5,
  	0,0,75,74,1,0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,78,5,21,0,0,78,79,5,
  	4,0,0,79,81,1,0,0,0,80,69,1,0,0,0,80,73,1,0,0,0,81,7,1,0,0,0,82,83,5,
  	6,0,0,83,84,3,10,5,0,84,9,1,0,0,0,85,86,5,21,0,0,86,11,1,0,0,0,87,88,
  	5,7,0,0,88,89,5,22,0,0,89,90,5,4,0,0,90,13,1,0,0,0,91,92,5,6,0,0,92,95,
  	5,21,0,0,93,94,5,8,0,0,94,96,3,30,15,0,95,93,1,0,0,0,95,96,1,0,0,0,96,
  	97,1,0,0,0,97,98,5,4,0,0,98,15,1,0,0,0,99,100,5,6,0,0,100,101,5,21,0,
  	0,101,102,5,8,0,0,102,103,3,30,15,0,103,104,5,4,0,0,104,111,1,0,0,0,105,
  	106,3,38,19,0,106,107,5,8,0,0,107,108,3,30,15,0,108,109,5,4,0,0,109,111,
  	1,0,0,0,110,99,1,0,0,0,110,105,1,0,0,0,111,17,1,0,0,0,112,113,3,30,15,
  	0,113,114,5,4,0,0,114,19,1,0,0,0,115,116,5,9,0,0,116,117,5,10,0,0,117,
  	118,3,22,11,0,118,119,5,4,0,0,119,120,3,24,12,0,120,121,5,4,0,0,121,122,
  	3,26,13,0,122,123,5,11,0,0,123,124,3,28,14,0,124,21,1,0,0,0,125,126,5,
  	21,0,0,126,127,5,8,0,0,127,128,3,36,18,0,128,23,1,0,0,0,129,130,5,21,
  	0,0,130,131,7,0,0,0,131,132,3,36,18,0,132,25,1,0,0,0,133,134,5,21,0,0,
  	134,139,5,16,0,0,135,136,5,21,0,0,136,137,5,8,0,0,137,139,3,36,18,0,138,
  	133,1,0,0,0,138,135,1,0,0,0,139,27,1,0,0,0,140,144,5,2,0,0,141,143,3,
  	2,1,0,142,141,1,0,0,0,143,146,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,
  	145,147,1,0,0,0,146,144,1,0,0,0,147,148,5,3,0,0,148,29,1,0,0,0,149,150,
  	5,21,0,0,150,152,5,10,0,0,151,153,3,32,16,0,152,151,1,0,0,0,152,153,1,
  	0,0,0,153,154,1,0,0,0,154,155,5,11,0,0,155,31,1,0,0,0,156,161,3,34,17,
  	0,157,158,5,17,0,0,158,160,3,34,17,0,159,157,1,0,0,0,160,163,1,0,0,0,
  	161,159,1,0,0,0,161,162,1,0,0,0,162,33,1,0,0,0,163,161,1,0,0,0,164,165,
  	3,36,18,0,165,35,1,0,0,0,166,169,3,38,19,0,167,169,5,22,0,0,168,166,1,
  	0,0,0,168,167,1,0,0,0,169,37,1,0,0,0,170,179,5,21,0,0,171,172,5,18,0,
  	0,172,178,5,21,0,0,173,174,5,19,0,0,174,175,3,36,18,0,175,176,5,20,0,
  	0,176,178,1,0,0,0,177,171,1,0,0,0,177,173,1,0,0,0,178,181,1,0,0,0,179,
  	177,1,0,0,0,179,180,1,0,0,0,180,39,1,0,0,0,181,179,1,0,0,0,15,43,54,62,
  	67,75,80,95,110,138,144,152,161,168,177,179
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

tree::TerminalNode* SimdDslParser::ProgramContext::EOF() {
  return getToken(SimdDslParser::EOF, 0);
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
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2097858) != 0)) {
      setState(40);
      statement();
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(46);
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

SimdDslParser::StructDeclarationContext* SimdDslParser::StatementContext::structDeclaration() {
  return getRuleContext<SimdDslParser::StructDeclarationContext>(0);
}

SimdDslParser::VectorWidthDeclarationContext* SimdDslParser::StatementContext::vectorWidthDeclaration() {
  return getRuleContext<SimdDslParser::VectorWidthDeclarationContext>(0);
}

SimdDslParser::DeclarationContext* SimdDslParser::StatementContext::declaration() {
  return getRuleContext<SimdDslParser::DeclarationContext>(0);
}

SimdDslParser::AssignmentContext* SimdDslParser::StatementContext::assignment() {
  return getRuleContext<SimdDslParser::AssignmentContext>(0);
}

SimdDslParser::CallStatementContext* SimdDslParser::StatementContext::callStatement() {
  return getRuleContext<SimdDslParser::CallStatementContext>(0);
}

SimdDslParser::ForStatementContext* SimdDslParser::StatementContext::forStatement() {
  return getRuleContext<SimdDslParser::ForStatementContext>(0);
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
    setState(54);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(48);
      structDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      vectorWidthDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(50);
      declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(51);
      assignment();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(52);
      callStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(53);
      forStatement();
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
    setState(56);
    match(SimdDslParser::T__0);
    setState(57);
    match(SimdDslParser::IDENTIFIER);
    setState(58);
    match(SimdDslParser::T__1);
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimdDslParser::T__5

    || _la == SimdDslParser::IDENTIFIER) {
      setState(59);
      fieldDeclaration();
      setState(64);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(65);
    match(SimdDslParser::T__2);
    setState(67);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimdDslParser::T__3) {
      setState(66);
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
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimdDslParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(69);
        vectorType();
        setState(70);
        match(SimdDslParser::IDENTIFIER);
        setState(71);
        match(SimdDslParser::T__3);
        break;
      }

      case SimdDslParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(73);
        typeName();
        setState(75);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SimdDslParser::T__4) {
          setState(74);
          match(SimdDslParser::T__4);
        }
        setState(77);
        match(SimdDslParser::IDENTIFIER);
        setState(78);
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
    setState(82);
    match(SimdDslParser::T__5);
    setState(83);
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
    setState(85);
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
    setState(87);
    match(SimdDslParser::T__6);
    setState(88);
    match(SimdDslParser::INT);
    setState(89);
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

SimdDslParser::CallContext* SimdDslParser::DeclarationContext::call() {
  return getRuleContext<SimdDslParser::CallContext>(0);
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
    setState(91);
    match(SimdDslParser::T__5);
    setState(92);
    match(SimdDslParser::IDENTIFIER);
    setState(95);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimdDslParser::T__7) {
      setState(93);
      match(SimdDslParser::T__7);
      setState(94);
      call();
    }
    setState(97);
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

tree::TerminalNode* SimdDslParser::AssignmentContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

SimdDslParser::CallContext* SimdDslParser::AssignmentContext::call() {
  return getRuleContext<SimdDslParser::CallContext>(0);
}

SimdDslParser::LvalueContext* SimdDslParser::AssignmentContext::lvalue() {
  return getRuleContext<SimdDslParser::LvalueContext>(0);
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
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimdDslParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(99);
        match(SimdDslParser::T__5);
        setState(100);
        match(SimdDslParser::IDENTIFIER);
        setState(101);
        match(SimdDslParser::T__7);
        setState(102);
        call();
        setState(103);
        match(SimdDslParser::T__3);
        break;
      }

      case SimdDslParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        lvalue();
        setState(106);
        match(SimdDslParser::T__7);
        setState(107);
        call();
        setState(108);
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
  enterRule(_localctx, 18, SimdDslParser::RuleCallStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    call();
    setState(113);
    match(SimdDslParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

SimdDslParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimdDslParser::LoopInitializerContext* SimdDslParser::ForStatementContext::loopInitializer() {
  return getRuleContext<SimdDslParser::LoopInitializerContext>(0);
}

SimdDslParser::ConditionContext* SimdDslParser::ForStatementContext::condition() {
  return getRuleContext<SimdDslParser::ConditionContext>(0);
}

SimdDslParser::LoopUpdateContext* SimdDslParser::ForStatementContext::loopUpdate() {
  return getRuleContext<SimdDslParser::LoopUpdateContext>(0);
}

SimdDslParser::BlockContext* SimdDslParser::ForStatementContext::block() {
  return getRuleContext<SimdDslParser::BlockContext>(0);
}


size_t SimdDslParser::ForStatementContext::getRuleIndex() const {
  return SimdDslParser::RuleForStatement;
}

void SimdDslParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void SimdDslParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


std::any SimdDslParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::ForStatementContext* SimdDslParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, SimdDslParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(SimdDslParser::T__8);
    setState(116);
    match(SimdDslParser::T__9);
    setState(117);
    loopInitializer();
    setState(118);
    match(SimdDslParser::T__3);
    setState(119);
    condition();
    setState(120);
    match(SimdDslParser::T__3);
    setState(121);
    loopUpdate();
    setState(122);
    match(SimdDslParser::T__10);
    setState(123);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopInitializerContext ------------------------------------------------------------------

SimdDslParser::LoopInitializerContext::LoopInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::LoopInitializerContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

SimdDslParser::ExpressionContext* SimdDslParser::LoopInitializerContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}


size_t SimdDslParser::LoopInitializerContext::getRuleIndex() const {
  return SimdDslParser::RuleLoopInitializer;
}

void SimdDslParser::LoopInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopInitializer(this);
}

void SimdDslParser::LoopInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopInitializer(this);
}


std::any SimdDslParser::LoopInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitLoopInitializer(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::LoopInitializerContext* SimdDslParser::loopInitializer() {
  LoopInitializerContext *_localctx = _tracker.createInstance<LoopInitializerContext>(_ctx, getState());
  enterRule(_localctx, 22, SimdDslParser::RuleLoopInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(SimdDslParser::IDENTIFIER);
    setState(126);
    match(SimdDslParser::T__7);
    setState(127);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

SimdDslParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::ConditionContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

SimdDslParser::ExpressionContext* SimdDslParser::ConditionContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}


size_t SimdDslParser::ConditionContext::getRuleIndex() const {
  return SimdDslParser::RuleCondition;
}

void SimdDslParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void SimdDslParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any SimdDslParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::ConditionContext* SimdDslParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 24, SimdDslParser::RuleCondition);
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
    setState(129);
    match(SimdDslParser::IDENTIFIER);
    setState(130);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 61440) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(131);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopUpdateContext ------------------------------------------------------------------

SimdDslParser::LoopUpdateContext::LoopUpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimdDslParser::LoopUpdateContext::IDENTIFIER() {
  return getToken(SimdDslParser::IDENTIFIER, 0);
}

SimdDslParser::ExpressionContext* SimdDslParser::LoopUpdateContext::expression() {
  return getRuleContext<SimdDslParser::ExpressionContext>(0);
}


size_t SimdDslParser::LoopUpdateContext::getRuleIndex() const {
  return SimdDslParser::RuleLoopUpdate;
}

void SimdDslParser::LoopUpdateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopUpdate(this);
}

void SimdDslParser::LoopUpdateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopUpdate(this);
}


std::any SimdDslParser::LoopUpdateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitLoopUpdate(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::LoopUpdateContext* SimdDslParser::loopUpdate() {
  LoopUpdateContext *_localctx = _tracker.createInstance<LoopUpdateContext>(_ctx, getState());
  enterRule(_localctx, 26, SimdDslParser::RuleLoopUpdate);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(133);
      match(SimdDslParser::IDENTIFIER);
      setState(134);
      match(SimdDslParser::T__15);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      match(SimdDslParser::IDENTIFIER);
      setState(136);
      match(SimdDslParser::T__7);
      setState(137);
      expression();
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

//----------------- BlockContext ------------------------------------------------------------------

SimdDslParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimdDslParser::StatementContext *> SimdDslParser::BlockContext::statement() {
  return getRuleContexts<SimdDslParser::StatementContext>();
}

SimdDslParser::StatementContext* SimdDslParser::BlockContext::statement(size_t i) {
  return getRuleContext<SimdDslParser::StatementContext>(i);
}


size_t SimdDslParser::BlockContext::getRuleIndex() const {
  return SimdDslParser::RuleBlock;
}

void SimdDslParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SimdDslParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any SimdDslParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::BlockContext* SimdDslParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 28, SimdDslParser::RuleBlock);
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
    setState(140);
    match(SimdDslParser::T__1);
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2097858) != 0)) {
      setState(141);
      statement();
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
    match(SimdDslParser::T__2);
   
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
  enterRule(_localctx, 30, SimdDslParser::RuleCall);
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
    setState(149);
    match(SimdDslParser::IDENTIFIER);
    setState(150);
    match(SimdDslParser::T__9);
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimdDslParser::IDENTIFIER

    || _la == SimdDslParser::INT) {
      setState(151);
      argList();
    }
    setState(154);
    match(SimdDslParser::T__10);
   
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
  enterRule(_localctx, 32, SimdDslParser::RuleArgList);
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
    setState(156);
    arg();
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimdDslParser::T__16) {
      setState(157);
      match(SimdDslParser::T__16);
      setState(158);
      arg();
      setState(163);
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
  enterRule(_localctx, 34, SimdDslParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    expression();
   
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

SimdDslParser::LvalueContext* SimdDslParser::ExpressionContext::lvalue() {
  return getRuleContext<SimdDslParser::LvalueContext>(0);
}

tree::TerminalNode* SimdDslParser::ExpressionContext::INT() {
  return getToken(SimdDslParser::INT, 0);
}


size_t SimdDslParser::ExpressionContext::getRuleIndex() const {
  return SimdDslParser::RuleExpression;
}

void SimdDslParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void SimdDslParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimdDslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any SimdDslParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimdDslVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SimdDslParser::ExpressionContext* SimdDslParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 36, SimdDslParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimdDslParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(166);
        lvalue();
        break;
      }

      case SimdDslParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(167);
        match(SimdDslParser::INT);
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

std::vector<SimdDslParser::ExpressionContext *> SimdDslParser::LvalueContext::expression() {
  return getRuleContexts<SimdDslParser::ExpressionContext>();
}

SimdDslParser::ExpressionContext* SimdDslParser::LvalueContext::expression(size_t i) {
  return getRuleContext<SimdDslParser::ExpressionContext>(i);
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
  enterRule(_localctx, 38, SimdDslParser::RuleLvalue);
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
    setState(170);
    match(SimdDslParser::IDENTIFIER);
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimdDslParser::T__17

    || _la == SimdDslParser::T__18) {
      setState(177);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SimdDslParser::T__17: {
          setState(171);
          match(SimdDslParser::T__17);
          setState(172);
          match(SimdDslParser::IDENTIFIER);
          break;
        }

        case SimdDslParser::T__18: {
          setState(173);
          match(SimdDslParser::T__18);
          setState(174);
          expression();
          setState(175);
          match(SimdDslParser::T__19);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(181);
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

void SimdDslParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simddslParserInitialize();
#else
  ::antlr4::internal::call_once(simddslParserOnceFlag, simddslParserInitialize);
#endif
}
