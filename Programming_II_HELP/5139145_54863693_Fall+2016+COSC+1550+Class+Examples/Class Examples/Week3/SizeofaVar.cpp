// Paul Biolchini
// COSC 1550.07
// Week 3 
// Example 3.1
// This program determines the number of bytews a variable is stored in.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number = 12345;
	float real = 3.24259f;
	double bigReal = 6.023e-23;
	char letter = 'A';
	char name[10] = "Paul";
	char myName[] = "Paul";
	string Me = "Paul Biolchini";


	cout << "The size of an int is " << sizeof(int) << " bytes.\n";
	cout << "The size of a short is " << sizeof(short) << " bytes.\n";
	cout << "The size of a long is " << sizeof(long) << " bytes.\n\n";

	cout << "The size of a float is " << sizeof(float) << " bytes.\n";
	cout << "The size of a double is " << sizeof(double) << " bytes.\n";
	cout << "The size of a long double is " << sizeof(long double) << " bytes.\n\n";

	cout << "The size of a char is " << sizeof(char) << " bytes.\n\n";

	cout << "The size of \"number\" is " << sizeof(number) << " bytes.\n";
	cout << "The size of \"real\" is " << sizeof(real) << " bytes.\n";
	cout << "The size of \"bigReal\" is " << sizeof(bigReal) << " bytes.\n";
	cout << "The size of \"letter\" is " << sizeof(letter) << " bytes.\n";
	cout << "The size of \"name\" is " << sizeof(name) << " bytes.\n";
	cout << "The size of \"myName\" is " << sizeof(myName) << " bytes.\n";
	cout << "The size of \"Me\" is " << sizeof(Me) << " bytes.\n";

	return 0;
}
/*
The size of an int is 4 bytes.
The size of a short is 2 bytes.
The size of a long is 4 bytes.

The size of a float is 4 bytes.
The size of a double is 8 bytes.
The size of a long double is 8 bytes.

The size of a char is 1 bytes.

The size of "number" is 4 bytes.
The size of "real" is 4 bytes.
The size of "bigReal" is 8 bytes.
The size of "letter" is 1 bytes.
The size of "name" is 10 bytes.
The size of "myName" is 5 bytes.
The size of "Me" is 28 bytes.
Press any key to continue . . .
*/