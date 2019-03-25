// This program illustrates how to copy one array to another.
#include <iostream>
using namespace std;

void arrayCopy(int [], int [], int);
int main()
{
	const int SIZE = 6;
	int arrayA[SIZE] = {10, 20, 30, 40, 50, 60};
	int arrayB[SIZE] = { 2,  4,  6,  8, 10, 12};

		// Display the contents of the two arrays
   cout << "ArrayB still holds the values:    ";
	for (int index = 0; index < SIZE; index++)
	   cout << arrayB[index] << "  ";
	cout << endl;
		
	cout << "\nArrayA now also holds the values: ";
	for (int index = 0; index < SIZE; index++)
	   cout << arrayA[index] << "  ";
	cout << endl;
	//arrayB = arrayA;  //error!
	// Copy the elements of arrayB to arrayA
	//for (int index = 0; index < SIZE; index++)
	//   arrayA[index] = arrayB[index];

	// Copy the elements of arrayB to arrayA
	arrayCopy(arrayA, arrayB, SIZE);

	// Display the contents of the two arrays
   cout << "ArrayB still holds the values:    ";
	for (int index = 0; index < SIZE; index++)
	   cout << arrayB[index] << "  ";
	cout << endl;
		
	cout << "\nArrayA now also holds the values: ";
	for (int index = 0; index < SIZE; index++)
	   cout << arrayA[index] << "  ";
	
	cout << endl;
	return 0;
}

void arrayCopy(int arrA[], int arrB[], int SIZE)
{
	// Copy the elements of arrayB to arrayA
	for (int index = 0; index < SIZE; index++)
	   arrA[index] = arrB[index];
}
