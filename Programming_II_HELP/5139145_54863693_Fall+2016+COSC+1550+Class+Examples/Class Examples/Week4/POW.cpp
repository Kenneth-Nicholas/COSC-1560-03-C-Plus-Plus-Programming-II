// Paul Biolchini
// COSC 1550.07
// Week 4 example
// Raising a number to a power

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Define and initialize variables
	double number = 0.00;
	double power = 0.00;
	double raised;

	// enter the number and the power
	cout << "Please enter the number to raise: ";
	cin >> number;
	cout << "Please enter the power to raise it to: ";
	cin >> power;

	// Calculate the raised number
	raised = pow(number,power);


	// Display Results
	cout << number << " raised to the " << power << " power is: " << raised << endl;

	return 0;
}



