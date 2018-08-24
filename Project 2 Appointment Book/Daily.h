#pragma once
#include "Appointment.h"
#include "Date.h"
class Daily : public Appointment
{
public:
	
	Daily();
	Daily(int m, int d, int y, int h, int t, string des);
	~Daily();
	bool occursOn(int month, int day, int year);
	void print();
};

