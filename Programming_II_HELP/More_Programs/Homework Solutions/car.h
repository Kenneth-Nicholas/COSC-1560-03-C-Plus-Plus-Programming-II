// car.h class file

#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:
	string make,
		model,
		vin,
		owner;
	int doors,
		year;
	double odometer,
		gasTank,
		trip,
		gasRemaining;
public:
	bool setMake(string);
	bool setModel(string);
	bool setVin(string);
	bool setOwner(string);
	bool setDoors(int);
	bool setYear(int);
	bool setOdometer(double);
	bool setGasTank(double);
	bool setTrip(double);
	bool setGasRemaining(double);
	string getMake() {return make;}
	string getModel() {return model;}
	string getVin() {return vin;}
	string getOwner() {return owner;}
	int getDoors() {return doors;}
	int getYear() {return year;}
	double getOdometer(){return odometer;}
	double getGasTank() {return gasTank;}
	double getTrip() {return trip;}
	double getGasRemaining() {return gasRemaining;}
	double MPG() {return trip/(gasTank - gasRemaining);}
};


//// car.cpp methods
//#include "car.h"
//
//
//bool Car::setMake(string mak)
//{
//	bool result = false;
//	if(mak.length()> 0)
//	{
//		make = mak;
//		result = true;
//	}
//	return result;
//}
//bool Car::setModel(string mod)
//{
//	bool result = false;
//	if(mod.length()> 0)
//	{
//		model= mod;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setVin(string vn)
//{
//	bool result = false;
//	if(vn.length()> 0)
//	{
//		vin= vn;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setOwner(string own)
//{
//	bool result = false;
//	if(own.length()> 0)
//	{
//		owner= own;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setDoors(int dr)
//{
//	bool result = false;
//	if(dr > 0)
//	{
//		doors= dr;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setYear(int yr)
//{
//	bool result = false;
//	if(yr > 0)
//	{
//		year= yr;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setOdometer(double od)
//{
//	bool result = false;
//	if(od > 0)
//	{
//		odometer = od;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setGasTank(double tank)
//{
//	bool result = false;
//	if(tank > 0)
//	{
//		gasTank = tank;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setTrip(double tr)
//{
//	bool result = false;
//	if(tr > 0)
//	{
//		trip = tr;
//		result = true;
//	}
//	return result;
//}
//
//bool Car::setGasRemaining(double rem)
//{
//	bool result = false;
//	if(rem > 0)
//	{
//		gasRemaining = rem;
//		result = true;
//	}
//	return result;
//}
//

#endif