// This program uses two functions that accept addresses of
// variables as arguments.
#include <iostream>
using namespace std;

// Function prototypes
void getNumber(int *);
void doubleValue(int *);

int main()
{ 
	int number;
	int * ptr = &number;
	cout << &number << endl;
//	getNumber(&number);	  // Pass address of number to getNumber
//	doubleValue(&number); // and doubleValue.
	getNumber(ptr);	  // Pass address of number to getNumber
	doubleValue(ptr); // and doubleValue.
	//cout << "That value doubled is " << *number << endl;
	cout << "That value doubled is " << number << endl;
	cout << "That value doubled is " << *ptr << endl;
	return 0;
}

//****************************************************************
// Definition of getNumber. The parameter, input, is a pointer.  *
// This function asks the user for a number. The value entered   *
// is stored in the variable pointed to by input.                *
//****************************************************************

void getNumber(int *input)
{
	cout << input << endl;
	cout << "Enter an integer number: ";
	cin >> *input;
}


//***************************************************************
// Definition of doubleValue. The parameter, val, is a pointer. *
// This function multiplies the variable pointed to by val by   *
// two.                                                         *
//***************************************************************

void doubleValue(int *val)
{
	cout << val << endl;
	*val *= 2;
}
