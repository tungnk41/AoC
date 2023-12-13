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
            std::string strGame(line.substr(posSeparate + 1, line.size()-1));
            cout << strGame << endl;
            std::istringstream ssGame(strGame);
            ssGameID >> temp >> temp;
            gameID = std::stoi(temp);
            std::string subset;
            while (std::getline(ssGame, subset, ';')) {
                std::string cubes;
                std::string totalGem;
                std::string gemType;
                std::stringstream ssSubset(subset);
                cout << "Subset " << subset <<endl;
                while (std::getline(ssSubset, cubes, ',')) {
                    std::stringstream ssCubes(cubes);
                    ssCubes >> totalGem >> gemType;
                    if (gemType == "red") {
                        red = MAX(std::stoi(totalGem), red);
                    }
                    if (gemType == "blue") {
                        blue = MAX(std::stoi(totalGem), blue);
                    }
                    if (gemType == "green") {
                        green = MAX(std::stoi(totalGem), green);
                    }
                }
            }
            if ( (red <= 12) && (blue <= 14) && (green <= 13)) {
                ids.push_back(gameID);
                count += gameID;
                cout << "GameID: " << gameID << " - red: " << red << " green: " << green << " blue: " << blue << endl;
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
