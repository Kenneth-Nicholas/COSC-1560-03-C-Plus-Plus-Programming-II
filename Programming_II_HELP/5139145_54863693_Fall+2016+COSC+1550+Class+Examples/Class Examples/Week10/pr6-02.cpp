// The function displayMessage is repeatedly called from within a loop.

#include <iostream>
using namespace std;

// function prototypes
void hello2();
void displayMessage();

int main()
{
	cout << "Hello from main.\n";
	for (int count = 0; count < 5; count++)
		displayMessage();	// Call displayMessage
	cout << "Back in function main again.\n";
	return 0;
}

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
	cout << "Hello from the function displayMessage.\n";
	hello2();
}

void hello2()
{
	cout << "Hello to you, too.\n";
}

