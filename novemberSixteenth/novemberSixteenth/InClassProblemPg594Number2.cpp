#include <iostream>
#include <cstring>

using namespace std;

void reverse(char*); //pointer to a character

int main()
{
	char data[25]; // max size string user can enter - 24 characters + null

	cout << "Please enter a word: ";
	cin >> data;

	reverse(data); // an array of characters is actually a pointer to the first character in the array
	
	return 0;
}

void reverse(char* data)
{
	char* cPtr = nullptr; // pointer for location of dynamically allocated

	int len;

	len = strlen(data); // get length of string

	cPtr = new char[len + 1]; // dynamically allocate a character array based on how long the string is that's inputted, plus 1 because need null character

	for (int i = (len -1), j = 0; i >= 0; i--, j++) // making "Gravity" into "ytivarG" - 7 character string, but uses subscripts 0 - 6, subscript of 7 is where null goes.
	{
		cPtr[j] = data[i];
	}

	cPtr[len] = NULL; // adds null character on the end of the c-string so that it will function properly, the 8th element, 7 subscript 

	cout << "Here is your string in reverse: " << cPtr << endl;

	delete[] cPtr;
	cPtr = nullptr;
}