#include <fstream>
#include <iostream>
#include <sstream>

#include "antlr4-runtime.h"
#include "SimdDslLexer.h"
#include "SimdDslParser.h"

using namespace antlr4;

int main(int argc, char **argv) {
    std::ifstream file(argv[1]);
    std::stringstream buffer;
    buffer << file.rdbuf();

    ANTLRInputStream inputStream(buffer.str());
    SimdDslLexer lexer(&inputStream);
    CommonTokenStream tokens(&lexer);
    SimdDslParser parser(&tokens);

    tree::ParseTree *tree = parser.program();
    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
