// Chapter 2 - Assignment 7, Distance per Tank of Gas
//	This program calculates how far a car can travel on a tank of gas.

#include <iostream>
using namespace std;

int main()
{
	double gallons = 20.0;      // gas tank capacity in gallons
	double mpgTown = 21.5;      // miles per gallon in town
    double mpgHighway = 26.8;   // miles per gallon on the highway
	double townDistance;        // distance car can travel in town
	double highwayDistance;     // distance car can travel on the highway

	// Compute travel distances
	townDistance = gallons * mpgTown;
	highwayDistance = gallons * mpgHighway;
   
	// Display results
	cout << "The car can drive " << townDistance << " miles in town and \n" 
	     << highwayDistance << " miles on the highway on a tank of gas.\n\n";
	    
	return 0;
}

/*
The car can drive 430 miles in town and
536 miles on the highway on a tank of gas.

Press any key to continue . . .
*/
