//**********************************************************
//* Paul Biolchini							               * 
//* COSC 1550.07 Computer Programming I				       * 
//* Program Name:	MilesPerGallon.cpp    		       * 
//* Homework Number 2, Assignment 2                        *
//* Problem #:   2.10                                       *
//* Due Date:	9/8/2016	                   * 
//**********************************************************


#include <iostream>

using namespace std;

int main()
{
	// declare and define variables
	int gallons = 15;
	int miles = 350; // 375;
	int milesPerGallon;

	// calculation
	milesPerGallon = miles / gallons;
	
	// output
	cout << "A car driven " << miles << " miles using " << gallons << " gallons will get "
		<< milesPerGallon << " miles per gallon.\n";


	return 0;
}
//Results:
//A car driven 375 miles using 15 gallons will get 25 miles per gallon.
//Press any key to continue . . .