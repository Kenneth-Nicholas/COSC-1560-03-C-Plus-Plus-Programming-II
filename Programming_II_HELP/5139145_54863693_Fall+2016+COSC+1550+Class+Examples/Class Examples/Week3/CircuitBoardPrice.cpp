// COSC 1550
// Paul Biolchini
// Example
// Problem 2.13
// Circuit board price

#include <iostream>

using namespace std;

int main()
{

	// Know - 35% profit
	// Know CB costs $14.95
	// Want - selling price

	// define variables
	double profit = 0.35, 
		circuitBoardBasePrice = 14.95, 
		circuitBoardPrice;
	// input
	// calculation
	circuitBoardPrice = circuitBoardBasePrice * (1.0 + profit);

	// output
	cout << "In order to get a "  
		<< profit * 100
		<< "% profit, we must sell the circuit boards for $"
		<< circuitBoardPrice << endl;


	return 0;
}

//In order to get a 35% profit, we must sell the circuit boards for $20.1825
//Press any key to continue . . .
