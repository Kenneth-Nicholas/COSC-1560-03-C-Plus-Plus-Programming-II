// Chapter 8 - Assignment 1, Charge Account Validation
// This program uses a linear search to match an entered 
// account number to a set of stored valid account numbers.

#include <iostream>
using namespace std;

bool searchList(const long [], int, long); // prototype


int main()
{
	const int SIZE = 18;
	long accounts[SIZE] = 
			{	5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
				8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
				1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };
	long acctNum;
	bool result;

	cout << "\nPlease enter a 7-digit account number: ";
	cin  >> acctNum;
	result = searchList(accounts, SIZE, acctNum);
	if (result)   
		// If searchList returned Boolean true, it is a valid number.
		cout << "The number you entered is valid.\n";
	else
		cout << "The number you entered is invalid." << endl;

	return 0;
}

/*******************************************************************
 *                       searchList                                *
 * Called by: main                                                 *
 * Passed   : 3 arguments: an array of valid numbers, the size     *
 *            of that array, and the acct. number to search for    *
 * Purpose  : Determines if the acct. number is in the set of      *
 *            valid numbers                                        *
 * Method   : Uses a linear search                                 *
 * Returns  : true (if the number is found) or false (if not found)*
 *******************************************************************/
bool searchList(const long list[], int size, long value)
{
	bool found = false; // Flag
	int count = 0;      // Loop counter

	// Step through the array as long as the value
	// is not found.
	while (!found && count < size)
	{
		if (list[count] == value)
		{
			found = true;  // The value is found.
		}
		count++;
	}

	return found;
}