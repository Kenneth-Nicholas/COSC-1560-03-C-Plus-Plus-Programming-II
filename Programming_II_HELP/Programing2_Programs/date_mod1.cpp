// date_mod.cpp
// Paul Biolchini
// 1 November, 2004
// 19 September 2005

#include <string>
#include <cstdlib>
#include <sstream>
#include "date_mod1.h"

using namespace std;
/*******************************************************
*                      Date                            *
* Date class default constructor                       *
* Sets date to Jan. 1, 2000                            *
*******************************************************/

Date::Date()
{
	month = day = 1;   
	year  = 2000;
	setNames();
}

/*******************************************************
*                      Date                            *
* Date overloaded constructor                          *
* Calls class "set" function to set the date to the    *
* month/day/year passed to it                          *
*******************************************************/

Date::Date(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);	
	setNames();
}

/*******************************************************
*                     setNames                         *
* the month names are stored as an array of strings    *
* and the month number is used as as a subscript to    *
* directly obtain the matching month name.             *
*******************************************************/

void Date::setNames()
{
	names[0] = "January";
	names[1] = "February";
	names[2] = "March";
	names[3] = "April";
	names[4] = "May";
	names[5] = "June";
	names[6] = "July";
	names[7] = "August";
	names[8] = "September";
	names[9] = "October";
	names[10] = "November";
	names[11] = "December";

	daysOfWeek[0] = "Sunday";
    daysOfWeek[1] = "Monday";
    daysOfWeek[2] = "Tuesday";
    daysOfWeek[3] = "Wednesday";
    daysOfWeek[4] = "Thursday";
    daysOfWeek[5] = "Friday";
    daysOfWeek[6] = "Saturday";
}



/*******************************************************
*                     setMonth                         *
*  assign a value to month                             *
*******************************************************/

void Date::setMonth(int m)
{
	month = m;
	//if (m >= 1 && m <= 12)
	//	month = m;
	//else
 //  {	cout << m << " is not a valid value for the month.\n";
 //     month = 1;     // Use default value
 //  }

}

/*******************************************************
*                     setDay                           *
*  assign a value to day                             *
*******************************************************/
void Date::setDay(int d)
{
	day = d;
}	

/*******************************************************
*                     setYear                          *
*  assign a value to year                              *
*******************************************************/
void Date::setYear(int y)
{
	year = y;
}


void Date::incrYear()
{
	year++;
}

void Date::incrMonth()
{
	month++;
	if(month > 12)
	{
		month = 1;
		incrYear();
	}
}

void Date::incrDays(int days)
{
	int theDay = day;

	for(int i = 0; i < days; i++)
	{
		theDay++;
		if (theDay >= properDay(theDay, month, year))
		{
			theDay = 1;
			incrMonth();
		}
	}
	day = theDay;
}


/*******************************************************
*                   showDate1                          *
* Displays the date in the format: 03/29/2004          *
*******************************************************/

string Date::showDate1()
{
	string sho,twoDigitYear;
	if(month < 10)
	{
		sho.assign("0");
//		sho.append(int2String(month,2));
		sho.append(itos(month));
	}
	else
//		sho.assign(int2String(month,2));
		sho.assign(itos(month));
	sho += "/";
	if (day < 10)
		sho.append("0");
//	sho.append(int2String(day,2));
	sho.append(itos(day));
	sho += "/";
	decodeYear(year, twoDigitYear);
	sho.append(twoDigitYear);
	return sho;
}

/*******************************************************
*                   showDate2                          *
* Displays the date in the format: March 29, 2004      *
*******************************************************/

string Date::showDate2()
{
	string sho,name;
	sho.assign(names[month-1]);
	sho += " ";
//	sho += int2String(day,2);
	sho += itos(day);
	sho += ", ";
//	sho += int2String(year,4);
	sho += itos(year);
	return sho; //names[month+1] + " " + day + ", " + year;
}

/*******************************************************
*                   showDate3                          *
* Displays the date in the format: 29 March 2004       *
*******************************************************/

