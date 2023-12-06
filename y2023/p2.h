#ifndef P2_H
#define P2_H
#include "../include/io.h"
namespace P2 {
    static int solve_1() {
        int ans = 0;
        vi ids;
        vs input;
        FastIO::readFile(input);
        for(const auto& line : input) {
            int gameID = 0;
            int green = 0;
            int red = 0;
            int blue = 0;
            std::string temp;
            auto posSeparate = line.find(':');
            std::istringstream ssGameID(line.substr(0, posSeparate));
            std::istringstream ssCubes(line.substr(posSeparate + 1, line.size()-1));
            cout << ssCubes.str() << endl;
            ssGameID >> temp >> temp;
            int count = 0;
            while(count <= 1) {
                std::string totalGem;
                std::string gemType;
                ssCubes >> totalGem >> gemType;
                if (gemType == "red") {
                    red += std::stoi(totalGem);
                }
                if (gemType == "green") {
                    green += std::stoi(totalGem);
                }
                if (gemType == "blue") {
                    blue += std::stoi(totalGem);
                }
                cout << red << endl;
                cout << green << endl;
                cout << blue << endl;
                cout << "#####" << endl;
                count++;
            }
        }

        for (auto& i : ids) {
            // std::cout << i << std::endl;
            ans += i;
        }
        return ans;
    }

    static int solve_2() {
        int ans = 0;
        vi ids;
        vs input;
        FastIO::readFile(input);
        for(const auto& line : input) {
           
        }

        for (auto& i : ids) {
            std::cout << i << std::endl;
            ans += i;
        }
        return ans;
    }
}
#endif
