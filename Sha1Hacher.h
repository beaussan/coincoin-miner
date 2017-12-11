//
// Created by nicbe on 11/12/2017.
//

#ifndef COINCOIN_MINER_SHA1HACHER_H
#define COINCOIN_MINER_SHA1HACHER_H


#include <string>
#include "sha1.h"

class Sha1Hacher {

public:
    static Sha1Hacher& Instance();
    template<typename T> std::string hash(T s);

private:
    Sha1Hacher& operator= (const Sha1Hacher&){}
    Sha1Hacher (const Sha1Hacher&) = default;
    SHA1 hacher;
    static Sha1Hacher m_instance;
    Sha1Hacher();
    ~Sha1Hacher();
};


#endif //COINCOIN_MINER_SHA1HACHER_H
