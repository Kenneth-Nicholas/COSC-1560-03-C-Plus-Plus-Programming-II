// Paul Biolchini
// COSC 1550 G1
// Homework 4 Assignment 1
// Chapter 3 Problem 4
// Miles Per Gallon with user input

#include <iostream>

using namespace std;

int main()
{
	// definitions and input
	double gallons,
		miles,
		mpg;

	cout << "Please enter the miles driven: ";
	cin >> miles;
	cout << "Please enter the gallons used: ";
	cin >> gallons;

	//cout << "Please enter the miles driven and the gallons used: ";
	//cin >> miles >> gallons;

	// calculation
	mpg = miles / gallons;

    // output
	cout << "A car travelling " << miles 
		<< " miles and using " << gallons 
		<< " gallons will get " << mpg << " miles per gallon.\n";

	return 0;
}
/*
Please enter the miles driven: 320
Please enter the gallons used: 17.5
A car travelling 320 miles and using 17.5 gallons will get 18.2857 miles per gal
lon.
Press any key to continue . . .
*/