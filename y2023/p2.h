#ifndef P2_H
#define P2_H
#include "../include/io.h"
namespace P2 {
    static int solve_1() {
        int ans = 0;
        vi ids;
        vs input;
        FastIO::readFile(input);
        int count = 0;
        for(const auto& line : input) {
            int gameID = 0;
            int green = 0;
            int red = 0;
            int blue = 0;
            std::string temp;
            auto posSeparate = line.find(':');
            std::istringstream ssGameID(line.substr(0, posSeparate));
            std::string strCubes(line.substr(posSeparate + 1, line.size()-1));
            std::replace(strCubes.begin(), strCubes.end(), ';',',');
            cout << strCubes << endl;
            std::istringstream ssCubes(strCubes);
            ssGameID >> temp >> temp;
            gameID = std::stoi(temp);
            std::string bag;
            while (std::getline(ssCubes, bag, ',')) {
                std::string totalGem;
                std::string gemType;
                std::stringstream tCubes(bag);
                tCubes >> totalGem >> gemType;
                if (gemType == "red") {
                    red += std::stoi(totalGem);
                }
                if (gemType == "green") {
                    green += std::stoi(totalGem);
                }
                if (gemType == "blue") {
                    blue += std::stoi(totalGem);
                }
            }
            
            if ( (red <= 12) && (blue <= 14) && (green <= 13)) {
                ids.push_back(gameID);
                count += gameID;
                cout << "GameID: " << gameID << " - red: " << red << " green: " << green << " blue: " << blue << endl;
                cout <<"#### " << gameID << endl;
            }
        }

        for (auto& i : ids) {
            // std::cout << i << std::endl;
            ans += i;
        }
        return count;
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
