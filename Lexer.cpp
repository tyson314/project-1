#include "Lexer.h"
#include "CommaAutomaton.h"
#include "PeriodAutomaton.h"
#include "Q_MarkAutomaton.h"
#include "LeftParenAutomaton.h"
#include "RightParenAutomaton.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "MultiplyAutomaton.h"
#include "AddAutomaton.h"
#include "SchemesAutomaton.h"
#include "FactsAutomaton.h"
#include "RulesAutomaton.h"
#include "QueriesAutomaton.h"
#include "IDAutomaton.h"
#include "StringAutomaton.h"
#include "LineCommentAutomaton.h"
#include "BlockCommentAutomaton.h"
#include "UndefinedAutomaton.h"
#include "EOFAutomaton.h"

Lexer::Lexer()
{
    CreateAutomata();
}

Lexer::~Lexer()
{
    for (int i = 0; i < automata.size(); i++)
    {
        delete automata.at(i);
    }
    for (int i = 0; i < tokens.size(); i++)
    {
        delete tokens.at(i);
    }
}

void Lexer::CreateAutomata()
{
    automata.push_back(new CommaAutomaton());
    automata.push_back(new PeriodAutomaton());
    automata.push_back(new Q_MarkAutomaton());
    automata.push_back(new LeftParenAutomaton());
    automata.push_back(new RightParenAutomaton());
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new MultiplyAutomaton());
    automata.push_back(new AddAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new RulesAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new QueriesAutomaton());
    automata.push_back(new IDAutomaton());
    automata.push_back(new StringAutomaton());
    automata.push_back(new LineCommentAutomaton());
    automata.push_back(new BlockCommentAutomaton());
    automata.push_back(new UndefinedAutomaton());
    automata.push_back(new EOFAutomaton());
}

void Lexer::Run(std::string& input)
{
    int lineNumber = 1;
    int maxRead = 0;
    Automaton* maxAutomata = nullptr;
    Token* newToken = nullptr;
    int inputRead = 0;

    // While there are more characters to tokenize
    while (input.size() > 0) {
        maxRead = 0;
        maxAutomata = nullptr;
        //set maxAutomaton to the first automaton in automata

        // TODO: you need to handle whitespace inbetween tokens
        while (isspace(input.at(0)))
        {
            if (input.at(0) == '\n') lineNumber++;
            input.erase(0, 1);
            if (input.size() == 0)
            {
                tokens.push_back(automata.at(automata.size() - 1)->CreateToken("", lineNumber));
                return;
            }
        }

        // Here is the "Parallel" part of the algorithm
        //   Each automaton runs with the same input
        for (int i = 0; i < automata.size(); i++)
        {
            inputRead = automata.at(i)->Start(input);
            if (inputRead > maxRead)
            {
                maxRead = inputRead;
                maxAutomata = automata.at(i);
            }
        }
        if (maxRead > 0)
        {
            newToken = maxAutomata->CreateToken(input.substr(0, maxRead), lineNumber);
            lineNumber += maxAutomata->NewLinesRead();
            tokens.push_back(newToken);
        }
        else
        {
            maxRead = 1;
            newToken = automata.at(automata.size() - 2)->CreateToken(input.substr(0, 1), lineNumber);
            tokens.push_back(newToken);
        }
        input.erase(0, maxRead);
    }
    tokens.push_back(automata.at(automata.size() - 1)->CreateToken("", lineNumber));
}

std::string Lexer::toString()
{
    std::ostringstream output;
    for (int i = 0; i < tokens.size(); i++)
    {
        output << tokens.at(i)->TokenToString() << std::endl;
    }
    output << "Total Tokens = " << tokens.size() << std::endl;
    return output.str();
}
