//
// Created by nicbe on 11/12/2017.
//

#include <c++/4.8.3/stdexcept>
#include "Sha1Hacher.h"

Sha1Hacher Sha1Hacher::m_instance=Sha1Hacher();

Sha1Hacher::Sha1Hacher() = default;

Sha1Hacher::~Sha1Hacher() = default;

Sha1Hacher& Sha1Hacher::Instance()
{
    return m_instance;
}

template<typename T>
std::string Sha1Hacher::hash(T s) {
    throw std::invalid_argument( "Arg is not a string ! Could not hash" );
}

template<>
std::string Sha1Hacher::hash(std::string s) {
    hacher.update(s);
    return hacher.final();
}
