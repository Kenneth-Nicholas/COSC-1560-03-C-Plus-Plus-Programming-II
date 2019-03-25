// Chapter 9 - Assignment 4, Annual Rainfall Report
// This program stores monthly rainfall data in an array 
// of structures. It then sorts and displays the data 
// in descending order of monthly rainfall.

#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes

void getData(double[], const string[], int);
void sortData(double[], string[], int);
void displayData(const double[], const string[], int);
void swapDouble(double &, double &);
void swapString(string &, string &);

const int NUM_MONTHS = 12;

int main()
{                              
	string month [NUM_MONTHS] =  {	"January", "February", "March",
									"April"  , "May"     , "June",
									"July"   , "August"  , "September",
									"October", "November", "December"} ;
	double  rain[NUM_MONTHS];

	getData (rain, month, NUM_MONTHS);
	sortData (rain, month, NUM_MONTHS);
	displayData (rain, month, NUM_MONTHS);
	
	return 0;
}

/************************************************************
 *                       	getData                          *
 * Called by: main()                                        *
 *                                                          *
 * Receives : the rain array as its first argument and an  *
 * int (numElts) as its second argument. The numElts        *
 * parameter indicates the number of elements in the array. *
 *                                                          *
 * Purpose  : Inputs, validates, and stores the rainfall    *
 *            amount for each month in the array.           *
 ************************************************************/
void getData(double rain[], const string month[], int numElts)
{
	// Enter and store the rainfall for each month

	for (int m = 0; m < numElts; m++)
	{
		cout << "Enter the rainfall (in inches) for " 
			  << month[m]  << ": ";
		cin  >> rain[m];
		while (rain[m] < 0)
		{	cout << "Rainfall must be 0 or more.  Please re-enter: ";
		   cin  >> rain[m];
		}
	}
}

/************************************************************
 *                         sortData                         *
 * Called by: main()                                        *
 *                                                          *
 * Receives : the month array as its first argument and an  *
 * int (numElts) as its second argument. The numElts        *
 * parameter indicates the number of elements in the array. *
 *                                                          *
 * Purpose  : Sorts the array elements in descending order  *
 *            by the rain field.                            *
 ************************************************************/
void sortData(double rain[], string month[], int numElts)
{
	bool swapFlag;
	do
	{	swapFlag = false;
		for (int count = 0; count < (numElts - 1); count++)
		{
//			if (rain[count] > rain[count + 1])  // ascending order
			if (rain[count] < rain[count + 1])  // descending order
			{							//swap function
				swapDouble(rain[count], rain[count+1]);
				swapString(month[count], month[count+1]);
				swapFlag = true;
			}
		}
   } while (swapFlag);
}

/************************************************************
 *                      displayData                         *
 * Called by: main()                                        *
 *                                                          *
 * Receives : the month array as its first argument and an  *
 * int (numElts) as its second argument. The numElts        *
 * parameter indicates the number of elements in the array. *
 *                                                          *
 * Purpose  : Displays the sorted rainfall data.            *
 ************************************************************/
void displayData(const double rain[], const string month[], int numElts)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nMonthly Rainfall Totals\n\n";
	for (int m = 0; m < numElts; m++)
	{	cout << left << setw(12) << month[m] 
	        << right << setw(5) << rain[m] << endl;
	}
	cout << endl;
}

void swapDouble(double & a, double & b)
{
	double  temp = a;
	a = b;
	b = temp;
}

void swapString(string & a, string & b)
{
	string  temp = a;
	a = b;
	b = temp;
}