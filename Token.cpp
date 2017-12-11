//
// Created by nicbe on 11/12/2017.
//

#include "Token.h"
#include <iostream>

Token::Token(std::string tokenString) {
    this->tokenString = tokenString;
}


int Token::getValue() {
    std::string hash = getHash();
    unsigned int i;
    for (i = 0; i < hash.length(); ++i) {
        if (hash.at(i) != 'c') {
            break;
        }
    }
    return i;
}

std::string Token::getHash() {
    return " ";
}
