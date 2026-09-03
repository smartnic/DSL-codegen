
// Generated from /home/kunal/Documents/grammar/HelloLang.g4 by ANTLR 4.13.2


#include "HelloLangListener.h"

#include "HelloLangParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct HelloLangParserStaticData final {
  HelloLangParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HelloLangParserStaticData(const HelloLangParserStaticData&) = delete;
  HelloLangParserStaticData(HelloLangParserStaticData&&) = delete;
  HelloLangParserStaticData& operator=(const HelloLangParserStaticData&) = delete;
  HelloLangParserStaticData& operator=(HelloLangParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hellolangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<HelloLangParserStaticData> hellolangParserStaticData = nullptr;

void hellolangParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hellolangParserStaticData != nullptr) {
    return;
  }
#else
  assert(hellolangParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HelloLangParserStaticData>(
    std::vector<std::string>{
      "program"
    },
    std::vector<std::string>{
      "", "'HelloWorld'"
    },
    std::vector<std::string>{
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,1,6,2,0,7,0,1,0,1,0,1,0,1,0,0,0,1,0,0,0,4,0,2,1,0,0,0,2,3,5,1,0,0,
  	3,4,5,0,0,1,4,1,1,0,0,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hellolangParserStaticData = std::move(staticData);
}

}

HelloLangParser::HelloLangParser(TokenStream *input) : HelloLangParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

HelloLangParser::HelloLangParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  HelloLangParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *hellolangParserStaticData->atn, hellolangParserStaticData->decisionToDFA, hellolangParserStaticData->sharedContextCache, options);
}

HelloLangParser::~HelloLangParser() {
  delete _interpreter;
}

const atn::ATN& HelloLangParser::getATN() const {
  return *hellolangParserStaticData->atn;
}

std::string HelloLangParser::getGrammarFileName() const {
  return "HelloLang.g4";
}

const std::vector<std::string>& HelloLangParser::getRuleNames() const {
  return hellolangParserStaticData->ruleNames;
}

const dfa::Vocabulary& HelloLangParser::getVocabulary() const {
  return hellolangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView HelloLangParser::getSerializedATN() const {
  return hellolangParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

HelloLangParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloLangParser::ProgramContext::EOF() {
  return getToken(HelloLangParser::EOF, 0);
}


size_t HelloLangParser::ProgramContext::getRuleIndex() const {
  return HelloLangParser::RuleProgram;
}

void HelloLangParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HelloLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void HelloLangParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HelloLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

HelloLangParser::ProgramContext* HelloLangParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, HelloLangParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(HelloLangParser::T__0);
    setState(3);
    match(HelloLangParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void HelloLangParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hellolangParserInitialize();
#else
  ::antlr4::internal::call_once(hellolangParserOnceFlag, hellolangParserInitialize);
#endif
}
