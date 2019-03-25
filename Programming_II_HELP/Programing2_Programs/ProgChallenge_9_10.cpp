// Chapter 9 - Programming Challenge 10, Sorting Orders
// This program shows step-by-step in what order data values are
// placed in order by the Bubble Sort and Selection Sort Algorithms.
#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 8;

// Function prototypes
void bubbleSort(int [], int);  
void selectionSort(int [], int);
void showNums(const int[], int);

int main()
{
	// Two identical arrays
	int array1[SIZE] = { 705,  98,  221,  400,  50,  62,  120,  80 };
	int array2[SIZE] = { 705,  98,  221,  400,  50,  62,  120,  80 };

	// Call function to sort the first array using bubble sort
	bubbleSort(array1, SIZE);

	// Call function to sort the second array using selection sort
	selectionSort(array2, SIZE);
	
	return 0;
}

/*************************************************************
 *                       showNums                            *
 * Called by: main and both sorts                            *
 * Passed   : The array of numbers and the number of numbers *
 *            to be sorted                                   *
 * Purpose  : Displays the current order of the numbers in   *
 *            the array.                                     *
 *************************************************************/
void showNums(const int array[], int numElts)
{
	for (int pos = 0; pos < numElts; pos++)
		cout << setw(5) << array[pos];
	cout << endl;
}


/*************************************************************
 *                       bubbleSort                          *
 * Called by: main                                           *
 * Passed   : The array of numbers and the number of numbers *
 *            to be sorted                                   *
 * Purpose  : Demonstrates the bubble sort by sorting the    *
 *            numbers into ascending order with a bubble sort*
 *            and displaying the array after each pass.      *
 *************************************************************/
void bubbleSort(int array[], int elems)
{
	bool swap;
	int  temp,
		 pass = 1;

	cout << "__________________________________________________________________________\n";
	cout << "\nBubble Sort";
	cout << "\nOriginal array:                   ";
	showNums(array, elems);
	cout << "__________________________________________________________________________\n";
	do
	{
		swap = false;   // There have been no swaps yet on this pass.
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
		// Display the array after this pass
		cout << "Contents after bubble pass " << pass++ << ":      ";
		showNums(array, elems);

	} while (swap);    // While there was a swap on the previous pass
	// Display the array after the last pass
	cout << "Contents at end of bubble sort:    ";
	showNums(array, elems);
}
	
/*************************************************************
 *                    selectionSort                          *
 * Called by: main                                           *
 * Passed   : The array of numbers and the number of numbers *
 *            to be sorted                                   *
 * Purpose  : Demonstrates the selection sort by sorting the *
 *            numbers into ascending order with a selection  *
 *            sort and displaying the array after each pass. *
 *************************************************************/
void selectionSort(int array[], int elems)
{
	int startScan,      // These are array indexes to be compared
		minIndex,
		minValue,
		pass = 1;

	cout << "\n__________________________________________________________________________\n";   
	cout << "\nSelection Sort";
	cout << "\nOriginal array:                   ";
	showNums(array, elems);
	cout << "__________________________________________________________________________\n";
		
	for (startScan = 0; startScan < (elems - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < elems; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		if(minValue != array[startScan])
		{
			// Move values to their new positions
			array[minIndex]  = array[startScan];
			array[startScan] = minValue;
		}
		// Display the array after this pass
		cout << "Contents after selection pass " << pass++ << ":  ";
		showNums(array, elems);
	} 
	// Display the array after the last pass
	cout << "Contents at end of selection sort:";
	showNums(array, elems);
}
