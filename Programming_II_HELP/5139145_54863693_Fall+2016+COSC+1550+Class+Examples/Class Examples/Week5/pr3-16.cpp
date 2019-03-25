//	This program uses setw to displays three rows of numbers so they align.

#include <iostream>
#include <iomanip>        // Header file needed to use setw
#include <string>
using namespace std;

int main()
{
	double num1 = 2897.12345, num2 = 5.005,    num3 = 837.2,
	      num4 = -34.774,     num5 = 7.1111,   num6 = 1623.09,
	      num7 = 390,   num8 = -3456.789, num9 = 12.9999;
	int n1 = 123, n2 = 33445, n3 = -5431234;
	string s1 = "Sam", s2 = "Susan", s3 = "Walter";
	//      force .      force +    show 2 decimal places
	cout << showpoint << showpos << setprecision(2) << fixed;
//	cout << setprecision(3) << fixed;
	// Display the first row of numbers
	cout << setw(11) << num1 << setw(11) << num2  << right << setw(11) << num3 << endl;
	// Display the second row of numbers
	cout << setw(11) << num4 << setw(11) << num5 << setw(11) << num6 << endl;
	// Display the third row of numbers
	cout << setprecision(3) << fixed;
	cout.unsetf(ios::showpos);  // turn off showpos flag
	cout << setw(11) << num7 << setw(11) << num8 << setw(11) << num9 << endl;
	cout << setw(8) << n1 << "   " << setw(8) << n2 << "   " << setw(8) << n3 << endl;
	cout << left << setw(11) << s1 << setw(11) << s2 << setw(11) << s3 << endl;

	return 0;
}
