// This menu-driven program uses a switch statement to carry out the 
// appropriate set of actions based on the menu choice entered. A 
// do-while loop allows the program to repeat until the user selects 
// menu choice 4.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice, months;
	double charges;

	do
    {  // Display the menu choices
       cout << "\n\tHealth Club Membership Menu\n\n";
	   cout << "1. Standard Adult Membership\n";
	   cout << "2. Child Membership\n";
	   cout << "3. Senior Citizen Membership\n";
	   cout << "4. Quit the Program\n\n";
	   cout << "Enter your choice: ";
	   cin  >> choice;

	   if (choice >= 1 && choice <= 3)
	   {	
		   cout << "For how many months? ";
		   cin  >> months;

		   // Set charges based on user input
		   switch (choice)
		   {
			   case 1:	charges = months * 40.0;
					      break;
			   case 2:	charges = months * 20.0;
					      break;
			   case 3:	charges = months * 30.0;
	   	}
		   // Display the monthly charges
		   cout << fixed << showpoint << setprecision(2);
		   cout << "The total charges are $" << charges << endl;
	   }
	   else if (choice != 4)
	   {	
		   cout << "The valid choices are 1 through 4.\n";
		   cout << "Run the program again and select one of these.\n";
	   }
	   system("PAUSE");  // Show "Press any key to continue..."
//	   cout << "Press the Enter key to continue...\n";
//	   cin.get();
	   system("CLS");	// Clear the screen
   } 
   while (choice != 4);
	return 0;
}
