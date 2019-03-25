// This program uses a pointer to display the contents
// of an integer array. It illustrates the comparison of
// pointers.
#include <iostream>
using namespace std;

int main()
{
	char set[] = "Hello World!";
	char *nums = set; // Make nums point to set

	cout << "The numbers in set are:\n";
	cout << *nums; // Display first element
//	while (*nums != '\0')
//	while (*nums != 0)
	while (*nums)
	{
		nums++;
		cout << *nums ;
	}
	cout << "\nThe numbers in set backwards are:\n";
	cout << *nums; // Display last element
	while (nums > set)
	{
		nums--;
		cout << *nums ;
	}
	cout << endl;
	return 0;

}
