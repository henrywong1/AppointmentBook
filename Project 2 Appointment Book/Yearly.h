#pragma once
#include "Appointment.h"
#include "Date.h"
class Yearly :
	public Appointment
{
public:
	Yearly();
	Yearly(int m, int d, int y, int h, int t, string des);
	~Yearly();
	void print();
	bool occursOn(int month, int day, int year);
};

