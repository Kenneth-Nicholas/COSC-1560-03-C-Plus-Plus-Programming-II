// This program demonstrates the use of a structure with constructors.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct PayRoll
{
	int    empNumber;		// Employee number
	string name;       // Employee name - C++ string
	float  hours,		   // Hours worked
	       payRate,	   // Hourly pay rate
	       grossPay;	   // Gross pay
	PayRoll()
	{
		empNumber = 0;
		name = "";
		hours = 0.0;
		payRate = 0.0;
		grossPay = 0.0;
	}
	PayRoll(int i, string n, float h, float r, float p)
	{
		empNumber = i;
		name = n;
		hours = h;
		payRate = r;
		grossPay = p;
	}
	PayRoll(int i, string n)
	{
		empNumber = i;
		name = n;
		hours = 0.0;
		payRate = 0.0;
		grossPay = 0.0;
	}
	//PayRoll(int i = 0, string n = "", float h = 0.0, float r = 0.0, float p = 0.0)
	//{
	//	empNumber = i;
	//	name = n;
	//	hours = h;
	//	payRate = r;
	//	grossPay = p;
	//}

};

int main()
{
	PayRoll manager(1234, "Paul", 48.0, 20.0, 960.0) ;	   // manager is a PayRoll structure
	PayRoll employee;	   // Employee is a PayRoll structure
	PayRoll boss(66666, "James");	   // boss is a PayRoll structure

		// Display results
	cout << "\nHere is the employee's payroll data:\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hours worked: " << employee.hours << endl;
	cout << "Hourly pay rate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << employee.grossPay << endl;

		// Display results
	cout << "\nHere is the manager's payroll data:\n";
	cout << "Name: " << manager.name << endl;
	cout << "Number: " << manager.empNumber << endl;
	cout << "Hours worked: " << manager.hours << endl;
	cout << "Hourly pay rate: " << manager.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << manager.grossPay << endl;

	// Display results
	cout << "\nHere is the boss's payroll data:\n";
	cout << "Name: " << boss.name << endl;
	cout << "Number: " << boss.empNumber << endl;
	cout << "Hours worked: " << boss.hours << endl;
	cout << "Hourly pay rate: " << boss.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << boss.grossPay << endl;

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
	return 0;
}
