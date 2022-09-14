#include "Token.h"

Token::Token(TokenType type, std::string description, int line)
{
    this->tokenType = type;
    this->description = description;
    this->line = line;
}

std::string Token::TokenToString()
{
    std::string output = "";
    output.push_back('(');
    switch (tokenType)
    {
        case TokenType::COMMA:
            output.append("COMMA");
            break;
        case TokenType::PERIOD:
            output.append("PERIOD");
            break;
        case TokenType::Q_MARK:
            output.append("Q_MARK");
            break;
        case TokenType::LEFT_PAREN:
            output.append("LEFT_PAREN");
            break;
        case TokenType::RIGHT_PAREN:
            output.append("RIGHT_PAREN");
            break;
        case TokenType::COLON:
            output.append("COLON");
            break;
        case TokenType::COLON_DASH:
            output.append("COLON_DASH");
            break;
        case TokenType::MULTIPLY:
            output.append("MULTIPLY");
            break;
        case TokenType::ADD:
            output.append("ADD");
            break;
        case TokenType::SCHEMES:
            output.append("SCHEMES");
            break;
        case TokenType::FACTS:
            output.append("FACTS");
            break;
        case TokenType::RULES:
            output.append("RULES");
            break;
        case TokenType::QUERIES:
            output.append("QUERIES");
            break;
        case TokenType::ID:
            output.append("ID");
            break;
        case TokenType::STRING:
            output.append("STRING");
            break;
        case TokenType::COMMENT:
            output.append("COMMENT");
            break;
        case TokenType::UNDEFINED:
            output.append("UNDEFINED");
            break;
        case TokenType::END:
            output.append("EOF");
            break;
    }
    output.append(",\"");
    output.append(description);
    output.append("\",");
    output.append(std::to_string((line)));
    output.push_back(')');

    return output;
}
