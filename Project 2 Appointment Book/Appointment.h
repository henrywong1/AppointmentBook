#pragma once
#include "Date.h"
#include <vector>
class Appointment
{
public:
	Appointment();
	~Appointment();
	Appointment(Date today,Date end,int h, int t, string d);
	int getHour();
	int getTime();
	int getMonth();
	int getYear();
	int getDay();
	string getDescription();
	virtual void print();
	virtual bool occursOn(int month, int day, int year) = 0;
protected:
	int month, day, year, hour, time;
	string description;
	Date start;
	Date end;
};

