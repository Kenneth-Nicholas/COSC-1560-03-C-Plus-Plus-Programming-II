// Chapter 3 - Assignment 15, Monthly Payments
//	This program performs loan calculations.  Note: Results may vary
// by a penny from those shown in the text due to roundoff error.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double loanAmt,		   // amount of the loan
		numYears,
		powResult,
		intRate,		   // annual interest rate of the loan
		monIntRate,	   // monthly interest rate
		monPayment,	   // the monthly payment 
		totIntPaid,	   // total interest paid over life of loan
		totAmtPaid;	   // total amount paid over life of loan
	int	 numPayments;	   // number of payments

	// Get input from user
	cout << "Loan amount: $";
	cin  >> loanAmt;
	cout << "Annual interest rate (12%): ";
	cin  >> intRate;
	cout << "Number of years for the loan: ";
	cin  >> numYears;

	numPayments = numYears * 12.;
	// Calculate monthly interest rate, amount of the monthly payment, 
	// total amount paid, and total interest paid
	monIntRate = intRate / 1200;
	powResult = pow((1 + monIntRate), numPayments);
	monPayment = (monIntRate * powResult /(powResult - 1)) * loanAmt;
	totAmtPaid = monPayment * numPayments;
	totIntPaid = totAmtPaid - loanAmt;

	// Display results
	cout << "\n - - Loan Report - -\n\n";
//	cout << fixed << showpoint << setprecision(2);
	cout << fixed << setprecision(2);
	cout << "Loan Amount:            $"	<< setw(9) << loanAmt << endl;
	double monIntRateShow = monIntRate*100;

	int whole = static_cast<int>(monIntRateShow);
	if((monIntRateShow - whole) == 0)
	{
		cout << setprecision(0);
		cout << "Monthly Interest Rate:   " << setw(8) << (monIntRateShow) << "%" <<endl;
		cout << setprecision(2);
	}
	else
	{
		cout << "Monthly Interest Rate:   " << setw(9) << (monIntRateShow) << "%" <<endl;
	}
	cout << "Number of Payments:      " << setw(9) << numPayments << endl;
	cout << "Monthly Payment:        $" << setw(9) << monPayment << endl;
	cout << "Amount Paid Back:       $" << setw(9) << totAmtPaid << endl;
	cout << "Interest Paid:          $" << setw(9) << totIntPaid << endl;

	return 0;
}

/*
Loan amount: $10000
Annual interest rate (12%): 12
Number of years for the loan: 30

- - Loan Report - -

Loan Amount:            $ 10000.00
Monthly Interest Rate:  %     1.00
Number of Payments:            360
Monthly Payment:        $   102.86
Amount Paid Back:       $ 37030.05
Interest Paid:          $ 27030.05
Press any key to continue . . .
*/