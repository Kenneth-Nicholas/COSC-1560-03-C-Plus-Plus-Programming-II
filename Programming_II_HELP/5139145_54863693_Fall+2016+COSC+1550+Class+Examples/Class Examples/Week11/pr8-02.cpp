// This program stores employee work hours in an int array. It uses
// one for loop to input the hours and another for loop to display them.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 8;    
   int hours[NUM_EMPLOYEES];      // Holds each employee's hours
   int count;                     // Loop counter

	// Input hours worked 
   cout << "Enter the hours worked by " << NUM_EMPLOYEES 
        << " employees.\n ";
   for (count = 0; count < NUM_EMPLOYEES; count++)
   {
	   do
	   {
		   cout << "Enter hours worked by employee " << count + 1 << ": ";	
		   cin >> hours[count];
			if ( hours[count] < 0)
				cout << "Please enter a positive number!\n";
	   }while(hours[count] < 0);
	}

	// Display the contents of the array
	cout << "The hours you entered are:";
	for (count = 0; count < NUM_EMPLOYEES; count++)
		cout << " " << hours[count];
	cout << endl;
	return 0;
}
