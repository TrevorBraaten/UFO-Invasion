#pragma once
#include <iostream>
#include <vector>
#include <string>

// Declare Functions
void greet();

void display_misses(int misses);

void end_game(std::string answer, std::string codeword);

void display_status(std::vector<char> incorrect, std::string answer);
