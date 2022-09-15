//
// Created by Tyson Peterson on 9/13/22.
//

#ifndef PROJECT1_STARTER_CODE_STRINGAUTOMATON_H
#define PROJECT1_STARTER_CODE_STRINGAUTOMATON_H

#include "Automaton.h"

class StringAutomaton : public Automaton
{
private:
    void S1(const std::string& input);
    void S2(const std::string& input);
public:
    StringAutomaton() : Automaton(TokenType::STRING) {}  // Call the base constructor
    virtual ~StringAutomaton() = default;
    void S0(const std::string& input);
};


#endif //PROJECT1_STARTER_CODE_STRINGAUTOMATON_H
