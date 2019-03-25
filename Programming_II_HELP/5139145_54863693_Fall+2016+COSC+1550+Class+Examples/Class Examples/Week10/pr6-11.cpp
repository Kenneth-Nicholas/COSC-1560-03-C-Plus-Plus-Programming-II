// This program uses a function that returns a value.

#include <iostream>
using namespace std;

// Function prototype
int square(int);

int main()
{
	int number, result;
	cout << "Enter a number and I will square it: ";
	cin  >> number;
	result = square(number);
	cout << number << " squared is " << result << endl;
	return 0;
}

//*****************************************************
// Definition of function square                      *
// This function accepts an int argument and returns  *
// the square of the argument as an int.              *
//*****************************************************
int square(int number)
{
	return number * number;
}
