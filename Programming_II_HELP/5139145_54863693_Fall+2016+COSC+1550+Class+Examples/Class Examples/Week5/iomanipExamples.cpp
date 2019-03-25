// COSC 1550.07
// Class Examples
// Chapter 3 - Format Output

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int size = 10;
	double num1 = 1112.897,  num2 = 5.12345, num3 = -837,
		   num4 = -34.12,     num5 = -7.7,     num6 = 16.23,
		   num7 = 3.90,      num8 = .3456,   num9 = -1.2;
	cout << showpoint << setprecision(2) << fixed << setfill('*') << showpos << endl; 
	// Display the first row of numbers
	cout << setw(size) << num1 << setw(size) << num2 << setw(size) << num3 << endl;
	// Display the second row of numbers
	cout << left << noshowpos<< setfill(' ') ;
	cout << setw(size) << num4 << setw(size) << num5 << setw(size) << num6 << endl;
	// Display the third row of numbers
	cout << right << showpos << setfill('#');
	cout << scientific;
	cout << setw(size) << num7 << setw(size) << num8 << setw(size) << num9 << endl;

	return 0;
}