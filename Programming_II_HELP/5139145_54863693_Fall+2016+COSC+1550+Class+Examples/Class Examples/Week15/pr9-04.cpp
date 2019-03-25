// This program uses the bubble sort algorithm to sort an 
// array in ascending order.

#include <iostream>
using namespace std;

// Function prototypes
void sortArray(int [], int);
void showArray(int [], int);

int main()
{
	const int SIZE = 6;
   int values[SIZE] = {7, 2, 3, 8, 9, 1};

	cout << "The unsorted values are:\n";
	showArray(values, SIZE);
	sortArray(values, SIZE);
	cout << "The sorted values are:\n";
	showArray(values, SIZE);
	return 0;
}

//***********************************************************
// Definition of function sortArray                         *
// This function performs an ascending-order bubble sort on *
// array. The parameter elems holds the number of elements  *
// in the array.                                            *
//***********************************************************

void sortArray(int array[], int elems)
{
	int  temp;
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (elems - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
   } while (swap);
}

//**************************************************************
// Definition of function showArray                            *
// This function displays the contents of array. The parameter *
// elems holds the number of elements in the array.            *
//**************************************************************

void showArray(int array[], int elems)
{
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}
