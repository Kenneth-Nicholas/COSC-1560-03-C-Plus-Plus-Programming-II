// Chapter 8, Programming Challenge 6: String Selection Sort
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void selectionSort(string [], int);
void displayArray(string [], int);

int main()
{
	const int NUM_NAMES = 20;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
								"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
								"Taylor, Terri", "Johnson, Jill",
								"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
								"James, Jean", "Weaver, Jim", "Pore, Bob",
								"Rutherford, Greg", "Javens, Renee",
								"Harrison, Rose", "Setzer, Cathy",
								"Pike, Gordon", "Holland, Beth" };

	// Display the unsorted array.
	displayArray(names, NUM_NAMES);

	// Sort the array.
	selectionSort(names, NUM_NAMES);

	// Display the sorted array.
	cout << "Here are the names sorted:\n";
	cout << "--------------------------\n";
	displayArray(names, NUM_NAMES);

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