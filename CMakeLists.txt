cmake_minimum_required(VERSION 3.23)
project(Project1_Starter_Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project1_Starter_Code
        Automata/Automaton.h
        Automata/ColonAutomaton.cpp
        Automata/ColonAutomaton.h
        Automata/ColonDashAutomaton.cpp
        Automata/ColonDashAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h Automata/UndefinedAutomaton.h Automata/EOFAutomaton.h Automata/LeftParenAutomaton.h Automata/LeftParenAutomaton.cpp Automata/CommaAutomaton.cpp Automata/CommaAutomaton.h Automata/PeriodAutomaton.cpp Automata/PeriodAutomaton.h Automata/Q_MarkAutomaton.cpp Automata/Q_MarkAutomaton.h Automata/RightParenAutomaton.cpp Automata/RightParenAutomaton.h Automata/MultiplyAutomaton.cpp Automata/MultiplyAutomaton.h Automata/AddAutomaton.cpp Automata/AddAutomaton.h Automata/SchemesAutomaton.cpp Automata/SchemesAutomaton.h Automata/FactsAutomaton.cpp Automata/FactsAutomaton.h Automata/QueriesAutomaton.cpp Automata/QueriesAutomaton.h Automata/RulesAutomaton.cpp Automata/RulesAutomaton.h Automata/IDAutomaton.cpp Automata/IDAutomaton.h Automata/StringAutomaton.cpp Automata/StringAutomaton.h Automata/LineCommentAutomaton.cpp Automata/LineCommentAutomaton.h Automata/BlockCommentAutomaton.cpp Automata/BlockCommentAutomaton.h Automata/UndefinedAutomaton.cpp)
