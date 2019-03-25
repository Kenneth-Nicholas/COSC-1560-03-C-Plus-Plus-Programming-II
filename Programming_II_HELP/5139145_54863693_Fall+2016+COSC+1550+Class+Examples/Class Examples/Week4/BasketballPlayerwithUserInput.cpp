// BasketballPlayer.cpp
// COSC 1550
// Paul Biolchini
// Homework 3 Assignment 2
// 20110915

#include <iostream>
using namespace std;

int main()
{
	// know - player is some number of inches tall
	// know we want the user to enter the player's height
	// want - height in ft in form
	// hint use modulus and int division
	// algorithm
	// feet = height / 12 inches
	// inches - height % 12 inches

	// variable definition and declaration
	int height;
	const int INCHES_PER_FOOT = 12;
	int heightFt, heightIn;

	// input
	cout << "Please enter the player\'s height (in inches): ";
	cin >> height;


	//calculation
	heightFt = height / INCHES_PER_FOOT;
	heightIn = height % INCHES_PER_FOOT;

	// output
	cout << "A basketball player " << height << " inches tall is " 
		<< heightFt << " feet and " << heightIn << " inches tall.\n";


	return 0;
}