// Paul Biolchini
// COSC 1550
// Homework 10, Assignment 2
// Chapter 6, Problem 12, Days Out

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int getNumEmps();			
int getDaysMissed(int);			
double avgDaysMissed(int, int);
void DisplayDays(double,int,int);

int main()
{
	int   employees,            // To hold the number of company employees.
	      daysAbsent;           // To hold the total days absent of all employees.
	double daysPerEmp;           // To hold the average days absent per employee.

	employees = getNumEmps();
	daysAbsent = getDaysMissed(employees);
	daysPerEmp = avgDaysMissed(employees, daysAbsent);
	DisplayDays(daysPerEmp,employees, daysAbsent);

	return 0;

}	// End of main function.

//*******************************************************************
// Function getNumEmps. This function asks the user to enter        *
// the number of employees in the company. Validation is performed  *
// to verify at least one employee, the value entered is            *
// then returned to function main.                                  *
//*******************************************************************

int getNumEmps()
{
	int emps;

	// Get the number of employees.
	cout << "How many employees does the company have? ";
	cin  >> emps;

	// Validate the input.
	while (emps < 1)
	{	cout << "The number of employees must be one or greater. "
	        << "Please re-enter: ";
	   cin  >> emps;
	}
	return emps;

}	// End of function getNumEmps

//*******************************************************************
// Function daysMissed. Accepts as an argument the number of        *
// employees in the company. User is asked to enter the             *
// number of days missed by each employee. Validation performed to  *
// confirm negative number is not entered. The total days missed    *
// by all employees is returned.                                    *
//*******************************************************************

int getDaysMissed(int numEmps)
{
	int days,				// To hold the days missed by a given employee
	    totalMissed = 0;	// Accumulates total days missed   

	for (int emp = 1; emp <= numEmps; emp++)	
	{	
		// Get number of days missed...
		cout << "Days missed by employee #" << setw(2) << emp << " :";
		cin  >> days;
		// Validate the input...
		while (days < 0)
		{	cout << "Days missed must be zero or greater. "
		        << "Please re-enter: ";
			cin  >> days;
		}
		totalMissed += days;	// Accumulate the number of days missed.
	}
	return totalMissed;

}	// End of function getDaysMissed

//*******************************************************************
// Function avgDaysMissed. This function accepts the number of      *
// employees and the total number of days missed by all employees   *
// as arguments. The average number of days missed is calculated    *
// and returned.                                                    *
//*******************************************************************
 
double avgDaysMissed(int emps, int days)
{
	return static_cast<double>(days) / emps;

}	// End of function avgDaysMissed

//*******************************************************************
// Function DisplayDays. This function accepts the number of        *
// average number of days missed per employee and displays          *
// the result on the screen                                        * 
//*******************************************************************

void DisplayDays(double days, int emps, int missed)
{
	cout << fixed << showpoint << setprecision(1);
	cout << "\nOur company has " << emps << " employees who missed " <<
		missed << " total days.";
	cout << "\nThe average number of days missed per ";
	cout << "employee is " << days << endl << endl;
}