// Car Class PRogram
// Paul Biolchini
// COSC 1560.07
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string Maker, Model, VIN,Owner;
	int doors;
	double Mileage, GasTank, Trip, GasRemaining;
public:
	Car();
	Car(string,string,string,string,int,double,double,double,double);
	void setMaker(string);
	void setModel(string);
	void setVIN(string);
	void setOwner(string);
	string getMaker();
	string getModel();
	string getVIN();
	string getOwner();
	void setDoors(int);
	int getDoors();
	void setMileage(double);
	void setGasTank(double);
	void setTrip(double);
	void setGasRemaining(double);
	double getGasRemaining();
	double getGasTank();
	double getMileage();
	double getTrip();
	double MPG();
	void displayCarInfo();
};