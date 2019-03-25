// This program uses the selection sort algorithm to sort an 
// array in ascending order.

#include <iostream>
using namespace std;

// Function prototypes
void selectionSort(int [], int);
void showArray(const int [], int);

int main()
{
	const int SIZE = 8;
	int values[SIZE] = {7, 5, 2, 3, 8, 9, 1, 4};

	cout << "The unsorted values are\n";
//	showArray(values, SIZE);
	selectionSort(values, SIZE);
	cout << "The sorted values are\n";
	showArray(values, SIZE);
	return 0;
}

//**************************************************************
// Definition of function selectionSort                        *
// This function performs an ascending-order selection sort on *
// array. The parameter elems holds the number of elements     *
// in the array.                                               *
//**************************************************************

void selectionSort(int arr[], int elems)
{
	int startScan, minIndex, minValue;
	int cnt = 0;
	for (startScan = 0; startScan < (elems - 1); startScan++)
	{
		showArray(arr, elems);

		minIndex = startScan;
		minValue = arr[startScan];
		for(int index = startScan + 1; index < elems; index++)
		{
			if (arr[index] < minValue) //find lowest (ascending order)
			{
				minValue = arr[index];
				minIndex = index;
			}
        }
		if(minValue != arr[startScan])  // if 1st value is min, don't swap
		{
			cnt++;
			arr[minIndex] = arr[startScan]; // swap
			arr[startScan] = minValue;
		}
	}
	cout << "There were " << cnt << " swaps.\n";
}

//**************************************************************
// Definition of function showArray                            *
// This function displays the contents of arr. The parameter *
// elems holds the number of elements in the array.            *
//**************************************************************

void showArray(const int arr[], int elems)
{
	for (int count = 0; count < elems; count++)
		cout << arr[count] << " ";
	cout << endl;
	//arr[3] = 0;
}
