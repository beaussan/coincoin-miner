//
// Created by nicbe on 11/12/2017.
//

#ifndef COINCOIN_MINER_TOKENSIMPLEHASH_H
#define COINCOIN_MINER_TOKENSIMPLEHASH_H

#include "Token.h"

class TokenSimpleHash : public Token {

protected:
public:
    explicit TokenSimpleHash(const std::string &tokenString);
    ~TokenSimpleHash() override = default;

protected:
    std::string getHash() override ;
};


#endif //COINCOIN_MINER_TOKENSIMPLEHASH_H
