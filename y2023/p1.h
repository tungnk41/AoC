#ifndef P1_H
#define P1_H
#include "../include/io.h"
namespace P1 {
    static int solve_1() {
        int ans = 0;
        vi calibV;
        vs input;
        FastIO::readFile(input);
        for(const auto& line : input) {
            int p1 = 0;
            int p2 = line.size() -1;
            int temp = 0;
            bool isActiveP1 = true;
            bool isActiveP2 = true;
            while(p1 <= p2) {
                if (isActiveP1 && (line[p1]-'0') >= 0 && (line[p1]-'0') <=9) {
                    isActiveP1 = false;
                }
                if (isActiveP2 && (line[p2]-'0') >= 0 && (line[p2]-'0') <=9) {
                    isActiveP2 = false;
                }
                if (isActiveP1) {
                    p1++;
                }
                if (isActiveP2) {
                    p2--;
                }
                if (!isActiveP1 && !isActiveP2) {
                    temp = (line[p1]-'0')*10 + (line[p2]-'0');
                    calibV.push_back(temp);
                    break;
                }

            }
        }

        for (auto& i : calibV) {
            // std::cout << i << std::endl;
            ans += i;
        }
        return ans;
    }

    static int solve_2() {
        int ans = 0;
        vi calibV;
        vs input;
        FastIO::readFile(input);
        std::unordered_map<std::string, int> mKey {
            {"one", 1},
            {"two", 2},
            {"three", 3},
            {"four", 4},
            {"five", 5},
            {"six", 6},
            {"seven", 7},
            {"eight", 8},
            {"nine", 9}
        };
        for(const auto& line : input) {
            int p1 = 0;
            int p2 = line.size() -1;
            int temp = 0;
            int vp1 = 0;
            int vp2 = 0;
            bool isActiveP1 = true;
            bool isActiveP2 = true;
            while(p1 <= p2) {
                if (isActiveP1 && (line[p1]-'0') >= 0 && (line[p1]-'0') <=9) {
                    vp1 = line[p1]-'0';
                    isActiveP1 = false;
                }
                if (isActiveP1) {
                    int i = 3;
                    while (i <=5) {
                        std::string t = line.substr(p1, i);
                        if (mKey.count(t) > 0) {
                            vp1 = mKey[t];
                            isActiveP1 = false;
                            break;
                        }
                        i++;
                    }
                }
                if (isActiveP2 && (line[p2]-'0') >= 0 && (line[p2]-'0') <=9) {
                    vp2 = line[p2]-'0';
                    isActiveP2 = false;
                }
                if (isActiveP2) {
                    int i = 3;
                    while (i <=5) {
                        std::string t = line.substr(p2, i);
                        if (mKey.count(t) > 0) {
                            vp2 = mKey[t];
                            isActiveP2 = false;
                            break;
                        }
                        i++;
                    }
                }
                if (isActiveP1) {
                    p1++;
                }
                if (isActiveP2) {
                    p2--;
                }
                if (!isActiveP1 && !isActiveP2) {
                    temp = vp1*10 + vp2;
                    calibV.push_back(temp);
                    break;
                }

            }
        }

        for (auto& i : calibV) {
            std::cout << i << std::endl;
            ans += i;
        }
        return ans;
    }
}
#endif
