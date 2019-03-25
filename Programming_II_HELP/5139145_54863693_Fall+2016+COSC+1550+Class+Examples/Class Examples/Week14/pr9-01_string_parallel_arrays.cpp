// This program demonstrates the searchList function, which
// performs a linear search on an integer array.

#include <iostream>
#include <string>
using namespace std;

// Function prototype
int searchList(string [], int, string);
int searchList(double [], int, double);

int main()
{
	const int SIZE = 5;
	string names[SIZE] = {"Dave", "Sue", "Waldo", "Fred", "Mona"};
	double gpa[SIZE] = {3.54, 4.0, 2.78, 3.33, 1.45};
	int results;
	string name;
	cout << "Enter the a name to search for: ";
	cin >> name;

	results = searchList(names, SIZE, name);
	if (results == -1)
		cout << name << " is not on the grade list.\n";
	else
	{
		cout <<  name << " earned a GPA  of " << gpa[results] << ".\n";
	}

	double num;
	cout << "Enter the a GPA to search for: ";
	cin >> num;

	results = searchList(gpa, SIZE, num);
	if (results == -1)
		cout << num << " is not a valid GPA.\n";
	else
	{
		cout <<  names[results] << " earned a GPA  of " << num << ".\n";
	}


	return 0;
}


//****************************************************************
//                           searchList                          *
// This function performs a linear search on an string array.    *
// The list array, which has numElems elements, is searched for  *
// the number stored in value. If the number is found, its array *
// subscript is returned. Otherwise, -1 is returned.             *
//****************************************************************

int searchList(string list[], int numElems, string value)
{
	int index = 0;               // Used as a subscript to search array 
	int position = -1;           // Used to record position of search value 
	bool found = false;          // Flag to indicate if the value was found 

	while (index < numElems && !found)
	{
		if (list[index] == value) // If the value is found
		{
			found = true;          // Set the flag 
			position = index;      // Record the value's subscript 
		}
		index++;                  // Go to the next element 
	}
	return position;             // Return the position, or -1 
}

//****************************************************************
//                           searchList                          *
// This function performs a linear search on an integer array.   *
// The list array, which has numElems elements, is searched for  *
// the number stored in value. If the number is found, its array *
// subscript is returned. Otherwise, -1 is returned.             *
//****************************************************************

int searchList(double list[], int numElems, double value)
{
	int index = 0;               // Used as a subscript to search array 
	int position = -1;           // Used to record position of search value 
	bool found = false;          // Flag to indicate if the value was found 

	while (index < numElems && !found)
	{
		if (list[index] == value) // If the value is found
		{
			found = true;          // Set the flag 
			position = index;      // Record the value's subscript 
		}
		index++;                  // Go to the next element 
	}
	return position;             // Return the position, or -1 
}