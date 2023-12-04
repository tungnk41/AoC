#!/bin/bash
g++ -std=c++11 -O2 -Wall -Wsign-compare -Wunused-function main.cpp -o main
./main
rm -rf main.exe