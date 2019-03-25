// This program demonstrates infinite loops 
// stopped by break statements

#include <iostream>
using namespace std;

int main()
{
	int num;
	char letter;
	while(1)		// infinite loop
	{
		cout << "Enter a number: ";
		cin >> num;

		cout << "If the number is good, enter a Y or a y: ";
		cin >> letter;
		if (letter == 'Y' || letter == 'y')
		{
			break;		// stop loop and get out
		}
	}

}