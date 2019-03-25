// Chapter 9 - Programming Challenge 8, Search Benchmarks
// This program compares the number of comparisons used  
// by linear search vs. binary search to find a value.
#include <iostream>
using namespace std;

// Function prototypes
int linearSearchBench(const int[], int, int);
int binarySearchBench(const int[], int, int);

const int SIZE = 20;

int main()
{
	int numCompares = 0;         // Accumulator to count the number of comparisons 
   
	int testB[SIZE] =            // The array to be searched
		{ 101, 142, 147, 189, 199, 207, 222,
		  234, 289, 296, 310, 319, 388, 394,
		  417, 429, 447, 521, 536, 600       };
	int testL[SIZE] =            // The array to be searched
		{ 199, 521, 319, 447, 101, 234, 600,
		  207, 536, 394, 417, 147, 388, 296,
		  310, 429, 189, 142, 289, 222       };

	// Compare searches for a value at the beginning of the array
	cout << "Searching for a value at the beginning of the array -- \n";
	cout << "Searching for the value 101.\n";

	numCompares = linearSearchBench(testL, SIZE, 101);
	cout << "The linear search made " << numCompares
		 << " comparisons.\n";

	numCompares = binarySearchBench(testB, SIZE, 101);
	cout << "The binary search made " << numCompares
		 << " comparisons.\n";
	// Compare searches for a value in the middle of the array
	cout << "\nSearching for a value in the middle of the array -- \n";
	cout << "Searching for the value 296.\n";

	numCompares = linearSearchBench(testL, SIZE, 296);
	cout << "The linear search made " << numCompares 
		 << " comparisons.\n";

	numCompares = binarySearchBench(testB, SIZE, 296);
	cout << "The binary search made " << numCompares
		 << " comparisons.\n";

	// Compare searches for a value at the end of the array
	cout << "\nSearching for a value at the end of the array -- \n";
	cout << "Searching for the value 600.\n";

	numCompares = linearSearchBench(testL, SIZE, 600);
	cout << "The linear search made " << numCompares
		 << " comparisons.\n";

	numCompares = binarySearchBench(testB, SIZE, 600);
	cout << "The binary search made " << numCompares
		 << " comparisons.\n";

	// Compare searches for a value not in the array
	cout << "\nSearching for a value not in the array -- \n";
	cout << "Searching for the value 312.\n";

	numCompares = linearSearchBench(testL, SIZE, 312);
	cout << "The linear search made " << numCompares
		 << " comparisons.\n";

	numCompares = binarySearchBench(testB, SIZE, 312);
	cout << "The binary search made " << numCompares
		 << " comparisons.\n";

	return 0;
}

/********************************************************************
 *                       linearSearchBench                          *
 * Called by: main                                                  *
 * Passed   : An array to search in, the number of elements in      *
 *            the array, and the value to search for                *
 * Purpose  : To count the number of comparisons made to complete   *
 *            the linear search                                     *
 * Returns  : The comparison count                                  *
 * Note     : Linear search can be written to be more efficient than*
 *            the algorithm used below in determining that a value  *
 *            is NOT present in the array if the array elements     *
 *            are known to be in sorted order.                      *
 ********************************************************************/
int linearSearchBench(const int array[], int numElems, int value)
{
	int  comparisons = 0,
		 index = 0;
	bool found = false;

	while (!found && index < numElems)
	{
		comparisons++;
		if (array[index++] == value)
			found = true;              // This lets us leave the loop
	}
	return comparisons;
}

/******************************************************************
 *                       binarySearchBench                        *
 * Called by: main                                                *
 * Passed   : An array to search in, the number of elements in    *
 *            the array, and the value to search for              *
 * Purpose  : To count the number of comparisons made to complete *
 *            the binary search                                   *
 * Returns  : The comparison count                                *
 ******************************************************************/
int binarySearchBench(const int array[], int numElems, int value)
{
	bool found = false;
	int  first = 0, 
		 last = numElems - 1, 
		 middle,
		 comparisons = 0;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		comparisons++;
		if (array[middle] == value)
			found = true;
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return comparisons;  
}
