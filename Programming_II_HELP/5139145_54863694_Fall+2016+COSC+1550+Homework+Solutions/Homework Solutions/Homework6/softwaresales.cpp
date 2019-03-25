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
	double cost = 99.00;
	int numberSold;
	double discount = 0, 
	totalCost;

	cout << "How many software packages would you like to purchase: ";
	cin >> numberSold;

	if (numberSold <= 0)
	{
		cout << "Please enter a number greater than 0\n";
	}
	else
	{
		if (numberSold < 10)
		{
			discount = 0.0;
		}
		else if(numberSold < 20)
		{
			discount = .2;
		}
		else if(numberSold < 50)
		{
			discount = .3;
		}
		else if(numberSold < 100)
		{
			discount = .4;
		}
		else
		{
			discount = .5;
		}

//		totalCost = numberSold * cost - discount * numberSold * cost;
		totalCost = numberSold * cost * (1. - discount);

		cout << fixed << setprecision(2);
		cout << "Number ordered:    " << setw(7) << numberSold << endl;
		cout << "Quantity Discount: " << setw(7) << discount*100 << "%\n";
		cout << "Amount Due:       $" << setw(7) << totalCost << endl;
		cout << "Amount saved:     $" << setw(7) << numberSold * cost * discount << endl;
	}

	return 0;
}
