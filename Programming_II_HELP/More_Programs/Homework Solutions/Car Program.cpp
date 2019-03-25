// COSC 1560
// Paul Biolchini
// Homework 4.1
// Car Class

#include <iostream>
#include <iomanip>
#include <string>
#include "Car.h"

using namespace std;


void getCarInfo(Car &);
void displayCarInfo(Car);

int main()
{
	Car theCar, yourCar;
	getCarInfo(theCar);
	displayCarInfo(theCar);
	getCarInfo(yourCar);
	displayCarInfo(yourCar);


	return 0;
}

void getCarInfo(Car & myCar)
{
	string make, model, vin, owner;
	int numDoors, year;
	double odoReading, gasTankSize, tripMiles, gasLeft;

	cout << "Please enter the name of the owner of the car:";
	getline(cin, owner);
	while (!myCar.setOwner(owner))
	{
		cout << "Please enter the name of the owner of the car:";
		getline(cin, owner);
	}

	cout << "Please enter the maker of your car:";
	getline(cin, make);
	while (!myCar.setMake(make))
	{
		cout << "Please enter the maker of your car:";
		getline(cin, make);
	}

	cout << "Please enter the model of your car:";
	getline(cin, model);
	while (!myCar.setModel(model))
	{
		cout << "Please enter the model of your car:";
		getline(cin, model);
	}

	cout << "What year was your car made? ";
	cin >> year;
	while (!myCar.setYear(year))
	{
		cout << "What year was your car made? ";
		cin >> year;
	}
	cin.ignore();

	cout << "Please enter the Vehicle Id Number of your car:";
	getline(cin, vin);
	while (!myCar.setVin(vin))
	{
		cout << "Please enter the Vehicle Id Number of your car:";
		getline(cin, vin);
	}

	cout << "Please enter the number of doors on the car:";
	cin >> numDoors;
	while (!myCar.setDoors(numDoors))
	{
		cout << "Please enter the number of doors on the car:";
		cin >> numDoors;
	}

	cout << "Please enter the current odometer reading of the car:";
	cin >> odoReading;
	while (!myCar.setOdometer(odoReading))
	{
		cout << "Please enter the current odometer reading of the car:";
		cin >> odoReading;
	}

	cout << "Please enter the maximum number of gallons of the gas tank:";
	cin >> gasTankSize;
	while (!myCar.setGasTank(gasTankSize))
	{
		cout << "Please enter the maximum number of gallons of the gas tank:";
		cin >> gasTankSize;
	}

	cout << "Please enter the trip odometer reading of the car:";
	cin >> tripMiles;
	while (!myCar.setTrip(tripMiles))
	{
		cout << "Please enter the trip odometer reading of the car:";
		cin >> tripMiles;
	}

	cout << "Please enter the number of gallons remaining in the gas tank:";
	cin >> gasLeft;
	while (!myCar.setGasRemaining(gasLeft))
	{
		cout << "Please enter the number of gallons remaining in the gas tank:";
		cin >> gasLeft;
	}
	cin.ignore();
}

void displayCarInfo(Car myCar)
{
		cout << setprecision(2) << fixed << endl << endl;
	cout << "Information on " << myCar.getOwner() << "\'s car.\n";
	cout << "----------------------------------------------------\n";
	cout << "Make:                  " << myCar.getMake() << endl;
	cout << "Model:                 " << myCar.getModel() << endl;
	cout << "Year:                  " << myCar.getYear() << endl;
	cout << "VIN:                   " << myCar.getVin() << endl;
	cout << "Number of doors:       " << myCar.getDoors() << endl;
	cout << "Odometer Reading:      " << myCar.getOdometer() << " miles.\n";
	cout << "Gas Tank Size:         " << myCar.getGasTank() << " gallons.\n";
	cout << "Trip Odometer Reading: " << myCar.getTrip() << " miles.\n";
	cout << "Gas Remaining in Tank: " << myCar.getGasRemaining() << " gallons.\n";
	cout << setprecision(1) << fixed;
	cout << "The MPG for this trip was: " << myCar.MPG() << " miles per gallon.\n\n";
}