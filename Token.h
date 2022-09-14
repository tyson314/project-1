#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum class TokenType {
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    COLON,
    COLON_DASH,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    UNDEFINED,
    END
};

class Token
{
private:
    TokenType tokenType;
    std::string description;
    int line;

public:
    Token(TokenType type, std::string description, int line);
    std::string TokenToString();
};

#endif // TOKEN_H

