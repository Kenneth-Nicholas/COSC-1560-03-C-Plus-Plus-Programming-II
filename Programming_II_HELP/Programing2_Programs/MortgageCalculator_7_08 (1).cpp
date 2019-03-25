// Written By C++ Programmer
// Chapter 7
// Assignment 8, Mortgage Payments

// Program, using a Mortgage class, to calculate monthly loan payments
// Final results may be "off" by a few cents since 
// the program does not handle round-off error.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Mortgage
{
private:
	// Private member data
	float loanAmt,            // loan amount
         annIntRate,         // annual interest rate
	      moIntRate,          // monthy interest rate
         years;              // length of the loan in years
	int   numPmts;            // number of monthly payments

	// Private member function
   float term();             // used in calculation of mo. payment

public:
	// Constructor
	Mortgage() { loanAmt = annIntRate = moIntRate = years = numPmts = 0; }

	// Other public member functions
	int   setLoanAmt(float);
	int   setRate(float);
	int   setYears(float);
	float getMonthly();
	float getPayBack();
	float getInterestPaid();
};

float Mortgage::getMonthly()
{
	if (moIntRate == 0.0)
		return loanAmt / numPmts;
	else
		return (loanAmt * (moIntRate) * term()) / (term() - 1);
}

float Mortgage::term()
{
	return pow(1 + (moIntRate), numPmts);
}

float Mortgage::getPayBack()
{
	return (getMonthly() * numPmts);
}

float Mortgage::getInterestPaid()
{
	return (getPayBack() - loanAmt);
}

int Mortgage::setLoanAmt(float amt)
{
	if (amt < 0)
   	return 0;
	else
	{
		loanAmt = amt;
		return 1;
	}
}

int Mortgage::setRate(float rate)
{
	if (rate < 0)
   	return 0;
	else
	{
		annIntRate = rate;
		moIntRate = rate/12;
		return 1;
	}
}

int Mortgage::setYears(float yrs)
{
	if (yrs < 0)
   	return 0;
	else
	{
		years = yrs;
		numPmts = yrs * 12;
		return 1;
   }
}

int main()
{
	float loan,
		   annIntRate,
			years;
	Mortgage account;                 // create a Mortgage object

	cout << "Enter the amount of the loan: ";
	cin  >> loan;
	while (loan < 0)
	{	cout << "Loan amount must be 0 or more. Please re-enter: ";
		cin  >> loan;
	}

	cout << "Enter the annual interest rate in decimal form (example .075): ";
	cin  >> annIntRate; 
	while (annIntRate < 0)
	{	cout << "Interest rate must be 0 or more. Please re-enter: ";
		cin  >> annIntRate;
	}

	cout << "Enter the length of the loan in years: ";
	cin  >> years; 
	while (years < 0)
	{	cout << "Years must be 0 or more. Please re-enter: ";
		cin  >> years;
	}

	account.setLoanAmt(loan);          // sets amount of the loan
	account.setRate(annIntRate);       // sets annual interest rate
	account.setYears(years);           // sets length of the loan in years
	
	// Display payment information
	cout <<fixed << showpoint << setprecision(2);
	cout << "\nMonthly Payment: $" << account.getMonthly() << endl;
	cout << "Total Pay Back: $"  << account.getPayBack() << endl;
	cout << "Total Interest Paid: $"  << account.getInterestPaid() << endl << endl;

	return 0;
}

