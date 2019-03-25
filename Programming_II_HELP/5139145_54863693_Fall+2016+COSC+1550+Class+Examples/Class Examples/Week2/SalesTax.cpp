//**********************************************************
//* Paul Biolchini							                
//* COSC 1550.07 Computer Programming I				        
//* Program Name:	SalesTax.cpp    		        
//* Week 2  Class Example 2
//* Problem #:2.3                                        
//* Due Date:	9/3/2015   			                    
//**********************************************************


#include <iostream>
using namespace std;

int main()
{
	// input and Definitions
	double purchasePrice = 95.00;
	double stateSalesTax = 4./100;
	double countySalesTax = 2/100.00;
	double totalSalesTax;
	double stateSalesTaxPaid;
	double countySalesTaxPaid;
	// calculation
	stateSalesTaxPaid = purchasePrice * stateSalesTax;
	countySalesTaxPaid = purchasePrice * countySalesTax;
	totalSalesTax = stateSalesTaxPaid + countySalesTaxPaid;
	// output
	cout << "On a purchase of $" << purchasePrice << " the tax will be:\n";
	cout << "State Sales Tax  (" << stateSalesTax * 100 << "%)  $" << stateSalesTaxPaid << endl;
	cout << "County Sales Tax (" << countySalesTax * 100 << "%)  $" << countySalesTaxPaid << endl;
	cout << "Total Sales Tax        $" << totalSalesTax << endl;
	cout << "Total Bill:            $" << totalSalesTax + purchasePrice << endl;



	// Insert "Press any key to continue ..." into program
    system("pause");  
	return 0;
}