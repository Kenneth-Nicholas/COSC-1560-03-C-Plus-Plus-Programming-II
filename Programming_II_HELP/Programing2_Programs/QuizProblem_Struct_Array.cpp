// Quiz 4a - Problem 23 Largest Array Values
// This program finds the largest 6 values
// stored in an integer array and uses the 
// array location of the largest to find the 
// name of the oldest child in a parallel 
// string array of names.

#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
};


// Function prototype
int findLargest(const Student[], int);

int main()
{
	const int SIZE = 6;
	Student child[SIZE] = {
		{ "Becky", 1 },
	    { "Fred", 4 },
	    { "Alfred", 6 },
	    { "Waldo", 2 },
	    { "Sue", 5 },
	    { "Mary", 3 }  };
	int largest;


	// Find the largest and smallest values
	largest = findLargest(child, SIZE);

	// Display the results
	cout << endl;
	cout << child[largest].name << " is the oldest child at " << child[largest].age << " years old.\n";
	return 0;
}

/*******************************************************
*                  findLargest                        *
* Finds and returns the largest value in the myArray    *
* passed as an argument to the function.              *
*******************************************************/
int findLargest(const Student myArray[], int num)
{
	int largeIndex = 0;
	int largest = myArray[0].age;
	for (int i = 1; i < num; i++)
	{
		if (myArray[i].age > largest)
		{
			largest = myArray[i].age;
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