// Paul Biolchini
// COSC 1550
// Homework 6, Assignment 2
// Chapter 4, Problem 9
// Software Sales

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Know - Base Price is $99
	// Know - Table of discounts for quantity purchase
	// Validation - Number of units sold is greater than 0
	// Want - Price for the units purchased

	// variable definition
	const double BASEPRICE = 99.00;
	double totalCost, 
		discount, 
		totalSavings;
	int units;
	
	// input
	cout << "How many software packages would you like to purchase? ";
	cin >> units;

	// calculation
	if(units <= 0)
	{
		cout << "You can not enter 0 or a negative number. \n";
	} 
	else
	{
		if(units >= 1 && units <=9)
			discount = 0.0;
		else if(units >= 10 && units <=19)
		{
			discount = 0.2;
		}
		else if(units >= 20 && units <=49)
		{
			discount = 0.3;
		}
		else if(units >= 50 && units <=99)
		{
			discount = 0.4;
		}
		else
		{
			discount = 0.5;
		}
		totalCost = BASEPRICE * (1 - discount) * units;
		totalSavings = BASEPRICE * discount * units;

	// output
		cout << setprecision(2) << fixed;
		cout << "Total cost for " << units << " software packages is $" << totalCost << endl;
		cout << "For " << units << " software packages, you saved $" << totalSavings << endl;
	}
	return 0;
}