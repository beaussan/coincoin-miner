//
// Created by nicbe on 11/12/2017.
//

#ifndef COINCOIN_MINER_TOKENBUILDER_H
#define COINCOIN_MINER_TOKENBUILDER_H


#include <string>
#include <vector>
#include "Token.h"

class TokenBuilder {

public:

    TokenBuilder() = default;
    ~TokenBuilder() = default;

    TokenBuilder triOwn(std::string triOwn);
    TokenBuilder timestamp(int timestamp);
    TokenBuilder useSimpleSha();
    TokenBuilder version1();
    std::vector<Token> buildMultiple(int number);

private:
    std::string m_triOwn;
    int m_timestamp;
    int m_shaHacher = 1;
    std::string m_version;
};


#endif //COINCOIN_MINER_TOKENBUILDER_H
