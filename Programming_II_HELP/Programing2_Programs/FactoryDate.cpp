// Factory.cpp
// Paul Biolchini
// COSC 1560 Spring 2006
// Homework 5 Assignment 2
// Widget Factory Problem 7.6

#include <iostream>
#include "FactoryDate.h"
#include "date_mod1.h"


Factory::Factory()
{
	productionRate = 10;
	numShiftsPerDay = 2;
	numHoursPerShift = 8;
}

int Factory::DeliverySchedule(int w)
{
	int days;
	float temp;
	temp = static_cast<float>(w)/(productionRate * numShiftsPerDay * numHoursPerShift);
	days = temp;
	if(temp - days > 0)
		days++;

//	shipDate.setDays(
	return days;
}
	
bool Factory::setRate(int r)
{
	bool result = false;
	if(r >= 0)
	{
		result = true;
		productionRate = r;
	}
	return result;
}
bool Factory::setHours(int h)
{
	bool result = false;
	if(h >= 0)
	{
		result = true;
		numHoursPerShift = h;
	}
	return result;
}

bool Factory::setShifts(int s)
{
	bool result = false;
	if(s >= 0)
	{
		result = true;
		numShiftsPerDay = s;
	}
	return result;
}

void Factory::setTodayDate(int m, int d, int y)
{
	shipDate.setDay(d);
	shipDate.setMonth(m);
	shipDate.setYear(y);
}
void Factory::showShipDate(int num, int version)
{
	int days = DeliverySchedule(num);
	shipDate.incrDays(days);
	switch(version)
	{
		case 2:	cout << shipDate.showDate2();
			break;
		case 3:	cout << shipDate.showDate3();
			break;
		case 4: cout << shipDate.showDate4();
			break;
		default: cout << shipDate.showDate1();
	}

	}