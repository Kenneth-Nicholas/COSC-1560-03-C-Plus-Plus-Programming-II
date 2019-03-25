// This program shows that variables defined in a function
// are hidden from other functions. 

#include <iostream>
using namespace std;

// Function prototype
void anotherFunction();  

int main()
{
	int num = 1;          // Local variable

	cout << "In main, num is " << num << endl;
	anotherFunction();
	cout << "Back in main, num is still " << num << endl;
	return 0;
}

//*********************************************************************
// Definition of anotherFunction                                      *
// This function has a local variable, num, whose value is displayed. *
//*********************************************************************
void anotherFunction()
{
	int num = 20;         // Local variable

	cout << "In anotherFunction, num is " << num << endl;
}
