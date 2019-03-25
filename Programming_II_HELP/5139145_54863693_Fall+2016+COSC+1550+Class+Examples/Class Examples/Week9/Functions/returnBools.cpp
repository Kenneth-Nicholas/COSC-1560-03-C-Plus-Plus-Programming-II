// Paul Biolchini
// COSC 1550.07
// Function Example 2
// Returning Booleans from a function

#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
	char yesNo = 'y';
	int number;
	do
	{
		cout << "Enter and integer value: ";
		cin >> number;

	//	bool even = isEven(number);

	//	if(even)
		if (isEven(number))
			cout << "The number you entered was even.\n";
		else
			cout << "The number you entered was odd.\n";
		cout << "Continue? (y/n):";
		cin >> yesNo;
	}while(yesNo == 'y' || yesNo == 'Y');
	return 0;
}

bool isEven(int num)
{
	bool even = false;
	if(num % 2 ==0)
		even = true;
	return even;
}