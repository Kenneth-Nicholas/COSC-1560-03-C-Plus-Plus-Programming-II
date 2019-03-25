//*******************************************************************************************************
//
//        File:              snack.h
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

#ifndef SNACK_H
#define SNACK_H
#include<string>

using namespace std;

//*******************************************************************************************************

class Snack
{
private:
	string snkName;
	char snkType;
	double snkSize;
	double snkPrice;
	int snkCalories;
public:
	Snack(string name = "", char type = 'Z', double size = 0.0, double price = 0.0, int cals = 0);
	Snack(const Snack &copy);
	~Snack();
	void setSnkName(string);
	void setSnkType(char);
	void setSnkSize(double);
	void setSnkPrice(double);
	void setSnkCalories(int);
	string getSnkName();
	char getSnkType();
	double getSnkSize();
	double getSnkPrice();
	int getSnkCalories();
};
#endif

//*******************************************************************************************************