// Paul Biolchini
// COSC 1550.07 Fall 2004
// Homework 12, Assignment 2
// Chapter 8 Problem 6
// Payroll
// This program creates a payroll report for a set of employees 
// whose data is stored in a set of parallel arrays.  

#include <iostream>
#include <iomanip>
using namespace std;


// Function Prototypes
void getEmployeeInfo(long [], int [], float [], float [], int);
void displayWages(long [], float [], int);

int main()
{
	const int size = 7;
	long  empId[size] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
	int   hours[size];
	float payRate[size],
		   wages[size];

	getEmployeeInfo(empId, hours, payRate, wages, size);
	displayWages(empId, wages, size);

	return 0;
}


/**************************************************************
 *                  getEmployeeInfo                           *
 *                                                            *
 * This function receives 4 parallel array which hold employee*
 * information. The first array contains employee IDs to be   *
 * displayed in prompts. The function inputs and stores hours *
 * worked and payrate information in the second and third     *
 * arrays.  It then uses this information to calculate gross  *
 * pay, which it stores in the fourth array.                  *                                          *
 **************************************************************/
 
void getEmployeeInfo(long emp[], int hrs[], float rate[], float pay[], int size)
{
	cout << "Enter the requested information for each employee.\n";
	
	for (int count = 0; count < size; count++)
	{
  		cout << "\nemployee #" << emp[count] << endl;
	
		cout << "\tHours worked: ";
		cin  >> hrs[count];
		while (hrs[count] < 0)
		{	cout << "Hours worked must be 0 or more. Please re-enter: ";
			cin  >> hrs[count];
		}

		cout << "\tPay rate: $";
		cin  >> rate[count];
		while (rate[count] < 6.00)
		{	cout << "Pay rate must be 6.00 or more. Please re-enter: $";
			cin  >> rate[count];
		}

		pay[count] = hrs[count] * rate[count];
   }
}


/**************************************************************
 *                      displayWages                          *
 *                                                            *
 * This function receives 2 parallel arrays. The first holds  *
 * employee IDs and the second holds employee gross pay.      *
 * The function displays this information for each employee.  *
 **************************************************************/

void displayWages(long emp[], float pay[], int size)
{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "----------------------------\n";
	cout << "Employee               Wages\n";
	cout << "----------------------------\n\n";

	for (int count = 0; count < size; count++)
	{
		cout << "Employee #" << emp[count] << "   $";
		cout << setw(7) << pay[count] << endl << endl;
	}
}

