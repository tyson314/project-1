//
// Created by Tyson Peterson on 9/13/22.
//

#ifndef PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H
#define PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H


#include "Automaton.h"

class BlockCommentAutomaton : public Automaton
{
private:
    void S1(const std::string& input);
    void S2(const std::string& input);
    void S3(const std::string& input);
public:
    BlockCommentAutomaton() : Automaton(TokenType::COMMENT) {}  // Call the base constructor
    virtual ~BlockCommentAutomaton() = default;
    void S0(const std::string& input);
};

#endif //PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H
