// This program displays the numbers 1 through 10 and their squares.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num = 0;    // Initialize counter

	cout << "Number     Number Squared\n";
	cout << "-------------------------\n";
	while (num < 10)
	{
		num++;       // Increment counter
		cout << setw(3) << num << "\t\t" << setw(4) << (num * num) << endl;
	}
	cout << setw(3) << num << "\t\t" << setw(4) << (num * num) << endl;


	return 0;
}
