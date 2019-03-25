// Chapter 5, Programming Challenge 13: The Greatest and Least of These
#include <iostream>
using namespace std;

int main()
{
	int num,       // To hold a number
		greatest,  // To hold the largest value.
		least;     // To hold the smallest value.

	// Explain what we are doing.
	cout << "You will enter a series of integers and\n"
		 << "I will then tell you the largest and\n"
		 << "the smallest numbers you entered.\n"
		 << "Enter -99 to terminate the series.\n\n";

	// Ask the user to enter the first number.
	cout << "Enter an integer (-99 to quit): ";
	cin  >> num;

	// The first number is both the greatest and
	// the smallest number entered.
	greatest = num; 
	least = num;
   
	// Get the rest of the numbers until the user
	// enters -99 to quit.
	while (num != -99)
	{
		// Get the next integer.
		cout << "Enter another integer (-99 to quit): ";
		cin  >> num;
      
		// If the user did not enter -99, then see
		// whether this number is now the greatest
		// or the least number entered so far.
		if (num != -99)
		{
			if (num > greatest)
				greatest = num;
			if (num < least)
				least = num;
		}
	}
   
	// Display the results.
	if (greatest != -99)
	{
		cout << "\nThe greatest number you entered is "
			 << greatest << ".\n";
		cout << "The least number you entered is "
			 << least << ".\n\n";
	}
	else
		cout << "No valid number entered.\n";
	return 0;
}