// This program uses a pointer to display the contents
// of an integer array. It illustrates the comparison of
// pointers.
#include <iostream>
using namespace std;

int main()
{
	int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};
	int *nums = set; // Make nums point to set

	cout << "The numbers in set are:\n";
	cout << *nums << " "; // Display first element
//	while (nums < &set[7])
	while (nums < set+7)
	{
		nums++;
		cout << *nums << " ";
	}
	cout << endl;
	//for(int i = 0; i < 8; i++)
	//	cout << *(nums+i) << "   " << nums[i] << endl;
	//cout << endl;
	//for(int i = 0; i < 8; i++)
	//	cout << *(set+i) << "   " << set[i] << endl;
	//	for(int i = 0; i < 8; i++)
	//	    *(nums+i) = set[i];
	//cout << endl;
	//for(int i = 0; i < 8; i++)  // Don't do this!!!!!
	//	cout << *(nums+i) << "   " << nums[i] << endl;

	cout << "\nThe numbers in set backwards are:\n";
	cout << *nums << " "; // Display last element
	while (nums > set)
	{
		nums--;
		cout << *nums << " ";
	}
	cout << endl;
	return 0;

}
