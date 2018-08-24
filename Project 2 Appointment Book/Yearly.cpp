#include "Yearly.h"



Yearly::Yearly()
{
}

Yearly::Yearly(int m, int d, int y, int h, int t, string des)
{
	month = m;
	day = d;
	year = y;
	hour = h;
	time = t;
	description = des;
}


Yearly::~Yearly()
{
}

void Yearly::print()
{
	cout << month << "/" << day << "/" << year << " " << hour << ":" << time << "->" << description << "(Yearly)" << endl;
}

bool Yearly::occursOn(int month, int day, int year)
{
	return this->start.getYear() <= year && this->end.getYear() > year
		&& this->start.getMonth() <= month && this->end.getMonth() >= month
		&& this->start.getDay() < day & this->end.getDay() > day ? true : false;
}
