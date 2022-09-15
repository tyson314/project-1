//
// Created by Tyson Peterson on 9/12/22.
//

#ifndef PROJECT1_STARTER_CODE_EOFAUTOMATON_H
#define PROJECT1_STARTER_CODE_EOFAUTOMATON_H
#include "Automaton.h"

class EOFAutomaton : public Automaton
{
public:
    EOFAutomaton() : Automaton(TokenType::END) {}  // Call the base constructor
    virtual ~EOFAutomaton() = default;
    void S0(const std::string& input) {}
};

#endif //PROJECT1_STARTER_CODE_EOFAUTOMATON_H


