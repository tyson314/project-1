//
// Created by Tyson Peterson on 9/13/22.
//

#include "BlockCommentAutomaton.h"

void BlockCommentAutomaton::S0(const std::string &input)
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

void BlockCommentAutomaton::S1(const std::string &input)
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

void BlockCommentAutomaton::S2(const std::string &input)
{
    if (index >= input.size())
    {
        Serr();
        return;
    }
    if (input[index] != '|')
    {
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

void BlockCommentAutomaton::S3(const std::string &input)
{
    if (index >= input.size())
    {
        Serr();
        return;
    }
    if (input[index] == '#')
    {
        inputRead++;
    }
    else
    {
        inputRead++;
        index++;
        S2(input);
    }
}