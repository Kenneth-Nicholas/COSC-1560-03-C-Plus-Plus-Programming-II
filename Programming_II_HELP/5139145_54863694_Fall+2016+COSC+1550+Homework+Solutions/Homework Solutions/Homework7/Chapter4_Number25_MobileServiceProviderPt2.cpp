// Chapter 4, Programming Challenge 25: Mobile Service Provider
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	// Constants for menu choices
	const char PACKAGE_A_CHOICE = 'A';
	const char PACKAGE_B_CHOICE = 'B';
	const char PACKAGE_C_CHOICE = 'C';
	const char QUIT_CHOICE = 'Q';

	// Constants for base package rates
	double PACKAGE_A_BASE = 39.99;
	double PACKAGE_B_BASE = 59.99;
	double PACKAGE_C_BASE = 69.99;

	// Constants for minutes provided
	double PACKAGE_A_MINS = 450.0;
	double PACKAGE_B_MINS = 900.0;

	// Constants for additional minute rates
	double PACKAGE_A_ADD = 0.45;
	double PACKAGE_B_ADD = 0.40;

	char choice;			// To hold a menu choice
	double mins;		// To hold the minutes used
	double baseCost;	// To hold the cost of the package
	double addMins;		// To hold the additonal minutes used
	double addCharges;	// To hold the additional charges
	double total;		// To hold the total amount due

	// Display the menu and get a choice.
	cout << "Select a subscription package: \n"
		 << "A. Package A\n"
		 << "B. Package B\n"
		 << "C. Package C\n"
		 << "Q. Quit\n\n";
	cin >> choice;

	// Set the numeric output formatting.
	cout << fixed << showpoint << setprecision(2);

	// Respond to the user's menu selection.
	switch(toupper(choice))
	{
		case PACKAGE_A_CHOICE:
			// Get the number of minutes used.
			cout << "How many minutes were used? ";
			cin >> mins;

			// Set the cost of the package.
			baseCost = PACKAGE_A_BASE;

			// Determine if any additional hours were used.
			addMins = mins - PACKAGE_A_MINS;
			if (addMins <= 0)
			{
				addMins = 0;
			}

			// Calculate the charges for any additional hours.
			addCharges = addMins * PACKAGE_A_ADD;

			// Calculate and display the total amount due.
			total = baseCost + addCharges;
			cout << "The total amount due is $" << total << endl;
			break;

		case PACKAGE_B_CHOICE:
			// Get the number of minutes used.
			cout << "How many minutes were used? ";
			cin >> mins;

			// Set the cost of the package.
			baseCost = PACKAGE_B_BASE;

			// Determine if any additional hours were used.
			addMins = mins - PACKAGE_B_MINS;
			if (addMins <= 0)
			{
				addMins = 0;
			}

			// Calculate the charges for any additional hours.
			addCharges = addMins * PACKAGE_B_ADD;

			// Calculate and display the total amount due.
			total = baseCost + addCharges;
			cout << "The total amount due is $" << total << endl;
			break;

		case PACKAGE_C_CHOICE:

			// Set the cost of the package.
			baseCost = PACKAGE_C_BASE;


			// Calculate and display the total amount due.
			total = baseCost;
			cout << "The total amount due is $" << total << endl;
			break;

		case QUIT_CHOICE:
			cout << "Program ending.\n";
			break;

		default:
			cout << "The valid choices are A, B, C, or Q. Run the\n"
				 << "program again and select one of those.\n\n";
	}
	return 0;
}