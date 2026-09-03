
// Generated from /home/kunal/Documents/grammar/HelloLang.g4 by ANTLR 4.13.2


#include "HelloLangLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct HelloLangLexerStaticData final {
  HelloLangLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HelloLangLexerStaticData(const HelloLangLexerStaticData&) = delete;
  HelloLangLexerStaticData(HelloLangLexerStaticData&&) = delete;
  HelloLangLexerStaticData& operator=(const HelloLangLexerStaticData&) = delete;
  HelloLangLexerStaticData& operator=(HelloLangLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hellolanglexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<HelloLangLexerStaticData> hellolanglexerLexerStaticData = nullptr;

void hellolanglexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hellolanglexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(hellolanglexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HelloLangLexerStaticData>(
    std::vector<std::string>{
      "T__0"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'HelloWorld'"
    },
    std::vector<std::string>{
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,1,14,6,-1,2,0,7,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,
  	1,1,1,1,0,0,13,0,1,1,0,0,0,1,3,1,0,0,0,3,4,5,72,0,0,4,5,5,101,0,0,5,6,
  	5,108,0,0,6,7,5,108,0,0,7,8,5,111,0,0,8,9,5,87,0,0,9,10,5,111,0,0,10,
  	11,5,114,0,0,11,12,5,108,0,0,12,13,5,100,0,0,13,2,1,0,0,0,1,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hellolanglexerLexerStaticData = std::move(staticData);
}

}

HelloLangLexer::HelloLangLexer(CharStream *input) : Lexer(input) {
  HelloLangLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *hellolanglexerLexerStaticData->atn, hellolanglexerLexerStaticData->decisionToDFA, hellolanglexerLexerStaticData->sharedContextCache);
}

HelloLangLexer::~HelloLangLexer() {
  delete _interpreter;
}

std::string HelloLangLexer::getGrammarFileName() const {
  return "HelloLang.g4";
}

const std::vector<std::string>& HelloLangLexer::getRuleNames() const {
  return hellolanglexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& HelloLangLexer::getChannelNames() const {
  return hellolanglexerLexerStaticData->channelNames;
}

const std::vector<std::string>& HelloLangLexer::getModeNames() const {
  return hellolanglexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& HelloLangLexer::getVocabulary() const {
  return hellolanglexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView HelloLangLexer::getSerializedATN() const {
  return hellolanglexerLexerStaticData->serializedATN;
}

const atn::ATN& HelloLangLexer::getATN() const {
  return *hellolanglexerLexerStaticData->atn;
}




void HelloLangLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hellolanglexerLexerInitialize();
#else
  ::antlr4::internal::call_once(hellolanglexerLexerOnceFlag, hellolanglexerLexerInitialize);
#endif
}
