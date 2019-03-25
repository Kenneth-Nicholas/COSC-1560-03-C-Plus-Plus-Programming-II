// COSC 1550
// Class Example
// Functions - Chapter 6

#include <iostream>
#include "Function02.h"
using namespace std;
////
////// function prototypes
////int DataIn();
////void Display(int);
////
////int num;  // global

int main()
{
	int num;
	cout << "In main.  Calling dataIn.\n";
	num = DataIn();
	cout << "In main.  Function DataIn is returned a " << num << " to main.\n";
	Display(num);
	cout << "In main.  The value of num is " << num << "\n";
	return 0;
}

int DataIn()
{
	int n;
	cout << "Enter a number greater than 0: ";
	cin >> n;
	while (n <= 0)
	{
		cout << "Enter a number greater than 0: ";
		cin >> n;
	}
	cout << "In Function DataIn:  Call Display with a value of " << n << "\n";
	Display(n++);
	Display(n++);
	Display(n++);
	Display(n++);
	return n;
}

void Display(int n)
{
	static int count = 0;   //// static variables do not go out of memory when function is not running
	cout << "Hello from function \'Display\'\n";
	cout << "You sent a " << n << " to the function \'Display\'\n";
	count++;
	cout << "You have called Display " << count << " times.\n";
}
