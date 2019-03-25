// COSC 1550
// Class Example
// Functions - Chapter 6

#include <iostream>

using namespace std;

// function prototypes
int Display(int );
double sendNumber();

int main()
{
	int num = 2, val;
	val = Display(num);
	cout << "A " << val << " was returned from \'Display\'\n";
	double dub = sendNumber();
	cout << "A " << dub << " was returned from \'sendNumber\'\n";
	return 0;
}

int Display(int n)
{
	int result;
	cout << "Hello from function \'Display\'\n";
	cout << "You sent a " << n << " to the function \'Display\'\n";
	result = n * sendNumber();
	cout << "Function \'Display\' is returning a " << result << "\n";
	return result;
}
 
double sendNumber()
{
	double number = 3.14159;
	return number;
}