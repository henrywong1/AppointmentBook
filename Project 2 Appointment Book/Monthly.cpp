#include "Monthly.h"



Monthly::Monthly()
{
}

Monthly::Monthly(int m, int d, int y, int h, int t, string des)
{
	month = m;
	day = d;
	year = y;
	hour = h;
	time = t;
	description = des;
}


Monthly::~Monthly()
{
}

void Monthly::print()
{
	cout << month << "/" << day << "/" << year << " " << hour << ":" << time << "->" << description << "(Monthly)" << endl;
}

bool Monthly::occursOn(int month, int day, int year)
{
	return this->start.getYear() <= year && this->end.getYear() > year
		&& this->start.getMonth() <= month && this->end.getMonth() >= month
		&& this->start.getDay() < day & this->end.getDay() > day ? true : false;

}
