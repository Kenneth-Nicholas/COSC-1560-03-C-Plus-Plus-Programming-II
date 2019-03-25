// Paul Biolchini
// COSC 1550 Fall 2004
// Chapter 5, Problem 6
// Homework 8 Assignment 1
// Average Rainfall
#include <iostream>
#include <iomanip>
using namespace std;
   
float getRain();
int getYears();
float calcAverage(int,float);

int main()
{
	int   years,                   // To hold the number of years 
	      totalMonths;             // To hold the number of months
	float inches,                  // To hold the rainfall for a given month
	      totalInches = 0,         // To hold the total rainfall for all months
	      average;                 // To hold the average monthly rainfall

	// Get the number of years.
	years = getYears();					//call to getYears function

	// Get the rainfall for each month of each year.
	for (int yearNumber = 1; yearNumber <= years; yearNumber++)	
	{
		cout << "\nYear " << yearNumber << endl;
		for (int month = 1; month <= 12; month++)	
		{	
			inches = getRain();					//call to getRain function
			totalInches += inches;	
		}
	}
	totalMonths = years * 12;
	average = calcAverage(totalMonths,totalInches); 					//call to calcAverage function

	cout << "\nOver a period of " << totalMonths << " months, " 
		<< totalInches << " inches of rain fell.\n";
	cout << fixed << showpoint << setprecision(3);
	cout << "Average monthly rainfall for the period is "
	     << average << " inches.\n\n";

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

float getRain()
{
	float rain;
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

float calcAverage(int months, float inches)
{
	return inches / months;
}