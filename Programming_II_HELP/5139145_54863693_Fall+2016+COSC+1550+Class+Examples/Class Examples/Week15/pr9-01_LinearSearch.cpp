// This program demonstrates the searchList function, which
// performs a linear search on an integer array.

#include <iostream>
using namespace std;

// Function prototype
int searchList(const int [], int, int);


int main()
{
	const int SIZE = 5;
	int tests[SIZE] = {87, 75, 98, 100, 82};
	int results;
	int num;
	cout << "Enter the test score to search for: ";
	cin >> num;

	results = searchList(tests, SIZE, num);
	if (results < 0)
		cout << "You did not earn " << num << " points on any test.\n";
	else
	{
		cout << "You earned " << num << " points on test ";
		cout << (results + 1) << ".\n";
	}
	return 0;
}


//****************************************************************
//                           searchList                          *
// This function performs a linear search on an integer array.   *
// The list array, which has numElems elements, is searched for  *
// the number stored in value. If the number is found, its array *
// subscript is returned. Otherwise, -1 is returned.             *
//****************************************************************

int searchList(const int list[], int numElems, int value)
{
	int index = 0;               // Used as a subscript to search array 
	int position = -1;           // Used to record position of search value 
	bool found = false;          // Flag to indicate if the value was found 

	while (index < numElems && !found)
	{
		if (list[index] == value) // If the value is found
		{
			found = true;          // Set the flag 
			position = index;      // Record the value's subscript 
		}
		index++;                  // Go to the next element 
	}
	return position;             // Return the position, or -1 
}
