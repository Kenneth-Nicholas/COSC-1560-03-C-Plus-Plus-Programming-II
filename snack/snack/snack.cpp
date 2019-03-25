//*******************************************************************************************************
//
//        File:              snack.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #6: Snack
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Oct 11, 2017
//
//
//        This program...
//
//        Files required:
//    			   1.      snack_driver.cpp	   - main .cpp file
//				   2.      snack.cpp	       - snack class .cpp file
//                 3.      snack.h	           - header file containing state class definition
//				   4.      a6.txt		       - text file of output
//                 5.      snacks.txt          - text file of input
//
//
//*******************************************************************************************************

#include "snack.h"
#include <string>

using namespace std;

//*******************************************************************************************************

Snack::Snack(string name, char type, double size, double price, int cals)
{
	snkName = name;
	snkType = type;
	snkSize = size;
	snkPrice = price;
	snkCalories = cals;
}

//*******************************************************************************************************

Snack::Snack(const Snack &copy)
{
	snkName = copy.snkName;
	snkType = copy.snkType;
	snkSize = copy.snkSize;
	snkPrice = copy.snkPrice;
	snkCalories = copy.snkCalories;
}

//*******************************************************************************************************

Snack::~Snack()
{
	snkName = "";
	snkType = 'Z';
	snkSize = 0.0;
	snkPrice = 0.0;
	snkCalories = 0;
}

//*******************************************************************************************************

void Snack::setSnkName(string name)
{
	snkName = name;
}

//*******************************************************************************************************

void Snack::setSnkType(char type)
{
	snkType = type;
}

//*******************************************************************************************************

void Snack::setSnkSize(double size)
{
	snkSize = size;
}

//*******************************************************************************************************

void Snack::setSnkPrice(double price)
{
	snkPrice = price;
}

//*******************************************************************************************************

void Snack::setSnkCalories(int cals)
{
	snkCalories = cals;
}

//*******************************************************************************************************

string Snack::getSnkName()
{
	return snkName;
}

//*******************************************************************************************************

char Snack::getSnkType()
{
	return snkType;
}

//*******************************************************************************************************

double Snack::getSnkSize()
{
	return snkSize;
}

//*******************************************************************************************************

double Snack::getSnkPrice()
{
	return snkPrice;
}

//*******************************************************************************************************

int Snack::getSnkCalories()
{
	return snkCalories;
}

//*******************************************************************************************************