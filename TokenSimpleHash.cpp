//
// Created by nicbe on 11/12/2017.
//

#include "TokenSimpleHash.h"
#include "Sha1Hacher.h"

std::string TokenSimpleHash::getHash() {
    return Sha1Hacher::Instance().hash(tokenString);
}

TokenSimpleHash::TokenSimpleHash(const std::string &tokenString) : Token(tokenString) {

}
