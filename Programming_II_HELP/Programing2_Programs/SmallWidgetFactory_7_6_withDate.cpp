// SmallWidgetFactory_7_6.cpp
// Paul Biolchini
// COSC 1560 Spring 2006
// Homework 5 Assignment 2
// Widget Factory Problem 7.6

#include <iostream>
#include "FactoryDate.h"
using namespace std;

int main()
{
	Factory widget;
	int m,d,y;
	cout << "Please enter today\'s date( mm dd yyyy):";
	cin >> m >> d >> y;
	widget.setTodayDate(m,d,y);
	
	int num;
	cout << "Enter the number of widgets ordered: ";
	cin >> num;
	while(num < 0)
	{
		cout << "Enter a positive number of widgets ordered: ";
		cin >> num;
	}
	cout << "\nYour order will be shipped in " << widget.DeliverySchedule(num) << " days on ";
	widget.showShipDate(num, 4);
	cout << "\n";
	return 0;
}