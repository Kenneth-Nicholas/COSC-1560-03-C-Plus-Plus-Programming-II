// This is the inventory.cpp file.
// It contains the Inventory class function definitions. 

#include <iostream>
#include "Inventory.h"
using namespace std;

//************************************************************
// Overloaded constructor
// Accepts arguments to be stored in each member variable.
//************************************************************
Inventory::Inventory(int in, int q, double c)
{ 
	setItemNumber(in);
	setQuantity(q);
	setCost(c);
	setTotalCost();
}

//************************************************************
// setItemNumber accepts an argument to be stored in item number.
//************************************************************
void Inventory::setItemNumber(int in)
{
	while (!validInt(in))
	{
		cout << "Item Number must be positive. Please re-enter: ";
		cin  >> in;
	}
	itemNumber = in; 
}

//************************************************************
// setQuantity accepts an argument to be stored in quantity.
//************************************************************
void Inventory::setQuantity(int q)
{
	while (!validInt(q))
	{
		cout << "Quantity must be positive. Please re-enter: ";
		cin  >> q;
	}
	quantity = q; 
}

//************************************************************
// setCost accepts an argument to be stored in cost.
//************************************************************
void Inventory::setCost(double c)
{
	while (!validInt(c))
	{
		cout << "Cost must be positive. Please re-enter: ";
		cin  >> c;
	}
	cost = c; 
}

//************************************************************
// The validInt member tests its integer argument to see 
// if it is negative. If the argument is negative, the function 
// returns false. Otherwise, the function returns true.
//************************************************************
bool Inventory::validInt(int value)
{
	if (value < 0)    // the value is negative so it is NOT valid
		return false;
	else              // the integer value is valid
		return true;  
}

//************************************************************
// The validFloat member tests its floating-point argument to see
// if it is negative. If the argument is negative, the function 
// returns false. Otherwise, the function returns true.
//************************************************************
bool Inventory::validFloat(double value)
{
	if (value < 0)    // the value is negative so it is NOT valid
		return false;
	else              // the floating-point value is valid
		return true;
}
