// Chapter 4 - Assignment 2, Roman Numeral Converter
// This program uses a switch statement to display the Roman numeral 
// representation of any integer 1-10.

#include <iostream>
using namespace std;

int main()
{
	int num;

	// Request input from user
	cout << "Enter an integer number in the range of 1 - 10: ";
	cin  >> num;

	// Check that number is valid and select numeral to display 
	if (num < 1 || num > 10)
	{
		cout << "That number is not valid.\n";
	}
	else
	{
		cout << "The Roman numeral for " << num << " is ";
		switch (num)
		{
			case 1:	cout << "I\n";
                  break;
			case 2:	cout << "II\n";
                  break;
			case 3:	cout << "III\n";
                  break;
			case 4:	cout << "IV\n";
                  break;
			case 5:	cout << "V\n";
                  break;
			case 6:	cout << "VI\n";
                  break;
			case 7:	cout << "VII\n";
                  break;
			case 8:	cout << "VIII\n";
                  break;
			case 9:	cout << "IX\n";
                  break;
			default: cout << "X\n\n";
		}
	}
	return 0;
}
