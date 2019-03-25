// This program has two functions: main and displayMessage

#include <iostream>
using namespace std;


//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
	cout << "Hello from the function displayMessage.\n";
}


int main()
{
	cout << "Hello from main.\n";
	displayMessage();       // Call displayMessage
	cout << "Back in function main again.\n";
	return 0;
}

