// This program demonstrates the searchList function, which
// performs a linear search on an integer array.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function prototype
bool searchList(const string [], int, string);
string makeUpper(string);


int main()
{
	const int SIZE = 5;
	string names[SIZE] = {"Sue","Paul","Walter", "Jane","Hooper"};
	bool results;
	string findName;
	cout << "Enter the name to search for: ";
	cin >> findName;

	results = searchList(names, SIZE, findName);
	if (results)
	{
		cout << findName << " was found in the array.\n";
	}
	else
	{
		cout << "Did not find " << findName << " in the array.\n";
	}
	return 0;
}


//****************************************************************
//                           searchList                          *
// This function performs a linear search on an string array.   *
// The list array, which has numElems elements, is searched for  *
// the number stored in value. If the number is found, its array *
// subscript is returned. Otherwise, -1 is returned.             *
//****************************************************************

bool searchList(const string list[], int numElems, string value)
{
	bool found = false;          // Flag to indicate if the value was found 
	string uValue = makeUpper(value);
	for(int i = 0; i < numElems; i++)
	{
		string s = makeUpper(list[i]);
//		if (list[i] == value) // If the value is found
		if (s == uValue) // If the value is found
		{
			found = true;          // Set the flag 
			break;      
		}
	}
	return found;             
}

string makeUpper(string name)
{
	string s = "";
	for(unsigned int i = 0; i < name.size(); i++)
	{
		s+= toupper(name[i]);
	}
	return s;
}