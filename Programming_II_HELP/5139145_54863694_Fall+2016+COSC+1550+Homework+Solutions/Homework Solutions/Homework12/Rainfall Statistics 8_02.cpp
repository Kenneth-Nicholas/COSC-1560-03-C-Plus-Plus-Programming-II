// Chapter 8 - Assignment 2, Rainfall Statistics
// This program calculates rainfall statistics 
// using data stored in an array.

#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void getRainFallAmounts(double [], const string [], int);
double getTotal(const double [], int);
double getAverage(const double [], int);
double getLargest(const double [], int, int &);
double getSmallest(const double [], int, int &);

int findLargest(const double [], int);
int findSmallest(const double [], int);

int main()
{
	const int NUM_MONTHS = 12;
	string monthName[NUM_MONTHS] = { "January", "February", "March",
									 "April", "May", "June",
									 "July", "August", "September",
									 "October", "November", "December"};
    double rainFall[NUM_MONTHS];  // stores total rainfall for each 
                                 // month of the year
	// Enter and store the rainfall 
	getRainFallAmounts(rainFall, monthName, NUM_MONTHS);
	
	// Display the total rainfall
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Total   rainfall for the year was ";
	cout << setw(5) << getTotal(rainFall, NUM_MONTHS) << " inches." << endl;
	
	// Display the average rainfall
	cout << "Average rainfall for the year was ";
	cout << setw(5) << getAverage(rainFall, NUM_MONTHS) << " inches." << endl << endl;

	// Display the months with the largest & smallest amounts of rain.
   // The variable index is passed by reference to getLargest & 
   // getSmallest, who place in it the subscript of the array 
   // element having the largest, or smallest, amount of rainfall.
	int month; 
	cout << "The largest  amount of rainfall was " << setw(5);
	cout << getLargest(rainFall, NUM_MONTHS, month) << " inches in ";
	cout << monthName[month] << "." << endl;

	cout << "The smallest amount of rainfall was " << setw(5);
	cout << getSmallest(rainFall, NUM_MONTHS, month) << " inches in ";
	cout << monthName[month] << "." << endl;

	cout << endl;

	int large = findLargest(rainFall, NUM_MONTHS);
	cout << "The largest  amount of rainfall was " << setw(5);
	cout << rainFall[large] << " inches in ";
	cout << monthName[large] << "." << endl;


	int small = findSmallest(rainFall, NUM_MONTHS);
	cout << "The smallest  amount of rainfall was " << setw(5);
	cout << rainFall[small] << " inches in ";
	cout << monthName[small] << "." << endl;


	return 0;
}

/************************************************************
 *                       	getTotal                         *
 * Called by: main() and getAverage()                       *
 *                                                          *
 * Receives: a double array as its first argument and an    *
 * int (numElts) as its second argument. The numElts        *
 * parameter indicates the number of elements in the array. *
 *                                                          *
 * Purpose: Calculates and returns the total of the numbers *
 * stored in the array.                                     *
 ************************************************************/
double getTotal(const double array[], int numElts)
{
	double total = 0.0;

	for (int pos = 0; pos < numElts; pos++)
	{
		total += array[pos];
	}

	return total;
}

/************************************************************
 *                     	getAverage                          *
 * Called by: main()                                        *
 *                                                          *
 * Receives: a double array as its first argument, and an   *
 * int as its second argument. The int parameter, numElts,  *
 * indicates the number of elements in the array.           *
 *                                                          *
 * Calls: GetTotal to return the total of the values in the *
 * array and uses this to compute the average.              *
 *                                                          *
 * Purpose: Calculates and returns the average of the       *
 * numbers stored in the array.                             *
 ************************************************************/
double getAverage(const double array[], int numElts)
{
	double average = getTotal(array, numElts) / numElts;
	
	return average;
}

/************************************************************
 *                     	getLargest                          *
 * Called by: main()                                        *
 *                                                          *
 * Receives: a double array as its first argument, an       *
 * int (numElts) as its second argument, and a reference to *
 * an int (element) as its third argument. The numElts      *
 * parameter indicates the number of elements in the array. *
 *                                                          *
 * Purpose: Finds and returns the largest value stored      *
 * in the array. "Sends back" the subscript of the element  *
 * holding this value by placing it in the reference        *
 * parameter, element.                                      *
 ************************************************************/
double getLargest(const double array[], int numElts, int &element)
{
	double largest = array[0];
	element = 0;
   
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] > largest)
		{
			largest = array[pos];
			element = pos;
		}
	}		
	return largest;
}

/************************************************************
 *                     	getSmallest                         *
 * Called by: main()                                        *
 *                                                          *
 * Receives: a double array as its first argument, an       *
 * int (numElts) as its second argument, and a reference to *
 * an int (element) as its third argument. The numElts      *
 * parameter indicates the number of elements in the array. *
 *                                                          *
 * Purpose: Finds and returns the smallest value stored     *
 * in the array. "Sends back" the subscript of the element  *
 * holding this value by placing it in the reference        *
 * parameter, element.                                      *
 ************************************************************/
double getSmallest(const double array[], int numElts, int &element)
{
	double smallest = array[0];
	element = 0;
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] < smallest)
		{
			smallest = array[pos];
			element = pos;
		}
	}		
	return smallest;
}


int findLargest(const double array[], int numElts)
{
	double largest = array[0];
	int element = 0;
   
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] > largest)
		{
			largest = array[pos];
			element = pos;
		}
	}		
	return element;

}

int findSmallest(const double array[], int numElts)
{
	//double smallest = array[0];
	int element = 0;
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] < array[element])
		{
//			smallest = array[pos];
			element = pos;
		}
	}		
	return element;
}


void getRainFallAmounts(double rain[], const string mName[], int NUM_MONTHS)
{
		// Enter and store the rainfall 
	for (int month = 0; month < NUM_MONTHS; month++)
	{
		cout << "Enter the rainfall (in inches) for ";
		cout << mName[month] << ": ";
		cin  >> rain[month];
		while (rain[month] < 0)
		{	cout << "Rainfall must be 0 or more.  Please re-enter: ";
		   cin  >> rain[month];
		}
	}
}