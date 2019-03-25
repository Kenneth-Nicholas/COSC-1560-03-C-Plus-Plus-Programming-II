//**********************************************************
//* Paul Biolchini							               * 
//* COSC 1550.07 Computer Programming I				       * 
//* Program Name:	SalesPrediction.cpp    		       * 
//* Homework Number 2, Assignment 1                        *
//* Problem #:   2.2                                        *
//* Due Date:	9/8/2016	                   * 
//**********************************************************


#include <iostream>

using namespace std;

int main()
{
	// declare and define variables
	double eastCoastSalesPerCent = 0.58;
//	double totalCorporateSales = 8600000.00;
	double totalCorporateSales = 8.60;  // millions of dollars

	double eastCoastSales;
	// calculation
	eastCoastSales = totalCorporateSales * eastCoastSalesPerCent;

	// output
	cout << "The East Coast Division of the Corporation makes " << eastCoastSalesPerCent * 100
		<< "% of the Corporation\'s $" << totalCorporateSales << " million for a total of $"
		<< eastCoastSales << " million." << endl;
	return 0;
}
//Results:
//The East Coast Division of the Corporation makes 58 % of the Corporation's $8.6e+
//006 for a total of $4.988e + 006
//Press any key to continue . . .

//The East Coast Division of the Corporation makes 58% of the Corporation's $8.6 m
//illion for a total of $4.988 million.
//Press any key to continue . . .
