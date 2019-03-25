// This is a modular menu-driven program that computes
// health club membership fees.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void displayMenu();
int getChoice();         
void computeFees(string, double = 40.00, int = 3);
//void computeFees(string, double, int);

int main()
{
	int choice,                // Holds the user's menu choice
		 months;                // Number of months being paid 

const double ADULT_RATE =  40.00,
             SENIOR_RATE = 30.00,
             CHILD_RATE =  20.00;

	cout << fixed << showpoint << setprecision(2);
	
	do
	{	
		displayMenu();
		choice = getChoice();   // Assign choice the value returned 
                              // to it by the getChoice function.
		if (choice != 4)
		{
			cout << "For how many months? ";
			cin >> months;
		
		   switch (choice)
         {
			   case 1:	if (months == 3)
						{
							computeFees("Adult");
						}
						else
						{
							computeFees("Adult", ADULT_RATE, months);
						}
			   			break;
			   case 2:  computeFees("Child", CHILD_RATE, months);
			   			break;	
			   case 3:	computeFees("Senior", SENIOR_RATE, months);
         }
      }
	} while (choice != 4);
	return 0;
}

//*************************************************
// Definition of function displayMenu             *
// This function displays the menu choices.       *
//*************************************************

void displayMenu()
{
	cout << "\n\tHealth Club Membership Menu\n\n";
	cout << "1.  Standard Adult Membership\n";
	cout << "2.  Child Membership\n";
	cout << "3.  Senior Citizen Membership\n";
	cout << "4.  Quit the Program\n\n";
}

//*************************************************
// Definition of function getChoice               *
// This function inputs and validates the user's  *
// menu choice.                                   *
//*************************************************

int getChoice()
{	
	int choice;

	cin >> choice;
	while (choice < 1 || choice > 4)
	{	cout << "The only valid choices are 1-4.  Please re-enter. ";
		cin  >> choice;
	}
	return choice;
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
