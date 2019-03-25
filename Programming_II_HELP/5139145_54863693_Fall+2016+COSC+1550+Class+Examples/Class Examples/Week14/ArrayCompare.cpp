// This program illustrates how to correctly compare two arrays.
#include <iostream>
using namespace std;

bool compareArrays(const int [], const int [], int);
int main()
{
	const int SIZE = 5;
   int arrayA[SIZE] = { 5, 10, 15, 20, 25 };
   int arrayB[SIZE] = { 5, 10, 15, 20, 25 };
   bool arraysEqual;  // Flag variable
   arraysEqual = compareArrays(arrayA, arrayB, SIZE);

   // Display the appropriate message
   if (arraysEqual)
      cout << "The arrays are equal.\n";
   else
      cout << "The arrays are not equal.\n";
		
	return 0;
}

bool compareArrays(const int arrA[], const int arrB[], int size)
{
   bool equal = true;  // Flag variable
   int count = 0;            // Loop counter variable
   // Determine whether the elements contain the same data
   while (equal && count < size)
   {
      if (arrA[count] != arrB[count])
         equal = false;
      count++;
   }
	return equal;
}