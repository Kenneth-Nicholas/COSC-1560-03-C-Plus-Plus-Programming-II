// Chapter 4 - Programming Challenge 3, Magic Dates
// This program identifies "magic" dates, where a date is magic if
// the month number times the day number equals the 2-digit year number.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month,     // Month in 1 or 2-digit form
		day,       // Day in 1 or 2-digit form
		year,      // Year in 2-digit form
	monthDay;	   // product of month * day

	// Get the date month, day, and year of the date to be tested
	cout << "A date is \"magic\" if month X day = year. \n";
	cout << "Enter a date and I will tell you if it is magic. \n\n";
	cout << "month number: ";
	cin  >> month;

	cout << "day number  : ";
	cin  >> day;

	cout << "2-digit year number: ";
	cin  >> year;

	monthDay = month * day;
	if (monthDay == year)
	{
		cout << "\nThis date is magic. " << month << " X " << day << " = " << year << endl;
	}
	else
	{
		cout << "\nThis date is not magic. \n"; 
	}

	return 0;

// Results
//	A date is "magic" if month X day = year.
//  Enter a date and I will tell you if it is magic.
//
//  month number: 6
//  day number  : 10
//  2-digit year number: 60 
//
//  This date is magic. 6 X 10 = 60
//  Press any key to continue . . .
