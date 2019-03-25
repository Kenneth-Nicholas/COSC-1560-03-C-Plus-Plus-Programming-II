// Paul Biolchini
// COSC 1550 Fall 2004
// Average Rainfall
#include <iostream>
#include <iomanip>
using namespace std;
   
double getRain(int);
int getYears();
double calcAverage(int, double);
void displayRainfallTotals(int, double);

int main()
{
	int   years;                   // To hold the number of years 
	double totalInches = 0.0;       // To hold the total rainfall for all months

	// Get the number of years.
	years = getYears();					//call to getYears function

	// Get the rainfall for each month of each year.
	for (int yearNumber = 1; yearNumber <= years; yearNumber++)	
	{
		cout << "\nYear " << yearNumber << endl;
		for (int month = 1; month <= 12; month++)	
		{	
			totalInches += getRain(month);	
		}
	}
	displayRainfallTotals(years, totalInches);
	return 0;
}

int getYears()
{
	int yrs;
	cout << "This program will calculate average rainfall over a \n"
		  << "period of years.  How many years do you wish to average? ";
	cin  >> yrs;

	while (yrs < 1)
	{	cout << "Number of years must be at least one.  Please re-enter: ";
		cin  >> yrs;
	}
	return yrs;
}

double getRain(int month)
{
	double rain;
	do
	{
		cout << "Number of inches of rain for month " 
			<< setw(2) << month << "? ";
		cin  >> rain;
		if (rain < 0)
			cout << "Rainfall must be greater than or equal to zero.\n";
		}while (rain < 0);	
	return rain;
}

double calcAverage(int months, double inches)
{
	return inches / months;
}

void displayRainfallTotals(int years, double totalInches)
{
	int totalMonths;   // To hold the number of months
	double average;    // To hold the average monthly rainfall
	totalMonths = years * 12;
	average = calcAverage(totalMonths, totalInches); //call to calcAverage function

	cout << "\nOver a period of " << totalMonths << " months, "
		<< totalInches << " inches of rain fell.\n";
	cout << fixed << showpoint << setprecision(3);
	cout << "Average monthly rainfall for the period is "
		<< average << " inches.\n\n";


}