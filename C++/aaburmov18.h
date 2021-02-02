#pragma once
#include <iostream>
#include <vector>
#include <string>

struct COMPUTER
{
	std::string part;
	std::string model;
	int year;
	float price;
};

void initItemS(std::vector<COMPUTER> &items);