#pragma once
#include "Appointment.h"
#include "Date.h"
class Monthly :
	public Appointment
{
public:
	Monthly();
	Monthly(int m, int d, int y, int h, int t, string des);
	~Monthly();
	void print();
	bool occursOn(int month, int day, int year);
};

