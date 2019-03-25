// Chapter 8 - Assignment 1, Largest/Smallest Array Values
// This program finds the largest and smallest of 10 values
// stored in an integer array.

#include <iostream>
using namespace std;

//const int SIZE = 10;

// Function prototypes
int findLargest(const int[], int);
int findSmallest(const int[], int);

int main()
{
	const int SIZE = 10;
   int array[SIZE], 
		 largest, 
		 smallest;

	cout << "This program will ask you to enter ten values\n"; 
	cout << "Then it will determine the largest and smallest\n"; 
	cout << "of the values you entered.\n\n";
   cout << "Please enter 10 integers separated by spaces: \n";
	// Prompt the user for 10 array values
	for (int count = 0; count < SIZE; count++)
	{  // Copy the 10 values from the input buffer 
      // into the 10 array elements
		cout << count+1 << ": ";
		cin  >> array[count];
   }
  
   // Find the largest and smallest values
   largest =  findLargest(array, SIZE);
   smallest = findSmallest(array, SIZE);
  	
	// Display the results
   cout << endl;
   cout << "The largest value entered is  " << largest  << endl;
   cout << "The smallest value entered is " << smallest << endl;
   return 0;
}

/*******************************************************
 *                  findLargest                        *
 * Finds and returns the largest value in the array    *
 * passed as an argument to the function.              *
 *******************************************************/
int findLargest(const int array[], int numElts)
{
   int largest = array[0];
   for (int pos = 1; pos < numElts; pos++)
   {
   	if (array[pos] > largest)
      	largest = array[pos];
      	//array[pos] = largest;
   }
   return largest;
}

/*******************************************************
 *                  findSmallest                       *
 * Finds and returns the smallest value in the array   *
 * passed as an argument to the function.              *
 *******************************************************/
int findSmallest(const int array[], int numElts)
{
   int smallest = array[0];
   for (int pos = 1; pos < numElts; pos++)
   {
   	if (array[pos] < smallest)
      	smallest = array[pos];
   }
   return smallest;
}
