//
// Created by Tyson Peterson on 9/13/22.
//

#ifndef PROJECT1_STARTER_CODE_COMMAAUTOMATON_H
#define PROJECT1_STARTER_CODE_COMMAAUTOMATON_H


#include "Automaton.h"

class CommaAutomaton : public Automaton
{
public:
    CommaAutomaton() : Automaton(TokenType::COMMA) {}  // Call the base constructor
    virtual ~CommaAutomaton() = default;
    void S0(const std::string& input);
};

#endif //PROJECT1_STARTER_CODE_COMMAAUTOMATON_H
