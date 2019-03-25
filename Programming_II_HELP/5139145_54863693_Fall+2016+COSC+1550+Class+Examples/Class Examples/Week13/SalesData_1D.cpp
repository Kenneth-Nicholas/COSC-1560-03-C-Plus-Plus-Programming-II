// This program gets a set of sales data from the user
// and displays the total, average, highest, and lowest amounts.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double sumArray(const double[], int);
double getHighest(const double[], int);
double getLowest(const double[], int);

int main()
{
	const int NUM_DAYS = 5;  // Number of days
	double sales[NUM_DAYS],  // Holds the daily sales amounts
         total,             // Holds the week's total sales
         average,           // Holds the average daily sales
         highest,           // Holds the highest daily sales
         lowest;            // Holds the lowest daily sales 

	// Get the sales data
	cout << "Enter the sales for this week.\n";
	for (int day = 0; day < NUM_DAYS; day++)
	{	cout << "Day " << (day +1) <<": ";
		cin  >> sales[day];
	}

	// Get total sales and compute average sales
	total = sumArray(sales, NUM_DAYS);
	average = total / NUM_DAYS;

	// Get highest and lowest sales amounts
	highest = getHighest(sales, NUM_DAYS);
	lowest = getLowest(sales, NUM_DAYS);

	// Display results
   cout << fixed << showpoint << setprecision(2) << endl;
   cout << "The total sales are         $" << setw(9) << total   << endl;
   cout << "The average sales amount is $" << setw(9) << average << endl;
   cout << "The highest sales amount is $" << setw(9) << highest << endl;
   cout << "The lowest sales amount  is $" << setw(9) << lowest  << endl;
	return 0;
}

//****************************************************
// Definition of sumArray                            *
// This function computes and returns the sum of the *
// values in the double array passed to it.          *
//****************************************************
double sumArray(const double arr[], int size)
{
	double total = 0;	  // Accumulator

	for (int count = 0; count < size; count++)
		total += arr[count];
	return total;
}

//*****************************************************
// Definition of getHighest                           *
// This function finds and returns the largest value  *
// in the double array passed to it.                  *
//*****************************************************
double getHighest(const double arr[], int size)
{
	double highest = arr[0];

	for (int count = 1; count < size; count++)
	{	if (arr[count] > highest)
			highest = arr[count];
	}
	return highest;
}

//*****************************************************
// Definition of getLowest                            *
// This function finds and returns the smallest value *
// in the double array passed to it.                  *
//*****************************************************
double getLowest(const double arr[], int size)
{
	double lowest = arr[0];

	for (int count = 1; count < size; count++)
	{	if (arr[count] < lowest)
			lowest = arr[count];
	}
	return lowest;
}
