// This program demonstrates the use of a structure.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct PayRoll
{
	int    empNumber;		// Employee number
	string name;	   	// Employee name
	float  hours,		   // Hours worked
	       payRate,	   // Hourly pay rate
	       grossPay;	   // Gross pay
};

void getData(PayRoll & );
float calculateGrossPay(float, float);
void showData(PayRoll );

int main()
{
	PayRoll employee;	   // Employee is a PayRoll structure
	getData(employee);

	// Display results
	showData(employee);
	return 0;
}
void getData(PayRoll & e)
{
	//	Get the employee data
	cout << "Enter the employee's number: ";
	cin  >> e.empNumber;
	cout << "Enter the employee's name: ";
	cin.ignore();	// To skip the '\n' character left in the input buffer
	getline(cin, e.name);
	cout << "How many hours did the employee work? ";
	cin  >> e.hours;
	cout << "What is the employee's hourly pay rate? ";
	cin  >> e.payRate;
	// Calculate gross pay
	e.grossPay = calculateGrossPay(e.hours, e.payRate);
}

float calculateGrossPay(float hours, float rate)
{
	return hours * rate;
}
void showData(PayRoll e)
{
	cout << "\nHere is the employee's payroll data:\n";
	cout << "Name: " << e.name << endl;
	cout << "Number: " << e.empNumber << endl;
	cout << "Hours worked: " << e.hours << endl;
	cout << "Hourly pay rate: " << e.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross pay: $" << e.grossPay << endl;
}
