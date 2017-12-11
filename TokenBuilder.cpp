//
// Created by nicbe on 11/12/2017.
//

#include <random>
#include <functional> //for std::function
#include <algorithm>  //for std::generate_n
#include "TokenBuilder.h"
#include "TokenSimpleHash.h"

TokenBuilder TokenBuilder::triOwn(std::string triOwn) {
    this->m_triOwn = triOwn;
    return *this;
}

TokenBuilder TokenBuilder::timestamp(int timestamp) {
    this->m_timestamp = timestamp;
    return *this;
}

TokenBuilder TokenBuilder::useSimpleSha() {
    this->m_shaHacher = 1;
    return *this;
}

TokenBuilder TokenBuilder::version1() {
    this->m_version = "CC1.0";
    return *this;
}

std::string random_string( size_t length )
{
    auto randchar = []() -> char
    {
        const char charset[] =
                "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    std::string str(length,0);
    std::generate_n( str.begin(), length, randchar );
    return str;
}

std::vector<TokenSimpleHash> TokenBuilder::buildMultiple(int number) {
    if (number <= 0) {
        throw std::invalid_argument( "Arg is not a string ! Could not hash" );
    }
    std::vector<TokenSimpleHash> tokens;
    for (int i = 0; i < number; ++i) {
        TokenSimpleHash tok(
                random_string(32) +
                        "-" +
                        this->m_triOwn +
                        "-" +
                        m_version +
                        "-" +
                        std::to_string(m_timestamp) +
                        "-0f0f0f"
        );
        tokens.push_back(tok);
    }
    return tokens;
}
