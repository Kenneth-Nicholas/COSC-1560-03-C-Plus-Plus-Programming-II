//	This program displays three rows of numbers.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double num1 = -2897.08, num2 = 5.112,    num3 = 837.656,
	    num4 = 34,   num5 = -7.111,    num6 = 1623.2,
	    num7 = 390.00,  num8 = 3456.343, num9 = 12.12345678;

	cout << setprecision(2) << fixed << showpos;
//	cout << setprecision(6);
	
	// Display the first row of numbers
	cout << setw(13) << num1 << setw(13) << num2 << setw(13) << num3 << endl;

	// Display the second row of numbers
	cout << setw(13) << num4 << setw(13) << num5 << setw(13) << num6 << endl;

	// Display the third row of numbers
	cout << setw(13) << num7 << setw(13) << num8 << setw(13) << num9 << endl;

	cout << left;
	cout << setprecision(6);
	
	// Display the first row of numbers
	cout << setw(13) << num1 << setw(13) << num2 << setw(13) << num3 << endl;

	// Display the second row of numbers
	cout << setw(13) << num4 << setw(13) << num5 << setw(13) << num6 << endl;

	// Display the third row of numbers
	cout << setw(13) << num7 << setw(13) << num8 << setw(13) << num9 << endl;

	cout << right;
	cout << setprecision(2);
	
	// Display the first row of numbers
	cout << setw(13) << num1 << setw(13) << num2 << setw(13) << num3 << endl;

	// Display the second row of numbers
	cout << setw(13) << num4 << setw(13) << num5 << setw(13) << num6 << endl;

	// Display the third row of numbers
	cout << setw(13) << num7 << setw(13) << num8 << setw(13) << num9 << endl;



	return 0;
}
