//
// Created by Tyson Peterson on 9/13/22.
//

#include "LineCommentAutomaton.h"

void LineCommentAutomaton::S0(const std::string &input)
{
    if (input[index] == '#')
    {
        inputRead++;
        index++;
        S1(input);
    }
    else
    {
        Serr();
    }
}

void LineCommentAutomaton::S1(const std::string &input)
{
    if (input[index] != '|')
    {
        inputRead++;
        index++;
        S2(input);
    }
    else
    {
        Serr();
    }
}

void LineCommentAutomaton::S2(const std::string &input)
{
    if (input[index] != '\n' && input[index] != '\0')
    {
        inputRead++;
        index++;
        S2(input);
    }
}