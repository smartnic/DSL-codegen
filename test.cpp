#include <iostream>

#include "antlr4-runtime.h"
#include "HelloLangLexer.h"
#include "HelloLangParser.h"

using namespace antlr4;

int main() {

    std::string input = "Hello";

    ANTLRInputStream inputStream(input);

    HelloLangLexer lexer(&inputStream);

    CommonTokenStream tokens(&lexer);

    HelloLangParser parser(&tokens);

    tree::ParseTree *tree = parser.program();

    std::cout << tree->toStringTree(&parser) << std::endl;

    return 0;
}
