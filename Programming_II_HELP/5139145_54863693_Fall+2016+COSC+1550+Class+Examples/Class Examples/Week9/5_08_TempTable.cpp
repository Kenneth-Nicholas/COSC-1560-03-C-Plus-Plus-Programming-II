// Chapter 5 - Assignment 8, Centigrade to Fahrenheit Table
// This program creates a centigrade to Fahrenheit temp. conversion table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double Fahrenheit;		       // temperature in Fahrenheit

	// Output table headings
	cout << "Temperature Conversion Table\n";
	cout << "Centigrade  Fahrenheit\n\n";
		
	cout << fixed << showpoint << setprecision(1);

	for (int centigrade = 0; centigrade <= 100; centigrade += 10)  // loop forward by 10
//	for (int centigrade = 0; centigrade <= 100; centigrade++)  // loop forward
	//for (int centigrade = 100; centigrade >= -40; centigrade--)  // loop backwards
	{
		// Perform conversion
		Fahrenheit = ((9.0/5.0) * centigrade) + 32;

		// Display results
		cout << setw(6) << centigrade << setw(12)  << Fahrenheit << endl;
	}
////////		cout << setw(6) << centigrade << setw(12)  << Fahrenheit << endl;

	return 0;
}
