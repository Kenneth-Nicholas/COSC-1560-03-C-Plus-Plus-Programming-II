// This program uses overloaded functions.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int square(int);
double square(double);

int main()
{
	int userInt;
	double userReal;

	cout << fixed << showpoint << setprecision(2);
	cout << "Enter an integer and a floating-point value: ";
	cin  >> userInt >> userReal;
	cout << "Here are their squares: ";
	cout << square(userInt) << " and " << square(userReal) << endl;
	return 0;
}

//**********************************************************
// Definition of overloaded function square                *
// This function has an int parameter, number.             *
// It returns the square of number as an int.              *
//**********************************************************
int square(int number)
{
	cout << "Square an integer.\n";
	return number * number;
}

//**********************************************************
// Definition of overloaded function square                *
// This function has a double parameter, number.           *
// It returns the square of number as a double.            *
//**********************************************************
double square(double number)
{
	cout << "Square a double.\n";
	return number * number;
}
