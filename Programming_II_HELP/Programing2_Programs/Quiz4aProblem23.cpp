// Quiz 4a - Problem 23 Largest Array Values
// This program finds the largest 6 values
// stored in an integer array and uses the 
// array location of the largest to find the 
// name of the oldest child in a parallel 
// string array of names.

#include <iostream>
#include <string>
using namespace std;

// Function prototype
int findLargest(const int[], int);

int main()
{
	const int SIZE = 6;
	int age[SIZE] = { 1, 4, 6, 2, 5, 3 };
	string name[SIZE] = { "Becky", "Fred", "Alfred", "Waldo", "Sue", "Mary" };
	int largest;


   // Find the largest and smallest values
   largest =  findLargest(age, SIZE);
  	
	// Display the results
   cout << endl;
   cout << name[largest] << " is the oldest child at " << age[largest] << " years old.\n";
   return 0;
}

/*******************************************************
 *                  findLargest                        *
 * Finds and returns the largest value in the myArray    *
 * passed as an argument to the function.              *
 *******************************************************/
int findLargest(const int myArray[], int num)
{
	int largeIndex = 0;
	int largest = myArray[0];
	for (int i = 1; i < num; i++)
	{
		if (myArray[i] > largest)
		{
			largest = myArray[i];
			largeIndex = i;
		}
	}
	return largeIndex;
}

//// Result
//// 
//// Alfred is the oldest child at 6 years old.
//// Press any key to continue . . .


//Alfred is the oldest child at 6 years old.
//Press any key to continue . . .