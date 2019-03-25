// This program demonstrates the range-based for loop.
#include <iostream>
using namespace std;

int main()
{
	// Define an array of integers.
	int numbers[5]= {0};
	int total = 0;
	// Enter the values in the array.
	for (int &val : numbers)
	{
		cout << "Enter a Value: ";
		cin >> val;
	}
	// Display the values in the array.
	for (int val : numbers)
	{
		cout << val << endl;
		total += val;
	}
	cout << "Total: " << total << endl;
	return 0;
}