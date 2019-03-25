// This program is a driver for testing the computeFees function.

#include <iostream>
#include <string>
using namespace std;

// Prototype
void computeFees(string, double, int);

int main()
{
	cout << "Calling the computeFees function with arguments "
        << "Adult, 40.00, 3.\n";
	computeFees("Adult", 40.00, 3);

	cout << "Calling the computeFees function with arguments "
        << "Child, 20.00, 2.\n";
	computeFees("Child", 20.00, 2);

	cout << "Calling the computeFees function with arguments "
        << "Senior, 30.00, 4.\n";
	computeFees("Senior", 30.00, 4);

	return 0;
}

//*************************************************
// Definition of function computeFees             *
// This function uses the monthly rate and number *
// of months passed to it as arguments to compute *
// and print a member's total charges.            *
//*************************************************
void computeFees(string memberType, double rate, int months)
{
   cout << endl
		  << "Membership Type : " << memberType << "    "
		  << "Monthly rate $"     << rate   << endl
		  << "Number of months: " << months << endl
		  << "Total charges   : $"<< (rate * months)
		  << endl << endl;
}
