// This program stores employee work hours in an int array.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 8;
   int hours[NUM_EMPLOYEES];

	// Input hours worked 
   cout << "Enter the hours worked by " << NUM_EMPLOYEES 
        << " employees: \n";
	//cin >> hours[0];
	//cin >> hours[1];
	//cin >> hours[2];
	//cin >> hours[3];
	//cin >> hours[4];
	//cin >> hours[5];
   for(int i = 0; i < NUM_EMPLOYEES; i++)
   {
	   cout << "Enter the hours worked by employee " << i+1 << ": ";
	   cin >> hours[i];
   }

	// Display the contents of the array
	cout << "The hours you entered are:";
   for(int i = 0; i < NUM_EMPLOYEES; i++)
   {
	   cout << " " << hours[i];
   }
	cout << endl;

	//cout << " " << hours[0];
	//cout << " " << hours[1];
	//cout << " " << hours[2];
	//cout << " " << hours[3];
	//cout << " " << hours[4];
	//cout << " " << hours[5] << endl;
	return 0;
}
