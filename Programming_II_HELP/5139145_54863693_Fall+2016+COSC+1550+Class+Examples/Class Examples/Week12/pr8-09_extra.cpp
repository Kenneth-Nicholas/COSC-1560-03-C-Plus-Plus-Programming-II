// This program uses an array to store the hours worked by
// a set of employees who all make the same hourly wage.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   const int NUM_WORKERS = 5;	
   int worker;
	int hours[NUM_WORKERS];
	double grossPay[NUM_WORKERS];
	string workerName[NUM_WORKERS];

	workerName[0] = "Sam";
	workerName[1] = "Sue";
	workerName[2] = "Don";
	workerName[3] = "Paul";
	workerName[4] = "Sally";


	cout << "Enter the hours worked by 5 employees who all\n";
	cout << "earn the same hourly rate.\n";

	for (worker = 0; worker < NUM_WORKERS; worker++)
	{
		cout << workerName[worker] << ": ";
		cin  >> hours[worker];
	}

	cout << "\nEnter the gross pay for each employee:\n";
	for (worker = 0; worker < NUM_WORKERS; worker++)
	{
		cout << workerName[worker] << ": ";
		cin >> grossPay[worker];
	}

	int hiPay = grossPay[0];
	int employee = 0;
	for (worker = 1; worker < NUM_WORKERS; worker++)
	{	
		if(grossPay[worker] > hiPay)
		{
			hiPay = grossPay[worker];
			employee = worker;
		}
	}

	cout << workerName[employee] << " had the highest pay this week of ";
	cout << ": $" << setw(7) << grossPay[employee] << endl;

	int loHrs = hours[0];
	employee = 0;
	for (worker = 1; worker < NUM_WORKERS; worker++)
	{	
		if (hours[worker] < loHrs)
		{
			loHrs = hours[worker];
			employee = worker;
		}
	}

	cout << workerName[employee] << " had the lowest pay rate this week of ";
	cout << ": $" << setw(7) << hours[employee] << " per hour.\n";

	return 0;
}
