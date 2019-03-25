// This program shows how the exit function causes a program
// to stop executing.

#include <iostream>
#include <cstdlib>	 // Needed to use the exit function
using namespace std;

// Function prototype
void someFunction();  

int main()
{
	someFunction();
	cout << "This message will only be displayed if the function \n";
	cout << "has a return statement instead of an exit.\n";
	return 0;
}

//***********************************************************
// This function simply demonstrates that exit can be used  *
// to terminate a program from a function other than main.  *
//***********************************************************
void someFunction()
{
	cout << "This program terminates with the exit function.\n";
	cout << "Bye!\n";
	exit(0);
	//return;
	cout << "This message will never be displayed\n";
	cout << "because the program has already terminated.\n";
}
