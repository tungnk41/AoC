
#include <iostream>
#include <bits/stdc++.h>
#ifndef IO_H
#define IO_H
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<std::string> vs;
typedef vector<bool> vb;
typedef pair<int,int> pii;
#define F first
#define S second 
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for(int i=(int)a;i<=(int)b;i++)
#define RFOR(i,a,b) for(int i=(int)a;i>=(int)b;--i)
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define INF 1e9
vector<vi> dirs{{1,0},{-1,0},{0,1},{0,-1}};

namespace FastIO {
	static void readInput(vector<std::string>& input,bool enableFastIO = true) {
		if(enableFastIO) {
			std::ios::sync_with_stdio(false);
			std::cin.tie(0);
			std::cout.tie(0);
		}
		std::string line;
		while(std::getline(std::cin, line)) {
			input.push_back(line);
		}
	}

	// Read file to std::cin
	static void readFile(vector<std::string>& input, std::string filename = "input.txt", bool enableFastIO = true) {
		if(enableFastIO) {
			std::ios::sync_with_stdio(false);
			std::cin.tie(0);
			std::cout.tie(0);
		}
		std::ifstream inputFile(filename);
		std::cin.rdbuf(inputFile.rdbuf());
		readInput(input, false);
	}

	// Write file from std::out;
	static void writeFile(function<void()> print, std::string filename = "output.txt") {
		std::ofstream outputFile(filename);
		std::streambuf* originalCoutBuffer = std::cout.rdbuf();
		// Redirect std::cout to write to the output file
		std::cout.rdbuf(outputFile.rdbuf());

		// Now, you can write to std::cout, and it will be redirected to the output file
		print();

		// Restore std::cout to its original buffer
		std::cout.rdbuf(originalCoutBuffer);
	}
};
#endif
