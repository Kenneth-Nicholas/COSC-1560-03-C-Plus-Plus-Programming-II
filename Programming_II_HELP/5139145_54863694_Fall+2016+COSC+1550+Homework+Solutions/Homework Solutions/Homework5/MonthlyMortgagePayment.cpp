// Monthly loan Payment amount
// COSC 1550
// Homework 5 Assignemnt 2
// Paul Biolchini
// 20110929

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	// Know formula
	// payment = ((rate * (pow((1+rate), num))/(pow(1+rate),num) -1) ) *loan
	// know - user doesn't think in monthly interest or payments as months
	// Need Monthly payment
	// Ask for Loan amount, the number of payments (months), Monthly interest rate (yearly rate/12)
	
	double loanAmount, 
		monthlyPayment, 
		monthlyRate, 
		numberOfPayments,
	    Rate2Pow,  //pow((1+MonthlyRate),numberOfPayments)
	    yearlyRate;
	int paymentYears, 
		width = 25, 
		numWidth = 10;
	double totalPaid, 
		interestPaid;

	// input
	cout << "Please enter the loan amount: ";
	cin >> loanAmount;
	cout << "Please enter the yearly interest rate (xx.x%): ";
	cin >> yearlyRate;
	cout << "Please enter the number of years for the loan: ";
	cin >> paymentYears;

	// calculation
	monthlyRate = yearlyRate / 1200;  // 1200 == 100 * 12
	numberOfPayments = paymentYears * 12;
	Rate2Pow = pow((1 + monthlyRate), numberOfPayments);
	monthlyPayment = ((monthlyRate * Rate2Pow) / (Rate2Pow -1)) * loanAmount;
	totalPaid = monthlyPayment * numberOfPayments;
	interestPaid = totalPaid - loanAmount;

	// output

	cout << setprecision(2) << fixed << endl;
	cout << " --- Your Loan Payments ---\n";
	cout << left << setw(width) << "Loan Amount" << "$" << right << setw(numWidth) << loanAmount << endl;
	cout << left << setw(width) << "Monthly Interest Rate" << right << setw(numWidth) << monthlyRate * 100 << "%" << endl;
	cout << left << setw(width) << "Interest Rate" << right << setw(numWidth) << yearlyRate << "%" << endl;
	cout << left << setw(width) << "Number Of Payments" << " " << right << setw(numWidth) << static_cast<int>(numberOfPayments) << endl;
	cout << left << setw(width) << "Monthly Payments" << "$" << right << setw(numWidth) << monthlyPayment << endl;
	cout << left << setw(width) << "Amount Paid Back" << "$" << right << setw(numWidth) << totalPaid << endl;
	cout << left << setw(width) << "Interest Paid" << "$" << right << setw(numWidth) << interestPaid << endl;
	cout << endl;
	return 0;
}