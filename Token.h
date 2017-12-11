//
// Created by nicbe on 11/12/2017.
//

#ifndef COINCOIN_MINER_TOKEN_H
#define COINCOIN_MINER_TOKEN_H

#include <string>

class Token {
public:

    Token(std::string tokenString);

    virtual ~Token() = default;


    int getValue();

protected:
    virtual std::string getHash();
public:
    std::string tokenString;

};


#endif //COINCOIN_MINER_TOKEN_H
