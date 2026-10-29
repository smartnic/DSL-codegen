
// Generated from SimdDsl.g4 by ANTLR 4.13.2


#include "SimdDslLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct SimdDslLexerStaticData final {
  SimdDslLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimdDslLexerStaticData(const SimdDslLexerStaticData&) = delete;
  SimdDslLexerStaticData(SimdDslLexerStaticData&&) = delete;
  SimdDslLexerStaticData& operator=(const SimdDslLexerStaticData&) = delete;
  SimdDslLexerStaticData& operator=(SimdDslLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag simddsllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SimdDslLexerStaticData> simddsllexerLexerStaticData = nullptr;

void simddsllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (simddsllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(simddsllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SimdDslLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "IDENTIFIER", "INT", "WS", "LINE_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,131,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,
  	1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,
  	13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,5,17,104,8,17,10,17,12,17,
  	107,9,17,1,18,4,18,110,8,18,11,18,12,18,111,1,19,4,19,115,8,19,11,19,
  	12,19,116,1,19,1,19,1,20,1,20,1,20,1,20,5,20,125,8,20,10,20,12,20,128,
  	9,20,1,20,1,20,0,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,
  	11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,1,0,5,
  	3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,10,
  	13,13,32,32,2,0,10,10,13,13,134,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,
  	1,0,0,0,0,41,1,0,0,0,1,43,1,0,0,0,3,50,1,0,0,0,5,52,1,0,0,0,7,54,1,0,
  	0,0,9,56,1,0,0,0,11,58,1,0,0,0,13,65,1,0,0,0,15,78,1,0,0,0,17,80,1,0,
  	0,0,19,83,1,0,0,0,21,86,1,0,0,0,23,89,1,0,0,0,25,91,1,0,0,0,27,93,1,0,
  	0,0,29,95,1,0,0,0,31,97,1,0,0,0,33,99,1,0,0,0,35,101,1,0,0,0,37,109,1,
  	0,0,0,39,114,1,0,0,0,41,120,1,0,0,0,43,44,5,115,0,0,44,45,5,116,0,0,45,
  	46,5,114,0,0,46,47,5,117,0,0,47,48,5,99,0,0,48,49,5,116,0,0,49,2,1,0,
  	0,0,50,51,5,123,0,0,51,4,1,0,0,0,52,53,5,125,0,0,53,6,1,0,0,0,54,55,5,
  	59,0,0,55,8,1,0,0,0,56,57,5,42,0,0,57,10,1,0,0,0,58,59,5,118,0,0,59,60,
  	5,101,0,0,60,61,5,99,0,0,61,62,5,116,0,0,62,63,5,111,0,0,63,64,5,114,
  	0,0,64,12,1,0,0,0,65,66,5,118,0,0,66,67,5,101,0,0,67,68,5,99,0,0,68,69,
  	5,116,0,0,69,70,5,111,0,0,70,71,5,114,0,0,71,72,5,95,0,0,72,73,5,119,
  	0,0,73,74,5,105,0,0,74,75,5,100,0,0,75,76,5,116,0,0,76,77,5,104,0,0,77,
  	14,1,0,0,0,78,79,5,61,0,0,79,16,1,0,0,0,80,81,5,43,0,0,81,82,5,61,0,0,
  	82,18,1,0,0,0,83,84,5,45,0,0,84,85,5,61,0,0,85,20,1,0,0,0,86,87,5,45,
  	0,0,87,88,5,45,0,0,88,22,1,0,0,0,89,90,5,40,0,0,90,24,1,0,0,0,91,92,5,
  	41,0,0,92,26,1,0,0,0,93,94,5,44,0,0,94,28,1,0,0,0,95,96,5,43,0,0,96,30,
  	1,0,0,0,97,98,5,45,0,0,98,32,1,0,0,0,99,100,5,46,0,0,100,34,1,0,0,0,101,
  	105,7,0,0,0,102,104,7,1,0,0,103,102,1,0,0,0,104,107,1,0,0,0,105,103,1,
  	0,0,0,105,106,1,0,0,0,106,36,1,0,0,0,107,105,1,0,0,0,108,110,7,2,0,0,
  	109,108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,38,
  	1,0,0,0,113,115,7,3,0,0,114,113,1,0,0,0,115,116,1,0,0,0,116,114,1,0,0,
  	0,116,117,1,0,0,0,117,118,1,0,0,0,118,119,6,19,0,0,119,40,1,0,0,0,120,
  	121,5,47,0,0,121,122,5,47,0,0,122,126,1,0,0,0,123,125,8,4,0,0,124,123,
  	1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,129,1,0,0,
  	0,128,126,1,0,0,0,129,130,6,20,0,0,130,42,1,0,0,0,5,0,105,111,116,126,
  	1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simddsllexerLexerStaticData = std::move(staticData);
}

}

SimdDslLexer::SimdDslLexer(CharStream *input) : Lexer(input) {
  SimdDslLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *simddsllexerLexerStaticData->atn, simddsllexerLexerStaticData->decisionToDFA, simddsllexerLexerStaticData->sharedContextCache);
}

SimdDslLexer::~SimdDslLexer() {
  delete _interpreter;
}

std::string SimdDslLexer::getGrammarFileName() const {
  return "SimdDsl.g4";
}

const std::vector<std::string>& SimdDslLexer::getRuleNames() const {
  return simddsllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& SimdDslLexer::getChannelNames() const {
  return simddsllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& SimdDslLexer::getModeNames() const {
  return simddsllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& SimdDslLexer::getVocabulary() const {
  return simddsllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimdDslLexer::getSerializedATN() const {
  return simddsllexerLexerStaticData->serializedATN;
}

const atn::ATN& SimdDslLexer::getATN() const {
  return *simddsllexerLexerStaticData->atn;
}




void SimdDslLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  simddsllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(simddsllexerLexerOnceFlag, simddsllexerLexerInitialize);
#endif
}
