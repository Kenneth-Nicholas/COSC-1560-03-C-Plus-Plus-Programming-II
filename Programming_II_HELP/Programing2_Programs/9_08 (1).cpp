// Paul Biolchini 
// COSC 1560.07 
// Homework 1 Number 1
// Chapter 9 - Assignment 8, Search Benchmarks This program compares linear
// search and binary search in terms of the number of comparisons each makes to
// find a value.

#include <iostream>
using namespace std;

// Function prototype
int linearSearchBench(const int[], int, int);
int binarySearchBench(const int [], int, int);
void selectionSort(int [], int);

const int SIZE = 20;

int main()
{
	int numCompares = 0;
	int value;
	int testL[SIZE] = {	 234, 189, 296, 417, 147, 388, 207,
		289, 521, 142, 600, 447, 310, 536, 
		429, 199, 394, 319, 101, 222};

	int testB[SIZE] = {	 234, 189, 296, 417, 147, 388, 207,
		289, 521, 142, 600, 447, 310, 536, 
		429, 199, 394, 319, 101, 222};

	// Sort the binarySearch Array
	selectionSort(testB, SIZE);

	// Compare searches for a value in the middle of the array
	cout << "Searching for a value in the middle of the array -- \n";
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

	// Compare searches for the first value in the array
	cout << "\nSearching for the first value in the array -- \n";
	cout << "Searching for the value 234.\n";

	numCompares = linearSearchBench(testL, SIZE, 234);
	cout << "The linear search made " << numCompares 
		<< " comparisons.\n";

	numCompares = binarySearchBench(testB, SIZE, 234);
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

		// Compare searches for a value entered by the user
	cout << "Please enter a number: ";
	cin >> value;

	cout << "\nSearching for " << value << " -- \n";

	numCompares = linearSearchBench(testL, SIZE, value);
	cout << "The linear search made " << numCompares
		<< " comparisons.\n";

	numCompares = binarySearchBench(testB, SIZE, value);
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
			found = true;	// This will let us leave the loop.
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

/*************************************************************
*                    selectionSort                          *
* Called by: main                                           *
* Passed   : The array of numbers and the number of numbers *
* Purpose  : Sorts the numbers into ascending order         *
* Method   : Uses a selection sort modified to work with    *
*            integers                                       *
*************************************************************/

void selectionSort(int num[], int numInts )
{
	int    startScan,    // these are array indexes to be compared
		minIndex,
		minValue;

	// Sort the numbers
	for (startScan = 0; startScan < (numInts - 1); startScan++)
	{
		// find lowest
		minIndex = startScan;
		minValue = num[startScan];
		for (int index = startScan + 1; index < numInts; index++)
		{
			if (num[index] < minValue)
			{                         
				minValue = num[index];
				minIndex = index;
			}
		}
		// Move values to their new positions (swap)
		num[minIndex]  = num[startScan];
		num[startScan] = minValue;
	}   
}
