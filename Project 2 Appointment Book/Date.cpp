#include "Date.h"

Date::Date()
{
	month = day = year = 0;
}


Date::~Date() {}

Date::Date(int m, int d, int y)
{
	if (d > 30 || d < 1) {
		system("CLS");
		cout << "Invalid amount of days in a month" << endl;
	}else if (m > 12 || m < 1) {
		system("CLS");
		cout << "Invalid amount of months in a year" << endl;
	}
	else {
		day = d;
		month = m;
		year = y;
	}
}

bool Date::operator>=(const Date &b)
{
	return this->year >= b.year && this->month >= b.month && this->day >= b.day ? true : false;
}

//Accessors
int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

int Date::getYear()
{
	return year;
}