string Date::showDate3()
{
	string sho;
	sho.assign(int2String(day,2));
	sho += " ";
	sho.append(names[month-1]);
	sho += " ";
//	sho += int2String(year,4);
	sho += itos(year);
	return sho; //day + " " + names[month+1] + " " + year;
}

/*******************************************************
*                   showDate4                          *
* Displays the date in the format: Monday March 29, 2004      *
*******************************************************/

string Date::showDate4()
{
	string sho;
	sho.assign(getDayOfWeek());
	sho += " ";
	sho.append(names[month-1]);
	sho += " ";
//	sho += int2String(day,2);
	sho += itos(day);
	sho += ", ";
//	sho += int2String(year,4);
	sho += itos(year);
	return sho; //daysOfWeek[x] + " " + names[month+1] + " " + day + ", " + year;
}

/*******************************************************
*                   int2String                         *
* helper function used to convert an int to a string   *
*******************************************************/

string Date::int2String(int i, int num)
{
	string toString;
	char *strInt = new char[num+1];
	itoa(i, strInt, 10);
	toString.assign(strInt);
	delete [] strInt;
	return toString;
}
/**********************************************************
*                   decodeYear                            *
* helper function used to extract a 2 digit year string   *
**********************************************************/

void Date::decodeYear(int year, string &twoDY)
{
	int iThou, iHun, iTen, iOne, rem;
	int M, C, D, O;
	M = year / 1000;
	iThou = M * 1000;
	rem = year - iThou;
	C = rem / 100;
	iHun = C * 100;
	rem -= iHun;
	if(rem < 10)
	{
		twoDY.assign("0");
//		twoDY.append(int2String(rem,2));
		twoDY.append(itos(rem));
	}
	else
//		twoDY.assign(int2String(rem,2));
		twoDY.assign(itos(rem));
	//D = rem / 10;
	//iTen = D * 10;
	//rem -= iTen;
	//O = rem;
	//iOne = O * 1;
}

/**********************************************************
*                   getDayOfWeek                          *
* helper function used to find the day of the week of the *
* current date.                                           *
**********************************************************/

string Date::getDayOfWeek( )
{
	int m ;//= month;
	int d ;//= day;
	int y ;//= year;
	//if(m < 3)
	//{
 //     m += 12;
 //     y++ ;
	//}
	//long jd = d + (153 * m - 457) / 5 + 365 * y + (y / 4) - (y / 100) + (y / 400) + 1721119;

	//int res= (static_cast<int>(jd + 1.5)) % 7;

	int a = (14 - month) / 12;
	y = year - a;
	m = month + 12 * a - 2;
	d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m / 12)) % 7;

//	return daysOfWeek[res];
	return daysOfWeek[d];
}

/*******************************************************
*                   itos                               *
* helper function used to convert an int to a string   *
* From Rob Long 19 September 2005                      *
*******************************************************/

string Date::itos(int i)
{
	stringstream toString;
	toString << i;
	return toString.str();
}

/*********************************************************
*                   properDay                            *
* function used to determine if the day entered is valid *
*********************************************************/

int Date::properDay(int d, int m, int y)
{
	int good = 0;
	if (m == 4 || m == 6 || m == 9 || m == 11)
		good = 30;
	else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		good = 31;
	else if(m == 2)
	{
		if(IS_LEAP_YEAR(y))
		{
			good = 29; // leap year
		}
		else
		{
			good = 28;
		}
	}
	return good;
}

/*********************************************************************************************
*                   IS_LEAP_YEAR                                                             *
* function used to determine if the year entered is a leap year based on these rules:        *
* 1. A year that is divisible by 4 is a leap year. (Y % 4) == 0                              * 
* 2. Exception to rule 1: a year that is divisible by 100 is not a leap year. (Y % 100) != 0 *
* 3. Exception to rule 2: a year that is divisible by 400 is a leap year. (Y % 400) == 0     *
*********************************************************************************************/

bool Date::IS_LEAP_YEAR(int Y)
{
	return( ((Y)>0) && !((Y)%4) && ( ((Y)%100) || !((Y)%400) ) );
}