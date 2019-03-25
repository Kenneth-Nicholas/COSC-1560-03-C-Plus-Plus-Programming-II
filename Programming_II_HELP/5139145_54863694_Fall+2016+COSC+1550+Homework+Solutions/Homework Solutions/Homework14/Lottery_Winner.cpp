// Chapter 8, Programming Challenge 3: Lottery Winners Modification
#include <iostream>
using namespace std;

// Function prototype
bool searchList(const long [], int, long);

// Constant for array size
const int SIZE = 10;

int main()
{
	// Array of numbers that are always played
	long ticket[SIZE] = { 13579,  26791,  
						  26792,  33445,  
						  55555,  62483,  
						  77777,  79422,  
						  85647,  93121 };
                          
	// This variable will hold the winning number.
	long winningNum;
	bool result;

	// Get this week's winning number.
	cout << "\nPlease enter this week's 5-digit "
		 << "winning lottery number: ";
	cin  >> winningNum;

	// Search for the winning number.
	result = searchList(ticket, SIZE, winningNum);
	if (result)
	{
		// If searchList returned true, then
		// the player has a winning ticket.
		cout << "You have a winning ticket.\n";
	}
	else
	{
		cout << "You did not win this week." << endl;
	}

	return 0;
}

// ********************************************************
// The searchList function accepts as arguments, an array *
// of numbers, the size of the array, and the number to   *
// search for. It determines if the number to search for  *
// is in the set of stored numbers using a binary search. *
// It returns true if the number is found, otherwise it   *
// returns false.                                         *
// ********************************************************
bool searchList(const long list[], int numElems, long value)
{
	bool found = false;

	int first = 0;
	int middle;
	int last = numElems - 1;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
	
		if (list[middle] == value)
			found = true;
		else if (list[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}

	return found;
}