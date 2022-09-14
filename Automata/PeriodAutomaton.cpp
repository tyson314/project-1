//
// Created by Tyson Peterson on 9/13/22.
//

#include "PeriodAutomaton.h"

void PeriodAutomaton::S0(const std::string& input)
{
    if (input[index] == '.')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}