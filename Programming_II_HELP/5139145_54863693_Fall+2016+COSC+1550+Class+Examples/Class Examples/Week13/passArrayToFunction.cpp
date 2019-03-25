// This program demonstrates an entire array being passed to a function.

#include <iostream>
#include <string>
using namespace std;

void showValues(const int [], int);	// Function prototype
void showValues(const char [], int);	// Function prototype
void showValues(const string);	// Function prototype

int main()
{
	const int ARRAY_SIZE = 8;
   int collection[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
	char name[ARRAY_SIZE] = "Walter";
	string myName = "Samuel";
	showValues(collection, ARRAY_SIZE);
	showValues(collection, ARRAY_SIZE);
	showValues(name, ARRAY_SIZE);
	showValues(myName);
	return 0;
}

//************************************************************
// Definition of function showValues                         *
// This function accepts an array of integers and its size   *
// as arguments. The contents of the array are displayed.    *
//************************************************************

void showValues (const int nums[], int size)
{
	for (int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;

	//for (int index = 0; index < size; index++)
	//	nums[index] = 0;


}

void showValues (const char name[], int size)
{
	cout << name << endl;
	for (int index = 0; index < size; index++)
		cout << name[index] << " ";
	cout << endl;

	cout << endl;
}

void showValues (const string name)
{
	cout << name << endl;
	for (int index = 0; index < name.size(); index++)
		cout << name[index] << " ";
	cout << endl;

	cout << endl;
}
 
 