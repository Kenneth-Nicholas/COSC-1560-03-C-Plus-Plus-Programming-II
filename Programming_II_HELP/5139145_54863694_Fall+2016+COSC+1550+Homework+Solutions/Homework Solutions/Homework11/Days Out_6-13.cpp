// Chapter 6, Programming Challenge 13: Days Out
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int getEmployees();
int getDaysOut(int);
double calcAverage(int, int);

int main()
{
	int employees;	// To hold the number of employees
	int daysOut;	// To hold the number of days missed
	double average;	// To hold the average days missed

	// Get the number of employees.
	employees = getEmployees();

	// Get the number of days missed by all employees.
	daysOut = getDaysOut(employees);

	// Get the average number of days missed.
	average = calcAverage(employees, daysOut);

	// Display the average.
	cout << setprecision(2) << fixed << showpoint;
	cout << "\nThe average number of days missed was "
		 << average << ".\n\n";

	return 0;
}

// ********************************************************
// The getEmployees function asks the user for the number *
// of employees in the company, validates, and returns    *
// the value.                                             *
// ********************************************************
int getEmployees()
{
	int employees;	// To hold the number of employees.

	// Get the number of employees in the company.
	cout << "How many employees are there in the company? ";
	cin >> employees;

	// Validate the number of employees.
	while (employees < 1)
	{
		cout << "The number of employees must be at least 1.\n"
		     << "How many employees are there in the company? ";
		cin >> employees;
	}

	// Return the number of employees in the company.
	return employees;
}

// ********************************************************
// The getDaysOut function accepts the number of employees*
// in the company as an argument. It asks the user to     *
// enter the number of days each employee missed during   *
// the past year, validates it, and returns the total.	  *
// ********************************************************
int getDaysOut(int employees)
{
	int daysOut;	// To hold the days missed
	int total = 0;	// To hold the running total

	// Get the number of days missed by each employee.
	for (int count = 1; count <= employees; count++)
	{
		cout << "How many days did employee " 
			 << count << " miss? ";
		cin >> daysOut;

		// Validate the number of days missed.
		while(daysOut < 0)
		{
			cout << "The days missed must be at least 0.\n"
			     << "How many days did employee " 
				 << count << " miss? ";
			cin >> daysOut;
		}

		// Increment the total.
		total += daysOut;
	}

	// Return the total days missed for all employees.
	return total;
}

// ********************************************************
// The calcAverage function takes the number of employees *
// in the company and the total number of days absent for *
// all employees during the year as arguments. The        *
// function returns the average number of days absent.    *
// ********************************************************
double calcAverage(int employees, int daysOut)
{
	// Return the average number of days missed.
	return static_cast<double>(daysOut) / employees;
}