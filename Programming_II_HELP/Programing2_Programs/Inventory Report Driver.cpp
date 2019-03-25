// Chapter 7 - Assignment 13, Driver program for the Inventory class

//	File members of this project:
//	7_13.cpp (this file)
//	Inventory.h   -- contains Inventory class declaration
// Inventory.cpp -- contains Inventory class function definitions

#include <iostream>
#include <iomanip>
#include "heading.h"
#include "Inventory.h"
using namespace std;

int main()
{
	cout << fixed << showpoint << setprecision(2);


	Heading hdg;                    // Create a Heading object using defaults
	hdg.boxed();
	
	// Demonstrate the default constructor
	Inventory stockItem1;
	cout << "\nDemonstrating the default constructor...\n";
	cout << "Item number: " << stockItem1.getItemNumber() << endl;
	cout << "Quantity   : " << stockItem1.getQuantity() << endl;
	cout << "Cost       : " << stockItem1.getCost() << endl;
	cout << "Total Cost : " << stockItem1.getTotalCost() << endl << endl;

	// Now demonstrate the overloaded constructor
	Inventory stockItem2(124, 12, 84.95f);
	cout << "\nDemonstrating the overloaded constructor...\n";
	cout << "Item number: " << stockItem2.getItemNumber() << endl;
	cout << "Quantity   : " << stockItem2.getQuantity() << endl;
	cout << "Cost       : " << stockItem2.getCost() << endl;
	cout << "Total Cost : " << stockItem2.getTotalCost() << endl << endl;

	// Now demonstrate the member "set" functions
	stockItem2.setItemNumber(243);
	stockItem2.setQuantity(50);
	stockItem2.setCost(9.50);
	stockItem2.setTotalCost();
	cout << "\nDemonstrating the \"set\" functions...\n";
	cout << "Item number: " << stockItem2.getItemNumber() << endl;
	cout << "Quantity   : " << stockItem2.getQuantity() << endl;
	cout << "Cost       : " << stockItem2.getCost() << endl;
	cout << "Total Cost : " << stockItem2.getTotalCost() << endl;

	// Now demonstrate the input validation functions
	cout << "\nDemonstrating the input validation functions...\n";
	stockItem2.setItemNumber(-1);
	stockItem2.setQuantity(-1);
	stockItem2.setCost(-1);
	stockItem2.setTotalCost();
	cout << "\nItem number: " << stockItem2.getItemNumber() << endl;
	cout << "Quantity   : " << stockItem2.getQuantity() << endl;
	cout << "Cost       : " << stockItem2.getCost() << endl;
	cout << "Total Cost : " << stockItem2.getTotalCost() << endl;
	hdg.oneLine();
	return 0;
}
