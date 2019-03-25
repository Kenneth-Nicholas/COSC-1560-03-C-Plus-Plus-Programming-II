// Chapter 9 - Assignment 1, Charge Account Validation
// This program uses a linear search to match an entered 
// account number to a set of stored valid account numbers.

#include <iostream>
using namespace std;

bool binarySearch(long [], int, long );
void selectionSort(long [], int);
void showArray(const long [], int);
int main()
{
	const int SIZE = 18;
	long accounts[SIZE] = 
			{	5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
				8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
				1005231,  6545231,  3852085,  7576651,  7881200,  4581002, };
	long acctNum;

	showArray(accounts, SIZE);
	selectionSort(accounts, SIZE);
	showArray(accounts, SIZE);


	cout << "\nPlease enter a 7-digit account number: ";
	cin  >> acctNum;

	if (binarySearch(accounts, SIZE, acctNum))   
		// If searchList returned Boolean true, it is a valid number.
		cout << "The number you entered is valid.\n";
	else
		cout << "The number you entered is invalid." << endl;

	return 0;
}

bool binarySearch(long array[], int numElems, long value)
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
//	return position;
	return found;
}

//**************************************************************
// Definition of function selectionSort                        *
// This function performs an ascending-order selection sort on *
// array. The parameter elems holds the number of elements     *
// in the array.                                               *
//**************************************************************

void selectionSort(long array[], int elems)  
{
	int startScan, minIndex;
	long minValue;

	for (startScan = 0; startScan < (elems - 1); startScan++)
	{// moves the start location
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < elems; index++)
		{
			if (array[index] < minValue) //find lowest
			{
				minValue = array[index];
				minIndex = index;
			}
      }
		array[minIndex] = array[startScan]; // swap
		array[startScan] = minValue;
	}
}

//**************************************************************
// Definition of function showArray                            *
// This function displays the contents of array. The parameter *
// elems holds the number of elements in the array.            *
//**************************************************************

void showArray(const long array[], int elems)
{
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}
