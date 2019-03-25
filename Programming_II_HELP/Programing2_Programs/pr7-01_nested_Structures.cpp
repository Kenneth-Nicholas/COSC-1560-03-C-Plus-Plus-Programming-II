// This program demonstrates the use of a structure.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Date
{
	 int month;
	 int day;
	 int year;
};

struct PayRoll
{
	int    empNumber;		// Employee number
	string name;       // Employee name - C++ string
	float  hours,		   // Hours worked
	       payRate,	   // Hourly pay rate
	       grossPay;	   // Gross pay
	Date   payDay;
};

int main()
{
	PayRoll manager = {1234, "Paul", 48.0, 20.0, 960.0, 2,2,2017};	   // manager is a PayRoll structure
	PayRoll employee;	   // Employee is a PayRoll structure

		// Display results
	cout << "\nHere is the manager's payroll data:\n";
	cout << "Name: " << manager.name << endl;
	cout << "Number: " << manager.empNumber << endl;
	cout << "Hours worked: " << manager.hours << endl;
	cout << "Hourly pay rate: " << manager.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << manager.grossPay << endl;
	cout << "Pay Day: " << manager.payDay.month << "/" << manager.payDay.day << "/" << manager.payDay.year << endl;

	//Get the employee data
	cout << "Enter the employee's number: ";
	cin  >> employee.empNumber;
	cout << "Enter the employee's name: ";
	cin.ignore();	// To skip the '\n' character left in the input buffer
	getline(cin, employee.name);
	cout << "How many hours did the employee work? ";
	cin  >> employee.hours;
	cout << "What is the employee's hourly pay rate? ";
	cin  >> employee.payRate;
	cout << "What is the employee's pay day (mm dd yyyy)? ";
	cin  >> employee.payDay.month >> employee.payDay.day >> employee.payDay.year;

	// Calculate gross pay
	employee.grossPay = employee.hours * employee.payRate;

	// Display results
	cout << "\nHere is the employee's payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << "Hourly pay rate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << employee.grossPay << endl;
	cout << "Pay Day: " << employee.payDay.month << "/" << employee.payDay.day << "/" << employee.payDay.year << endl;
	return 0;
}
