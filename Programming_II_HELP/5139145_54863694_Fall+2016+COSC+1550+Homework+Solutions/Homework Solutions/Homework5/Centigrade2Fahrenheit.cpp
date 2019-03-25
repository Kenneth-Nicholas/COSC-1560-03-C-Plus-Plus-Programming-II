// Paul Biolchini
// COSC 1550
// Homework 5 Assignment 1
// Chapter 3, Problem 11
// Convert Centigrade temperatures to Fahrenheit.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double tempCen, 
		tempFah, 
		convert;

	convert = 9./5;  //  9./5. => 1.8
	cout << "Please enter the temperature in Celsius: ";
	cin >> tempCen;

//	tempFah = 1.8 * tempCen + 32;  // 1.8 => 9./5.
//	tempFah = 9 * tempCen / 5 + 32;  
	tempFah = convert * tempCen + 32;  
	cout << fixed << setprecision(1);
	cout << setw(5) << tempCen << " degrees Celsius is " 
		<< setw(5) << tempFah << " degrees Fahrenheit.\n";
	return 0;
}
// Result:
//Please enter the temperature in Celsius : 100
//100.0 degrees Celsius is 212.0 degrees Fahrenheit.
//Press any key to continue . . .