// Factory.h
// Paul Biolchini
// COSC 1560 Spring 2006
// Homework 5 Assignment 2
// Widget Factory Problem 7.6

#ifndef FACTORY_H
#define FACTORY_H
#include "date_mod1.h"


class Factory
{
private:
	int productionRate;
	int numShiftsPerDay;
	int numHoursPerShift;
	Date shipDate;
public:
//	float DeliverySchedule(int w){return static_cast<float>(w)/(productionRate * numShiftsPerDay * numHoursPerShift);}
	int DeliverySchedule(int);
	Factory();
	bool setRate(int);
	bool setHours(int);
	bool setShifts(int);
	int getRate() {return productionRate;}
	int getHours() {return numHoursPerShift;}
	int getShifts() {return numShiftsPerDay;}
	void setTodayDate(int, int, int);
	void showShipDate(int,int);
};

#endif