// This program uses a pointer to display the contents
// of an integer array. It illustrates the comparison of
// pointers.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string set = "Hello World!";
	char *nums = &set[0]; // Make nums point to set
//    char *nums = set.data(); // Make nums point to set

	cout << "The characters in set are:\n";
	cout << *nums; // Display first element
//	while (*nums != '\0')
//	while (*nums != 0)
	while (*nums)
	{
		nums++;
		cout << *nums ;
	}
	cout << "\nThe characters in set backwards are:\n";
	cout << *nums; // Display last element
//	while (nums > set)
//	while (nums > set.data())
    while (nums > &set[0])
	{
		nums--;
		cout << *nums ;
	}
	cout << endl;
	return 0;

}
