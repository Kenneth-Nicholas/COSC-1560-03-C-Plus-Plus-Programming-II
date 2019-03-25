// This program uses a pointer to display the contents
// of an integer array. It illustrates the comparison of
// pointers.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char * set = new char[15];
	strcpy(set, "Hello World!");
	char *nums = set; // Make nums point to set

	cout << "The characters in set are:\n";
	cout << *nums; // Display first element
	while (*nums != '\0')  // while(*nums) // while(*nums != 0) 
	{
		nums++;
		cout << *nums ;
	}
	cout << "\nThe characters in set backwards are:\n";
	cout << *nums; // Display last element
	while (nums > set)
	{
		nums--;
		cout << *nums ;
	}
	nums +=4;
	cout << endl;
    delete [] set;
//	delete [] nums;
	return 0;

}
