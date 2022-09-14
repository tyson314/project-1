#include "Lexer.h"
#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "usage: " << argv[0] << " input_file" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    std::ifstream input(fileName);
    if (!input.is_open()) {
        std::cout << "File " << fileName << " could not be found or opened." << std::endl;
        return 1;
    }

    std::string inputString = "";
    while (input.peek() != EOF)
    {
        inputString.push_back(input.get());
    }

    Lexer* lexer = new Lexer();

    lexer->Run(inputString);
    std::cout << lexer->toString();
    delete lexer;

    return 0;
}