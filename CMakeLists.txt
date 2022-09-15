cmake_minimum_required(VERSION 3.23)
project(Project1_Starter_Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project1_Starter_Code
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h UndefinedAutomaton.h EOFAutomaton.h LeftParenAutomaton.h LeftParenAutomaton.cpp CommaAutomaton.cpp CommaAutomaton.h PeriodAutomaton.cpp PeriodAutomaton.h Q_MarkAutomaton.cpp Q_MarkAutomaton.h RightParenAutomaton.cpp RightParenAutomaton.h MultiplyAutomaton.cpp MultiplyAutomaton.h AddAutomaton.cpp AddAutomaton.h SchemesAutomaton.cpp SchemesAutomaton.h FactsAutomaton.cpp FactsAutomaton.h QueriesAutomaton.cpp QueriesAutomaton.h RulesAutomaton.cpp RulesAutomaton.h IDAutomaton.cpp IDAutomaton.h StringAutomaton.cpp StringAutomaton.h LineCommentAutomaton.cpp LineCommentAutomaton.h BlockCommentAutomaton.cpp BlockCommentAutomaton.h UndefinedAutomaton.cpp)
