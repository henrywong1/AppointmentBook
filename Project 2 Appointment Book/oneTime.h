#pragma once
#include "Appointment.h"

class Onetime :
	public Appointment
{
public:
	Onetime();
	~Onetime();
	Onetime(int m, int d, int y, int h, int t, string des);
	void print();
	bool occursOn(int month, int day, int year);
};

