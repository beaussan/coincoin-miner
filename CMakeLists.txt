
cmake_minimum_required(VERSION 3.9)
project(coincoin_miner)

set(CMAKE_CXX_STANDARD 11)

add_executable(coincoin_miner
        main.cpp
        args.hxx
        Token.cpp Token.h
        TokenSimpleHash.cpp TokenSimpleHash.h
        TokenBuilder.cpp TokenBuilder.h
        Sha1Hacher.cpp Sha1Hacher.h
        sha1.cpp sha1.h)