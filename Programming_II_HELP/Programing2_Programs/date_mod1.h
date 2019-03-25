// date_mod.h
// Paul Biolchini
// 1 November, 2004
// 19 September 2005

#ifndef DATE_MOD_H
#define DATE_MOD_H

#include<string>
using namespace std;
class Date
{
private:
	int month;					// holds the month value
	int day;					// holds the day value
	int year;					// holds the 4 digit year value
	string names[12];			// holds the array of month names
	string daysOfWeek[7];		// holds the array of weekday names
	void setNames();			// returns the array of month names
	string int2String(int, int);// helper function used to convert an int to a string
	void decodeYear(int, string &); //helper function used to extract a 2 digit year string
	string getDayOfWeek();		// return day of the week for current date
	string itos(int);				// helper function used to convert an int to a string - per Rob Long
	void incrMonth();
	void incrYear();
	int properDay(int, int, int);
    bool IS_LEAP_YEAR(int);

public:
	Date();					// default constructor
	Date(int, int, int);	// overloaded constructor
	void setMonth(int );	 // assign a value to month
	void setDay(int d);		 // assign a value to day
	void setYear(int y);	 // assign a value to year
	string showDate1();		// displays the date in the format: 03/29/2004
	string showDate2();		// displays the date in the format: March 29, 2004
	string showDate3();		// displays the date in the format: 29 March 2004
	string showDate4();		// displays the date in the format: Monday, March 29, 2004
	void incrDays(int);
	//int getWorkDay();
};

#endif