// Written By C++ Programmer
// March 31, 2003
// Chapter 6
// Assignment 8, Paint Job Estimator
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function prototypes
int getNumberOfRooms();
double getPaintPrice();
double getWallSquareFeet();
int numberOfGallons(double);
double laborHours(double);
void displayCost(int, double, double);

int main()
{
	int numRooms;			// To hold the number of rooms to paint.
	double paintPrice;		// To hold the price of the paint, per gallon.
	int totalWallArea = 0;	// Accumulator to sum the total wall area.
	int gallons;			// To hold the number of gallons of paint needed.
	double hours;			// To hold the hours of labor needed.

	// Get the number of rooms.
	numRooms = getNumberOfRooms();

	// Get the price of the paint per gallon.
	paintPrice = getPaintPrice();

	// Get the total wall area of the rooms.
	for (int i = 1; i <= numRooms; i++)
	{
		int wallArea;
		cout << "Room " << i << ": ";
		wallArea = getWallSquareFeet();
		totalWallArea += wallArea;
	}

	// Get the number of gallons of paint needed.
	gallons = numberOfGallons(totalWallArea);

	// Get the number of labor hours needed.
	hours = laborHours(totalWallArea);

	// Display the total charges.
	displayCost(gallons, paintPrice, hours);

	return 0;
}

//*********************************************
// Function getNumberOfRooms                  *
// This function asks the user to enter the   *
// number of rooms that are to be painted.    *
// The number of rooms is returned as an      *
// integer.                                   *
//*********************************************

int getNumberOfRooms()
{
	int rooms;

	// Get the number of rooms.
	cout << "Enter the number of rooms to be painted: ";
	cin >> rooms;

	// Validat the input.
	while (rooms < 1 || rooms > 12)
	{
		cout << "ERROR: Enter a number between 1 and 12.\n";
		cout << "Enter the number of rooms to be painted: ";
		cin >> rooms;
	}

	return rooms;
}


//*********************************************
// Function getPaintPrice                     *
// This function asks the user to enter the   *
// price of the paint per gallon. The price   *
// is returned as a double.                    *
//*********************************************

double getPaintPrice()
{
	double price;

	// Get the price per gallon.
	cout << "Enter the price of the paint, per gallon: ";
	cin >> price;

	// Validat the input.
	while (price < 10.0 || price > 25.00)
	{
		cout << "ERROR: Paint price must be between $10.00 and $25.00.\n";
		cout << "Enter the price of the paint, per gallon: ";
		cin >> price;
	}

	return price;
}

//*********************************************
// Function getWallSquareFeet                 *
// This function asks the user to enter the   *
// the square feet of wall space for a room.  *
// The number of square feet is returned as   *
// as a double.                                *
//*********************************************

double getWallSquareFeet()
{
	double wallArea;

	// Get the wall space area.
	cout << "Enter the area of wall space in square feet: ";
	cin >> wallArea;

	// Validat the input.
	while (wallArea < 0)
	{
		cout << "ERROR: Wall area must be a non-negative number.\n";
		cout << "Enter the area of wall space in square feet: ";
		cin >> wallArea;
	}

	return wallArea;
}

//**********************************************
// Function numberOfGallons                    *
// This function accepts as an argument the    *
// the total square feet of wall space and     *
// calculates the number of gallons of paint   *
// required. The number of gallons is returned *
// as an integer.
//**********************************************

int numberOfGallons(double wallArea)
{
	double doubleGallons;
	double remainder;
	int intGallons;

	// Calculate the gallons as a double.
	doubleGallons = wallArea / 160;

	// Get the truncated number of gallons.
//	intGallons = round(doubleGallons);
	intGallons = static_cast<int>(doubleGallons);

	// Get the fractional part of a gallon needed.
	remainder = doubleGallons - static_cast<int>(doubleGallons);

	// Determine if a fractional part of a gallon is needed.
	if (remainder > 0)
		intGallons += 1;	// If so, add 1 gallon.

	return intGallons;
}

//**********************************************
// Function laborHours                         *
// This function accepts as an argument the    *
// the total square feet of wall space and     *
// calculates the hours of labor needed to     *
// paintthat amount of wall space. The number  *
// of hours is returned as a double.
//**********************************************

double laborHours(double wallArea)
{
	// 1 hour of labor is required for every
	// 160 square feet of wall space.
	double hours = (wallArea / 160) * 3.0;

	return hours;
}

//**********************************************
// Function displayCost                        *
// This function accepts as arguments the      *
// number of gallons of paint, the price per   *
// gallon, and the number of labor hours       *
// required for the job. It calculates and     *
// displays the total estimated charges.       *
//**********************************************

void displayCost(int gallons, double paintPrice, double hours)
{
	double totalPaintCost,	// To hold the total cost of the paint.
	      totalLabor,		// To hold the total labor charges.
	      totalCharges;		// To hold the total cost of the job.

	// Calculate the total cost of the paint.
	totalPaintCost = gallons * paintPrice;

	// Calculate the total labor charges.
	totalLabor = hours * 28.0;

	// Calculate the total cost of the job.
	totalCharges = totalPaintCost + totalLabor;

	// Display the charges for the job.
	cout << fixed << showpoint << setprecision(2);
	cout << "\nESTIMATED CHARGES\n";
	cout << "------------------\n";
	cout << "Gallons of paint:  " << gallons << endl;
	cout << "Price per gallon: $" << paintPrice << endl;
	cout << "Paint cost:       $" << totalPaintCost << endl;
	cout << "Cost of labor:    $" << totalLabor << endl;
	cout << "Total charges:    $" << totalCharges << endl;
}
