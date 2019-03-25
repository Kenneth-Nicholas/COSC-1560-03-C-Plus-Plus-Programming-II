#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 8;
	int set[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int* numPtr = nullptr;
	int count;

	numPtr = set;
	cout << "The numbers in the set are:" << endl;
	for (count = 0; count < SIZE; count++)					// at the end of this loop, numPtr is a 4 bytes beyond the last element of the array
	{														// no bounds checking in c++
		cout << *numPtr << " ";
		numPtr++;
	}

	cout << endl << "The numbers in the set backwards are:" << endl;  
	for (count = 0; count < SIZE; count++)					// numPtr decrements first instead of after cout, first outputs 40, then 35, then 30, etc.
	{														// we never go past the beginning of the array in this case
		numPtr--;
		cout << *numPtr << " ";
	}
	cout << endl;


	return 0;
}