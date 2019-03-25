// This program performs a binary search on an integer array 
// whose elements are in ascending order.

#include <iostream>
#include <string>
using namespace std;

// Function prototype
int binarySearch(string [], int, string);


int main()
{
	const int SIZE = 10;
	string names[SIZE] = {"April","Fred","Harriet","Jane","Mike","Paul","Sam","Sara","Sue","Waldo"};
	int results;
	string empID;

	cout << "Enter the employee name you wish to search for: ";
	cin  >> empID;
	results = binarySearch(names, SIZE, empID);
	if (results == -1)
		cout << "That name does not exist in the array.\n";
	else
	{
		cout << "That name is found at element " << results;
		cout << " in the array.\n";
	}
	return 0;
}

//****************************************************************
//                         binarySearch                          *
// This function performs a binary search on an string array    *
// with numElems elements whose values are stored in ascending   *
// order. The array is searched for the name stored in the     *
// value parameter. If the name is found, its array subscript  *
// returned. Otherwise, -1 is returned.                          *
//****************************************************************

int binarySearch(string array[], int numElems, string value)
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