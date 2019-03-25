// This program uses a pointer to display the contents
// of a string. It illustrates the comparison of
// pointers.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string set = "Hello World!";
	cout << sizeof(set) << "    " << &set << "    " << sizeof(&set) << endl;
	char *nums = &set[0]; // Make nums point to \'set\'
	cout << sizeof(nums) << "    " << &nums << "    " << sizeof(&nums) << endl;
//	char *nums = set; // Make nums point to \'set\'

	cout << "The characters in \'set\' are:\n";
	cout << *nums; // Display first element
	while (*nums != '\0')
	{
		nums++;
		cout << *nums ;
	}
	cout << "\nThe characters in \'set\' backwards are:\n";
	cout << *nums; // Display last element
	while (nums > &set[0])
	{
		nums--;
		cout << *nums ;
	}
	cout << endl;
	return 0;

}
