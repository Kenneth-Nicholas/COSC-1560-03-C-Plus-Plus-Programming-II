// This program uses a for loop to display the numbers 1-10 and their squares.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//	int num;

	cout << "\tNumber     Number Squared\n";
	cout << "\t-------------------------\n";

	for (int num = 1; num <= 10; num++)
	{
		cout << "\t" << setw(3) << num <<  "\t" << setw(8) << (num * num) << endl;
	}
	return 0;
}
