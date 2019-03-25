// Chapter 2, Programming Challenge 4: Restaurant Bill
#include <iostream>

using namespace std;

int main()
{
	// Variable Declarations
	 double TaxPC = 0.0675;
	 double TipPC = 0.2;
	 double cost = 88.67;
	 double tax;
	 double tip;
	 double total;

	// Calculate and store the tax amount.
	tax = cost * TaxPC;

	// Calculate and store the tip amount.
	tip = (cost + tax) * TipPC;

	// Calculate and store the total bill.
	total = cost + tax + tip;

	// Display the meal cost, tax amount, tip
	// amount, and total bill on the screen.

	cout << "Meal:  $" << cost << endl;
	cout << "Tax:   $" << tax << endl;
	cout << "Tip:   $" << tip << endl;
	cout << "Total: $" << total << endl;
	return 0;
}
//Results:
//
//Meal:  $88.67
//Tax:   $5.98523
//Tip:   $18.931
//Total: $113.586
//Press any key to continue . . .