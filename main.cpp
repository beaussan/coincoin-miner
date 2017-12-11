#include <iostream>
#include <ctime>

#include "TokenBuilder.h"
#include "args.hxx"

void mine(std::string trigram, int limitValue) {
    TokenBuilder builder;
    builder = builder.triOwn(trigram).useSimpleSha().version1();
    std::vector<TokenSimpleHash> tokens;

    while (true) {
        tokens = builder.timestamp(std::time(0)).buildMultiple(20);
        for (int i = 0; i < tokens.size(); ++i) {
            if (tokens.at(i).getValue() >= limitValue) {
                std::cout << tokens.at(i).tokenString << std::endl;
            }
        }
    }
}

int main(int argc, const char **argv) {

    args::ArgumentParser parser("This is the CoinCoin-miner program.", "");
    args::HelpFlag help(parser, "help", "Display this help menu", {'h', "help"});
    args::ValueFlag<int> minc(parser, "minc", "Limit the number of c at the start of coins", {'m'});
    args::ValueFlag<std::string> trigram(parser, "trigramme", "The trigramme flag for mining", {'t'});

    try
    {
        parser.ParseCLI(argc, argv);
    }
    catch (args::Help)
    {
        std::cout << parser;
        return 0;
    }
    catch (args::ParseError e)
    {
        std::cerr << e.what() << std::endl;
        std::cerr << parser;
        return 1;
    }

    if (trigram && minc) {
        mine(args::get(trigram), args::get(minc));
    } else {
        std::cout << parser;
        return 0;
    }
}