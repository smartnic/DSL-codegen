#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>

#include "SimdDslCodeGenerator.h"
#include "../generated/SimdDslLexer.h"
#include "../generated/SimdDslParser.h"

using namespace antlr4;

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: generate_c <file.simd>\n";
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file) {
        std::cerr << "cannot open " << argv[1] << "\n";
        return 1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    ANTLRInputStream input(buffer.str());
    SimdDslLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SimdDslParser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    if (parser.getNumberOfSyntaxErrors() != 0) {
        return 1;
    }

    try {
        SimdDslCodeGenerator generator;
        generator.visit(tree);
        std::cout << generator.code();
    } catch (const std::exception &error) {
        std::cerr << "code generation failed: " << error.what() << "\n";
        return 1;
    }

    return 0;
}
