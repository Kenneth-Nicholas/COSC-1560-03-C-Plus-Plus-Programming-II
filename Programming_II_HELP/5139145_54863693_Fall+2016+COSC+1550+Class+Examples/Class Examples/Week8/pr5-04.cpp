// This program displays the numbers 1 through 10 and their squares.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
///	int num = 1;    // Initialize counter
	int num = 0;    // Initialize counter

	cout << "Number     Number Squared\n";
	cout << "-------------------------\n";
///	while (num <= 10)
//	while (num++ < 10)
	while (++num <= 10)
	{
		cout << setw(3) << num << "\t\t" << setw(4) << (num * num) << endl;
		///num++;       // Increment counter
	}
	return 0;
}
