// Paul Biolchini
// COSC 1550
// Homework 6, Assignment 1
// Chapter 4, Problem 3
// Magic Dates

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Know - Magic Date is Month time date = year
	// Know - Two digit year
	// Validation - all entries > 0; Year < 100
	// Want - if day*month == year true or not

	// variable definition
	int day, 
	month, 
	year,
	monthDay;
	bool errFlag = false;

	// input
	cout << "Please enter a number between 1 and 12 for the month: ";
	cin >> month;
	if (month < 1 || month > 12)
	{
		cout << "The month must be between 1 and 12.  Quitting!\n";
		errFlag = true;
	}

	if(!errFlag)
	{
		cout << "Please enter a number between 1 and 31 for the day: ";
		cin >> day;
		if (day < 1 || day > 31)
		{
			cout << "The day must be between 1 and 31.  Quitting!\n";
			errFlag = true;
		}

	}

	if(!errFlag)
	{
		cout << "Please enter a number greater than zero and less than 100 for the year: ";
		cin >> year;
		if(year < 0 || year > 99)
		{
			cout << "Please enter a number greater than 0 and less than 100.  Quitting!\n";
			errFlag = true;
		}
	}
	if(errFlag)
	{
		cout << "Incorrect data entry.  Goodbye.\n";
	}
	else
	{
	// calculation
	    monthDay = day * month;
		if (monthDay == year)
		{
		// output
			cout << "Yes, " << month << "/" << day << "/" << year << " is a Magic Date!\n";
		}
		else
		{
			cout << "No, " << month << "/" << day << "/" << year << " is NOT a Magic Date!\n";
		}

	}
	return 0;
}