//
// Created by Tyson Peterson on 9/13/22.
//

#ifndef PROJECT1_STARTER_CODE_LINECOMMENTAUTOMATON_H
#define PROJECT1_STARTER_CODE_LINECOMMENTAUTOMATON_H

#include "Automaton.h"

class LineCommentAutomaton : public Automaton
{
    void S1(const std::string& input);
    void S2(const std::string& input);
public:
    LineCommentAutomaton() : Automaton(TokenType::COMMENT) {}  // Call the base constructor
    virtual ~LineCommentAutomaton() = default;
    void S0(const std::string& input);
};

#endif //PROJECT1_STARTER_CODE_LINECOMMENTAUTOMATON_H
