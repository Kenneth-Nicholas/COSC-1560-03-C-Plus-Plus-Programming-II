// HowManyWidgets.cpp
// COSC 1550
// Paul Biolchini
// Homework 4 Assignment 2
// Chapter 3 Problem 9

#include <iostream>
using namespace std;

int main()
{
	// declare variables
	const double WIDGETWT = 12.5;
	double emptyPalletWt, 
		loadedPalletWt;
	int numberOfWidgets;
	// input
	cout << "What is the weight of an empty pallet? ";
	cin >> emptyPalletWt;
	cout << "What does a loaded pallet weigh? ";
	cin >> loadedPalletWt;
	//calculation
	//double widgetsOnPallet = (loadedPalletWt - emptyPalletWt) / WIDGETWT;
	//numberOfWidgets = static_cast<int>(widgetsOnPallet);
	numberOfWidgets = static_cast<int>((loadedPalletWt - emptyPalletWt) / WIDGETWT);
	// output
	cout << "The loaded pallets weigh " << loadedPalletWt 
		<< " pounds and contain " << numberOfWidgets << " widgets.\n";
	return 0;
}
/*
What is the weight of an empty pallet? 8.25
What does a loaded pallet weigh? 576.42
The loaded pallets weigh 576.42 pounds and contain 45 widgets.
Press any key to continue . . .
*/