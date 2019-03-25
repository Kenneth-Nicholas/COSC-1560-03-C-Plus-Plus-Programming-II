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
//	exit(0);
	exit(EXIT_SUCCESS);
//	exit(EXIT_FAILURE);
	cout << "This message will never be displayed\n";
	cout << "because the program has already terminated.\n";
}
