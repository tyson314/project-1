//
// Created by Tyson Peterson on 9/13/22.
//

#include "UndefinedAutomaton.h"

void UndefinedAutomaton::S0(const std::string& input)
{
    if (input[index] == '#')
    {
        inputRead++;
        index++;
        S1(input);
    }
    else if (input[index] == '\'')
    {
        inputRead++;
        index++;
        S4(input);
    }
    else
    {
        Serr();
    }
}

void UndefinedAutomaton::S1(const std::string& input)
{
    if (input[index] == '|')
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

void UndefinedAutomaton::S2(const std::string& input)
{
    if (index < input.size())
    {
        if (input[index] != '|')
        {
            if (input[index] == '\n') newLines++;
            inputRead++;
            index++;
            S2(input);
        }
        else
        {
            inputRead++;
            index++;
            S3(input);
        }
    }
}

void UndefinedAutomaton::S3(const std::string& input)
{
    if (index >= input.size()) return;
    if (input[index] == '#')
    {
        Serr();
    }
    else
    {
        if (input[index] == '\n') newLines++;
        inputRead++;
        index++;
        S2(input);
    }
}

void UndefinedAutomaton::S4(const std::string& input)
{
    if (index >= input.size()) return;
    if (input[index] == '\'')
    {
        inputRead++;
        index++;
        S5(input);
    }
    else
    {
        if (input[index] == '\n') newLines++;
        inputRead++;
        index++;
        S4(input);
    }
}

void UndefinedAutomaton::S5(const std::string& input)
{
    if (input[index] == '\'')
    {
        inputRead++;
        index++;
        S4(input);
    }
    else
    {
        Serr();
    }
}