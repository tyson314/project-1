//
// Created by Tyson Peterson on 9/13/22.
//

#include "Q_MarkAutomaton.h"

void Q_MarkAutomaton::S0(const std::string& input)
{
    if (input[index] == '?')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}