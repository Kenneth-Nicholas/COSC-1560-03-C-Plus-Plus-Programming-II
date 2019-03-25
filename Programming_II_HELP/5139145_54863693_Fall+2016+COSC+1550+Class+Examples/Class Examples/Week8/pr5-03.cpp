// This program demonstrates a simple while loop.

#include <iostream>
using namespace std;

int main()
{

	cout << "This program will let you enter number after\n";
	cout << "number. Enter -99 when you want to quit the ";
	cout << "program.\n";

	//run loop until sentinal value is entered
	int number = 0;
	int total = 0;
	while (number != -99)
	{
		cout << "Enter a number.  Enter -99 to quit.\n";
		cin >> number;
		if (number != -99)
		{
			cout << "You entered a " << number << endl;
			total += number;
		}
	}
	cout << "The total is " << total << endl;
	cout << "Done\n";
	return 0;
}
