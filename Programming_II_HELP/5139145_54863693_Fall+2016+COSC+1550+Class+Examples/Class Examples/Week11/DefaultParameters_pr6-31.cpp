// This program demonstrates the use of default arguments.

#include <iostream>
#include <string>
using namespace std;

// Prototype
void computeFees(string, double = 40.0, int = 3);

int main()
{
	cout << "Calling the computeFees function with arguments "
        << "Adult, 40.00, 3.\n";
	computeFees("Adult");

	cout << "Calling the computeFees function with arguments "
        << "Child, 20.00\n";
	computeFees("Child", 20.00);

	cout << "Calling the computeFees function with arguments "
        << "Senior\n";
	computeFees("Senior", 30.00, 1);

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
