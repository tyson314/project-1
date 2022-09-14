//
// Created by Tyson Peterson on 9/13/22.
//

#include "StringAutomaton.h"
void StringAutomaton::S0(const std::string& input)
{
    if (input[index] == '\'')
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

void StringAutomaton::S1(const std::string& input)
{
    if (index >= input.size())
    {
        Serr();
        return;
    }
    if (input[index] != '\'')
    {
        inputRead++;
        index++;
        S1(input);
    }
    else
    {
        inputRead++;
        index++;
        S2(input);
    }
}

void StringAutomaton::S2(const std::string& input)
{
    if (input[index] == '\'')
    {
        inputRead++;
        index++;
        S1(input);
    }
}