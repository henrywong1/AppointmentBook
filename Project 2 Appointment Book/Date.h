#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include <string>
class Date
{
private:
	int month, day, year;
public:
	Date();
	~Date();
	Date(int m, int d, int y);
	bool operator>=(const Date&);
	//Getters
	int getMonth();
	int getDay();
	int getYear();
};

