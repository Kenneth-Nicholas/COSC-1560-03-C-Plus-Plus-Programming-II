// This program raises the user's number to the powers of 0 through 10.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double value;
	char choice;

	cout << "Enter a number: ";
	cin  >> value;
	cout << "This program will raise " << value;
	cout << " to the powers of 0 through 10.\n";
	for (int count = 0; count <= 10; count++)
	{
		cout << value << " raised to the power of ";
		cout << setw(3) << count << " is " << setw(10) << pow(value, count) << endl;

	}
   return 0;
}			
