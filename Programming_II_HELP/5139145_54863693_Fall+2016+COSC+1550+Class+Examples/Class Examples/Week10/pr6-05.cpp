// This program has three functions: main, first, and second.

#include <iostream>
using namespace std;

// function prototypes
void third();
void first();
void second();


int main()
{
	cout << "I am starting in function main.\n";
	first();	   // Call function first
//	second();	// Call function second
	cout << "Back in function main again.\n";
	return 0;
}

//**************************************
// Definition of function first        *
// This function displays a message.   *
//**************************************
void first()
{
	cout << "I am now inside the function first.\n";
	second();
	cout << "I am now back inside the function first.\n";
}

//**************************************
// Definition of function second       *
// This function displays a message.   *
//**************************************
void second()
{
	cout << "I am now inside the function second.\n";
	third();
	cout << "I am now back inside the function second.\n";
}

//**************************************
// Definition of function third       *
// This function displays a message.   *
//**************************************
void third()
{
	cout << "I am now inside the function third.\n";
//	second();  infinite loop
}
