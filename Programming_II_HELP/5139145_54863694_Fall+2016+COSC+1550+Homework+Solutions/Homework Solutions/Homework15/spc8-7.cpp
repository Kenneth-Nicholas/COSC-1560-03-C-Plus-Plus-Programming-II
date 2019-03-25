// Chapter 8, Programming Challenge 7: Binary String Search
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void selectionSort(string [], int);
void displayArray(string [], int);
int binarySearch(string [], int, string);

int main()
{
	const int NUM_NAMES = 20;
	string search;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
								"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
								"Taylor, Terri", "Johnson, Jill",
								"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
								"James, Jean", "Weaver, Jim", "Pore, Bob",
								"Rutherford, Greg", "Javens, Renee",
								"Harrison, Rose", "Setzer, Cathy",
								"Pike, Gordon", "Holland, Beth" };

	// Sort the array.
	selectionSort(names, NUM_NAMES);

	// Display the sorted array.
	cout << "Here are the names sorted:\n";
	cout << "--------------------------\n";
	displayArray(names, NUM_NAMES);

	// Get a name to search for.
	cout << "Enter a name to search for: ";
	getline(cin, search);

	// Search for the name.
	int results = binarySearch(names, NUM_NAMES, search);

	// If results contains -1 the string was not found.
	if (results == -1)
		cout << "That names does not exist in the array.\n";
	else
	{
		// Otherwise results contains the subscript of
		// the specified name in the array.
		cout << "That name is found at element " << results;
		cout << " in the array.\n";
	}

	return 0;
}

// ********************************************************
// The selectionSort function performs an ascending order *
// selection sort on an array of strings. The size        *
// parameter is the number of elements in the array.      *
// ********************************************************
void selectionSort(string values[], int size)
{
	int startScan;
	int minIndex;
	string minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = values[minIndex];

		for(int index = startScan + 1; index < size; index++)
		{
			if (values[index] < minValue)
			{
				minValue = values[index];
				minIndex = index;
			}
		}

		values[minIndex] = values[startScan];
		values[startScan] = minValue;
	}
}

// ********************************************************
// The displayArray function displays the contents of     *
// the array.                                             *
// ********************************************************
void displayArray(string values[], int size)
{
	for (int i = 0; i < size; i++)
		cout << values[i] << endl;
}

// ********************************************************
// The binarySearch function performs a binary search on  *
// an array of strings. array, which has a maximum of     *
// size elements, is searched for the string stored in    *
// value. If the string is found, its array subscript is  *
// returned. Otherwise, -1 is returned indicating the     *
// string was not in the array.                           *
// ********************************************************
int binarySearch(string values[], int size, string value)
{
	bool found = false;     // Flag, initialized to false.

	int first = 0;          // To hold the first array element
	int middle;             // To hold the mid point of search
	int last = size - 1;    // To hold the last array element  
	int position = -1;      // To hold the position of search value
   
	while (!found && first <= last)
	{
		// Calculate the mid point.
		middle = (first + last) / 2;		

		// Determine if the value is found at the mid point.
		if (values[middle] == value)		
		{
			position = middle;
			found = true;
		}
		// Determine if the value is in the lower half.
		else if (values[middle] > value)	
			last = middle - 1;
		// Determine if the value is in the upper half.
		else
			first = middle + 1;				
	}

	return position;
}