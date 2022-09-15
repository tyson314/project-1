//
// Created by Tyson Peterson on 9/13/22.
//

#include "IDAutomaton.h"

void IDAutomaton::S0(const std::string& input)
{
    if (isalpha(input[index]))
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

void IDAutomaton::S1(const std::string& input)
{
    if (isalnum(input[index]))
    {
        inputRead++;
        index++;
        if (!isspace(input[index]) && input[index] != '\0') S1(input);
    }
}