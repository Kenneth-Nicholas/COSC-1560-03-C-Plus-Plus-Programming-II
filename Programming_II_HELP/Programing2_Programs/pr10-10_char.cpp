// This program uses a pointer to display the contents
// of a char array. It illustrates the comparison of
// pointers.
#include <iostream>
using namespace std;

int main()
{
	char set[] = "Hello Cruel Cruel World!";
	char *nums = set; // Make nums point to set

	cout << "The characters in \'set\' are:\n";
	cout << *nums; // Display first element
	while (*nums != '\0')
	{
		nums++;
		cout << *nums ;
	}
	cout << "\nThe characters in \'set\' backwards are:\n";
	cout << *nums; // Display last element
	while (nums > set)
	{
		nums--;
		cout << *nums ;
	}
	cout << endl;
	return 0;

}
