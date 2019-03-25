// This menu-driven program shows how relational operators can be 
// used to compare characters. Character inputs are tested to make
// sure they are within the set of legal menu choices. 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char   choice;
	int    months;
	double charges;

	// Display the menu choices
	cout << "   Health Club Membership Menu\n";
	cout << "A. Standard Adult Membership\n";
	cout << "B. Child Membership\n";
	cout << "C. Senior Citizen Membership\n";
	cout << "D. Quit the Program\n\n";
	cout << "Enter your choice: ";
	//cin.get(choice);
	cin >> choice;

	cout << fixed << showpoint << setprecision(2);

	if ((choice >= 'A' && choice <= 'D') ||
		(choice >= 'a' && choice <= 'd'))
	{
		if (choice == 'A' || choice == 'a')
		{	
			cout << "You chose a Standard Adult Membership\n";
			cout << "For how many months? ";
			cin  >> months;
			charges = months * 40.00;
			cout << "The total charges are $" << charges << endl;
		}
		else if (choice == 'B' || choice == 'b')
		{	
			cout << "You chose a Child Membership\n";
			cout << "For how many months? ";
			cin  >> months;
			charges = months * 20.00;
			cout << "The total charges are $" << charges << endl;
		}
		else if (choice == 'C' || choice == 'c')
		{	
			cout << "You chose a Senior Citizen Membership\n";
			cout << "For how many months? ";
			cin  >> months;
			charges = months * 30.00;
			cout << "The total charges are $" << charges << endl;
		}
		else 
			cout << "You\'re Quitting.   Bye!\n";
	}
	else
	{	
		cout << "The valid choices are A through D or a through d.\n";
		cout << "Run the program again and select one of those.\n";
	}

	return 0;
}
