// This program demonstrates infinite loops 
// stopped by break statements

#include <iostream>
using namespace std;

int main()
{
	int num;
	char letter;
	for(;;)	        // infinite loop
//	while(1)		// infinite loop
	{
		cout << "Enter a number: ";
		cin >> num;

		cout << "If the number is good, enter a Y or a y: ";
		cin >> letter;
		if (letter == 'Y' || letter == 'y')
			break;		// stop loop and get out
	}

	//run loop until sentinel value is entered
	int number = 0;
	int total = 0;
	while (number != -99)
	{
		cout << "Enter a number.  Enter -99 to quit.\n";
		cin >> number;
		if(number != -99)
			total += number;
	}
	cout << "The total is " << total << endl;
	return 0;
}