#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include "Automata/Automaton.h"
#include "Token.h"
#include <sstream>
#include <cctype>

class Lexer
{
private:
    std::vector<Automaton*> automata;
    std::vector<Token*> tokens;

    void CreateAutomata();

    // TODO: add any other private methods here (if needed)

public:
    Lexer();
    ~Lexer();

    void Run(std::string& input);
    
    std::string toString();

};

#endif // LEXER_H

