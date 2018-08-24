#include "Appointment.h"
Appointment::Appointment()
{
	hour = time = 0;
}
Appointment::~Appointment()
{
}
Appointment::Appointment(Date today,Date end, int h, int t, string d)
{
	description = d;
	start = today;
	this->end = end;
	hour = h;
	time = t;
}
int Appointment::getHour()
{
	return hour;
}

int Appointment::getTime()
{
	return time;
}

int Appointment::getMonth()
{
	return month;
}

int Appointment::getYear()
{
	return year;
}

int Appointment::getDay()
{
	return day;
}

string Appointment::getDescription()
{
	return description;
}

void Appointment::print()
{
	cout << hour << ":" << time << "->" << description << endl;
}

