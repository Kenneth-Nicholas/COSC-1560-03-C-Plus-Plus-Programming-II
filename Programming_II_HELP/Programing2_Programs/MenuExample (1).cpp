#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Example
{

};


// Function prototypes
void displayMenu();
int  getChoice();
void getInfo(Example &);
void updateInfo(Example &);
void showInfo(Example);

int main()
{
	int choice;
	Example    temp  // create a Example struct temp

   do
   {  displayMenu();
      choice = getChoice();
		
   	// Call the correct function to carry out user's choice
      switch (choice)
      {
      	case 1: getInfo(temp);
         		  break;
         case 2: updateInfo(temp);
				     break;
         case 3: showInfo(temp);
                 
      }
   }while (choice != 4);
   return 0;

}// end of main function

/***************************************************************
 *                       displayMenu                           *
 * Called by main to display the menu choices.                 *
 ***************************************************************/
void displayMenu()
{
    cout << endl << endl;
    cout << "1. Enter new temp information\n";
    cout << "2. Update temp information\n";
    cout << "3. Display temp information\n";
    cout << "4. Exit the program\n\n";
    cout << "Enter your choice: ";

}//end of function displayMenu

/***************************************************************
 *                       getChoice                             *
 * Called by main to get, validate, and return a menu choice.  *
 ***************************************************************/
int getChoice()
{
   int choice;
   
   cin  >> choice;
	while (choice < 1 || choice > 4)
   {	cout << "Choice must be 1, 2, 3, or 4. Please re-enter choice: ";
		cin  >> choice;
	}
   return choice;

}//end of function getChoice

/***************************************************************
 *                      getInfo                                *
 * Called by main to input customer information into the       *
 * Customer structure passed by reference to the function.     *
 ***************************************************************/

void getInfo(Example &c)
{

}// end of function getInfo


/***************************************************************
 *                     updateInfo                              *
 * Called by main to allow the user to update information in   *
 * the structure passed to it by reference.                    *
 ***************************************************************/

void updateInfo(Example &c)
{
	int choice;

	// Call showInfo function to display the current record 
	showInfo(c);
	cout << "\nEnter the number of the field you wish to update: ";
	cin  >> choice;
	while (choice < 1 || choice > 8)
	{	cout << "Please enter 1-8: ";
		cin  >> choice;
	}
   cin.get();     // flush the \n from the input buffer

	//Accept a new value for the field the user selected
	switch (choice)
	{
	case 1: 
			  break;
		
	case 2: 
			  break;

	case 3:
			  break;

   	case 4: 
			  break;
// should have as many cases as there are structure members
	}
}// end of function updateInfo

/***************************************************************
 *                      showInfo                               *
 * Called by main to display the fields in the Example        *
 * structure passed to it.                                     *
 ***************************************************************/

void showInfo(Example c)
{
	cout << fixed << showpoint << setprecision(2);


}// end of function showInfo

