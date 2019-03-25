// This program shows that when a local variable has the same name
// as a global variable, the function only sees the local variable.

#include <iostream>
using namespace std;

// Function prototypes
void texas(); 
void arkansas();

int cows = 10;           // Global variable

int main()
{
	cout << "There are " << cows << " cows in main.\n";
	texas();
	arkansas();
	cout << "Back in main, there are " << cows << " cows.\n";
	return 0;
}

//******************************************
// Definition of function texas            *
// The local variable cows is set to 100.  *
//******************************************
void texas()
{
	int cows = 100;       // Local variable

	cout << "There are " << cows << " cows in texas.\n";
}

//******************************************
// Definition of function arkansas         *
// The local variable cows is set to 50.   *
//******************************************
void arkansas()
{
	int cows = 50;        // Local variable

	cout << "There are " << cows << " cows in arkansas.\n";
}
