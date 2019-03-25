// This program uses the bubble sort algorithm to sort an 
// array in ascending order.

#include <iostream>
using namespace std;

// Function prototypes
int sortArray(int [], int);
void showArray(const int [], int);
void swapInt(int &, int &);

int main()
{
	const int SIZE = 8;
	int values[SIZE] = {7, 5, 2, 3, 8, 9, 1, 4};
	int count;

	cout << "The unsorted values are:\n";
	showArray(values, SIZE);
	count = sortArray(values, SIZE);
	cout << "The sorted values are:\n";
	showArray(values, SIZE);
	cout << "The bubble sort did " << count << " swaps to sort the array.\n";
	return 0;
}

//***********************************************************
// Definition of function sortArray                         *
// This function performs an ascending-order bubble sort on *
// array. The parameter elems holds the number of elements  *
// in the array.                                            *
//***********************************************************

int sortArray(int array[], int elems)
{
	int cnt = 0;
	bool swapFlag;

	do
	{	swapFlag = false;
		for (int count = 0; count < (elems - 1); count++)
		{
			if (array[count] > array[count + 1])  // ascending order
//			if (array[count] < array[count + 1])  // descending order
			{							//swap function
				swapInt(array[count], array[count+1]);
				swapFlag = true;
				cnt++;
				showArray(array, elems);
			}
		//showArray(array, elems);
		}
//		showArray(array, elems);
		cout << "---------------------\n";
   } while (swapFlag);
	return cnt;
}

//**************************************************************
// Definition of function showArray                            *
// This function displays the contents of array. The parameter *
// elems holds the number of elements in the array.            *
//**************************************************************

void showArray(const int array[], int elems)
{
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}


void swapInt(int & a, int & b)
{
	int  temp = a;
	a = b;
	b = temp;
}