// This program performs a binary search on an integer array 
// whose elements are in ascending order.

#include <iostream>
using namespace std;

// Function prototype
int binarySearch(int [], int, int);


int main()
{
	const int SIZE = 20;
	int tests[SIZE] = {101, 142, 147, 189, 199, 207, 222, 234, 289, 296,
                      310, 319, 388, 394, 417, 429, 447, 521, 536, 600};
	int results, empID;

	cout << "Enter the employee ID you wish to search for: ";
	cin  >> empID;
	results = binarySearch(tests, SIZE, empID);
	if (results == -1)
		cout << "That number does not exist in the array.\n";
	else
	{
		cout << "That ID is found at element " << results;
		cout << " in the array.\n";
	}
	return 0;
}

//****************************************************************
//                         binarySearch                          *
// This function performs a binary search on an integer array    *
// with numElems elements whose values are stored in ascending   *
// order. The array is searched for the number stored in the     *
// value parameter. If the number is found, its array subscript  *
// returned. Otherwise, -1 is returned.                          *
//****************************************************************

int binarySearch(int array[], int numElems, int value)
{
	int  first = 0,                    // First array element
	     last = numElems - 1,          // Last array element
	     middle,                       // Midpoint of search
	     position = -1;                // Position of search value
	bool found = false;                // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;    // Calculate midpoint
		if (array[middle] == value)     // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;          // If value is in upper half
	}
	return position;
}