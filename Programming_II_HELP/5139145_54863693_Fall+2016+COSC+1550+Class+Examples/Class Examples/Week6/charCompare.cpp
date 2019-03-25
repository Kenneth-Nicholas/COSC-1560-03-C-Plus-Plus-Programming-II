// COSC 1550
// Chapter 4
// Compare char values

#include <iostream>

using namespace std;

int main()
{
	char letter1 = 'A';
	char letter2 = 'b';

	if (letter1 < letter2)
	{
		cout << letter1 << " is smaller than " << letter2 << endl;
	}
	else if (letter1 > letter2)
	{
				cout << letter1 << " is greater than " << letter2 << endl;
	}
	else
	{
				cout << letter1 << " is equal to " << letter2 << endl;
	}
	return 0;
}