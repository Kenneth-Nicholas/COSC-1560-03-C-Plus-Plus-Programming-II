// Chapter 2, Programming Challenge 17: Stock Commission
#include <iostream>
using namespace std;

int main()
{
	// Variable Declarations
	double commisionPC = 0.02;
	// Store the number of shares.
	int NumberOfShares = 750;
	// Store the price per share.
	double pricePerShare = 35.00;
	double stock;
	double commission;
	double total;

	// Calculate and store the amount paid for the stock alone.
	stock = pricePerShare * NumberOfShares;

	// Calculate and store the amount of the commission.
	commission = stock * commisionPC;

	// Calculate the total amount.
	total = stock + commission;

	// Display the results.
	cout << "Stock:      $" << stock << endl;
	cout << "Commission: $" << commission << endl;
	cout << "Total:      $" << total << endl;
	return 0;
}
//Results:
//
//Stock:      $26250
//Commission: $525
//Total:      $26775
//Press any key to continue . . .