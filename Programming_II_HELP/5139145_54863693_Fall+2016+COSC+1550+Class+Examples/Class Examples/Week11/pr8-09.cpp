// This program uses an array to store the hours worked by
// a set of employees who all make the same hourly wage.

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_WORKERS = 5;	

int main()
{
   //const int NUM_WORKERS = 5;	
   int worker;
	int hours[NUM_WORKERS];
	double payRate, grossPay;
	double totalPay = 0.0, totalHours = 0;;

	cout << "Enter the hours worked by 5 employees who all\n";
	cout << "earn the same hourly rate.\n";

	for (worker = 0; worker < NUM_WORKERS; worker++)
	{
		cout << "Employee #" << (worker+1) << ": ";
		cin  >> hours[worker];
	}
	cout << "\nEnter the hourly pay rate for all the employees: ";
	cin  >> payRate;

	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);

	for (worker = 0; worker < NUM_WORKERS; worker++)
	{
      grossPay = hours[worker] * payRate;
		cout << "Employee #" << (worker+1);
		cout << ": $" << setw(7) << grossPay << endl;
		totalPay += grossPay;
		totalHours += hours[worker];
	}
	cout << "Total Company payroll is $" << totalPay << " for " << totalHours << " worked.\n";
	return 0;
}
