//Paul Biolchini
// COSC 1550
// Week 12 Assignment 2
// Payroll.cpp

#include <iostream>
#include <iomanip>
using namespace std;

void getHours(const long[], int [], double[], int);
void calcWages(const int[], const double[], double[], int);
void displayWages(const long[], const double [], int);

int main()
{
	const int size = 7;
	long empId[size] = { 5658845, 4520125, 7895122, 8777541,
		                 8451277, 1302850, 7580489 };
	int hours[size];
	double payRate[size];
	double wages[size];
	
	getHours(empId, hours, payRate, size);
	calcWages(hours, payRate, wages, size);
	displayWages(empId, wages, size);

	return 0;
}

void getHours(const long empId[], int hours [], double rate[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Please enter the hours employee " << empId[i] << " worked: ";
		cin >> hours[i];
		while(hours[i] < 0)
		{
			cout << "Please enter an hour value greater than or equal to 0: ";
			cin >> hours[i];
		}

		cout << "Please enter employee " << empId[i] << "\'s payrate: ";
		cin >> rate[i];
		while(rate[i] < 15.0)
		{
			cout << "Please enter a pay rate greater than  or equal to $15.00 per hour: ";
			cin >> rate[i];
		}
	}
}

void calcWages(const int hours[], const double rate[], double wages[], int size)
{
	for(int i = 0; i < size; i++)
	{
		wages[i] = hours[i] * rate[i];
	}
}

void displayWages(const long empId[], const double wages[], int size)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << setw(12) << "Employee ID" << "    " << setw(8) << "Wages" <<  endl;
	for(int i = 0; i < size; i++)
	{
		cout << setw(12) << empId[i] << "   $" <<  setw(8) << wages[i] <<  endl;
	}
}
