// Chapter 7 - Assignment 6, Date
// This program implements and tests a Date class that 
// stores dates and displays them in various formats.

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int month;        // holds the month number
	int day;          // holds the day 
	int year;         // holds the 4 digit year
	string name;      // holds the month name
   void setName();
public:
	Date();
	Date(int, int, int);
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);
	void showDate1();
	void showDate2();
	void showDate3();
};

/*******************************************************
 *                      Date                           *
 * Date class default constructor                      *
 * Sets date to Jan. 1, 2001                           *
 *******************************************************/
Date::Date()
{
	month = day = 1;   
	year  = 1980;
	setName();
}

/*******************************************************
 *                      Date                           *
 * Date overloaded constructor                         *
 * Calls class "set" function to set the date to the   *
 * month/day/year passed to it                         *
 *******************************************************/
Date::Date(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);	
}

/*******************************************************
 *                   setMonth                          *
 * Validates that the month number passed in is 1-12   *
 * and, if so, sets the month to that number.          *
 *******************************************************/
void Date::setMonth(int m)
{  
	if (m >= 1 && m <= 12)
   {	month = m;
      setName();
   }

	else
   {	cout << m << " is not a valid value for the month.\n";
      month = 1;     // Use default value
   }
}

/********************************************************
 *                     setDay                           *
 * Validates that the day number passed in is 1-31      *
 * and, if so, sets the month to that number.           *
 *                                                      *
 * Note: This was the validation requested in the       *
 * problem specification. However, a "better" validation*
 * method would be to use a switch statement and test   *
 * day ranges of 1-31 for months 1,3,5,7,8,10,12        *
 * 1-30 for months 4,6,9,11, and 1-29 for month 2       *
 ********************************************************/
void Date::setDay(int d)
{
	if (d >= 1 && d <= 31)
   	day = d;
	else
  	{	cout << d << " is not a valid value for the day.\n";
      day = 1;       // Use default value
   }
}

/**************************************************************
 *                           setYear                          *
 * Validates that the year passed in is between 1900 and 2010.*
 * and, if so, sets the year to the year passed in.           *
 **************************************************************/
void Date::setYear(int y)
{
	if (y < 1950 || year > 2020)
   {	cout << y << " is not a valid value for the year.\n";
      cout << "Set the year with a 4 digit value between 1900 and 2020.\n";
      year = 1980;   // Use default value
   }
	else
   	year = y;
}

/*******************************************************
 *                     setName                         *
 * Sets the month name that matches the month number.  *
 *******************************************************/
void Date::setName()
{
	switch (month)
	{ 
		case  1: name = "January";  break;
		case  2: name = "February"; break;
		case  3: name = "March";    break;
		case  4: name = "April";    break;
		case  5: name = "May";      break;
		case  6: name = "June";     break;
		case  7: name = "July";     break;
		case  8: name = "August";   break;
		case  9: name = "September";break;
		case 10: name = "October";  break;
		case 11: name = "November"; break;
		case 12: name = "December"; 
	}
}

/*******************************************************
 *                   showDate1                         *
 * Displays the date in the format: 3/15/2006          *
 *******************************************************/
void Date::showDate1()
{
   //int twoDigitYear;

   //if (year >= 2000)
   //   twoDigitYear = year - 2000;
   //else
   //   twoDigitYear = year - 1900;
   
	cout << month << '/' << day << '/' << year ;
 //  if (twoDigitYear < 10)
 //     cout << '0';
 //  cout << twoDigitYear << endl;
}

/*******************************************************
 *                   showDate2                         *
 * Displays the date in the format: March 15, 2006     *
 *******************************************************/
void Date::showDate2()
{
	cout << name << " " << day << ", " << year << endl;
}

/*******************************************************
 *                   showDate3                         *
 * Displays the date in the format: 15 March 2006      *
 *******************************************************/
void Date::showDate3()
{
	cout << day << " " << name << " " << year << endl;
}

/*******************************************************
 *                       main                          *
 *******************************************************/
int main()
{
	Date today;           // Create a date object using default constructor

	today.showDate2();    // Show the date set by the default constructor
   cout << endl;
   
	today.setMonth(2);   // Call class functions to set the date
	today.setDay(20);
	today.setYear(2017);

	today.showDate1();    // Display date using format 1
   cout << endl;
	today.showDate2();    // Display date using format 2
   cout << endl;
	today.showDate3();    // Display date using format 3
   cout << endl;
   Date tomorrow(2, 21, 2017);
   tomorrow.showDate1();    // Display date using format 1
   cout << endl;
   tomorrow.showDate2();    // Display date using format 2
   cout << endl;
   tomorrow.showDate3();    // Display date using format 3
   cout << endl;

	return 0;
}

