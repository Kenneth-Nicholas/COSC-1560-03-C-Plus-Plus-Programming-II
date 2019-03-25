// This program demonstrates the use of a structure.

#include <iostream>
#include <iomanip>
//#include <string>
using namespace std;

struct PayRoll
{
	int    empNumber;		// Employee number
	// string name			// Employee name - C++ string
	char   name[21];	   	// Employee name - c string
	float  hours,			// Hours worked
	       payRate,			// Hourly pay rate
	       grossPay;		// Gross pay
};

int main()
{
	PayRoll employee;	   // Employee is a PayRoll structure

	//Get the employee data
	cout << "Enter the employee's number: ";
	cin  >> employee.empNumber;
	cout << "Enter the employee's name: ";
	cin.ignore();	// To skip the '\n' character left in the input buffer
//	getline(cin, employee.name);
	cin.getline(employee.name,21);
	cout << "How many hours did the employee work? ";
	cin  >> employee.hours;
	cout << "What is the employee's hourly pay rate? ";
	cin  >> employee.payRate;

	// Calculate gross pay
	employee.grossPay = employee.hours * employee.payRate;

	// Display results
	cout << "\nHere is the employee's payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Hourly pay rate: " << employee.payRate << endl;
	cout << "Gross pay: $" << employee.grossPay << endl;
	return 0;
}
