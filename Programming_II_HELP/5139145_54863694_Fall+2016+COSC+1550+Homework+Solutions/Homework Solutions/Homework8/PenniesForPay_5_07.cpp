// Chapter 5 - Assignment 7, Pennies for Pay
// This program calculates an employee's total monthly pay if the daily 
// pay amount is doubled each day worked, starting with 1 penny on day 1.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int    daysWorked,       // Number of days worked during the month
	       day = 1;          // Days worked loop counter
	double dailyPay = 0.01,  // Current day's pay (starts with .01 on day 1)
	       monthPay = 0.0;   // Accumulator for total month's pay 

	// Get and validate days worked
	cout << "How many days did the employee work this month? ";
	cin  >> daysWorked;
	while (daysWorked < 1 || daysWorked > 30)
	{	
		cout << "The number of days must be between 1 and 30.\n";
		cout << "Please re-enter days worked. ";
		cin >> daysWorked;
	}
	
	//Display table heading
	cout << "\nDay            Pay\n";
	cout << "------------------\n";
	
	// Create and display the table
	cout << fixed << showpoint << setprecision(2);
////	for (int day = 1; day <= daysWorked; day++)
	while (day <= daysWorked) 
	{	// Display the day's pay
		cout << setw(2) << day << "     " << setw(11) << dailyPay << endl;
		// Add the day's pay to the monthly total
		monthPay += dailyPay;
		// Calculate the daily pay for the following day
		dailyPay *= 2;
		day++;
	}
	// Display the total pay for the month			
	cout << "------------------\n";
	cout << "Total" << " $" << setw(11) << monthPay << endl;
	
	return 0;
}
