#include "Onetime.h"

Onetime::Onetime()
{
}
Onetime::~Onetime()
{
}

Onetime::Onetime(int m, int d, int y, int h, int t, string des)
{
	month = m;
	day = d;
	year = y;
	hour = h;
	time = t;
	description = des;	
}

void Onetime::print()
{
	cout << month <<"/" << day << "/"<< year << " " << hour << ":" << time << "->" << description << "(One time)" << endl;
}

bool Onetime::occursOn(int month, int day, int year)
{
	return this->start.getYear() <= year && this->end.getYear() > year
		&& this->start.getMonth() <= month && this->end.getMonth() >= month
		&& this->start.getDay() < day & this->end.getDay() > day ? true : false;
}
