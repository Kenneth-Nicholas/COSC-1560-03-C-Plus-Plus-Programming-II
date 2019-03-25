// This program illustrates two appropriate uses of passing arguments
// by reference. 

#include <iostream>
using namespace std;

// Function prototypes
void getNums (float&, float&); 

void getNums (int&, int&);  // Uses reference parameters to input new values
                            // in the function but to actually store them in 
									 // variables defined in main.
void orderNums(float&, float&);
void orderNums(int&, int&); // Uses reference parameters to change the
                            // values of existing values stored in main.

int main()
{
	float sm, bg;
	int small, big;

	getNums(small, big);     // Call getNums to input the two numbers.
	orderNums(small, big);   // Call orderNums to put the numbers in order.

	cout << "The two input numbers in order from smallest to biggest are "
		  << small << " and " << big << endl;

	getNums(sm, bg);     // Call getNums to input the two numbers.
	orderNums(sm, bg);   // Call orderNums to put the numbers in order.

	cout << "The two input numbers in order from smallest to biggest are "
		  << sm << " and " << bg << endl;


	return 0;
}

//*************************************************************
// Definition of getNums                                      *
// The arguments passed into input1 and input2 are passed by  *
// reference so that the values entered in these two          *
// parameters will actually be stored in the memory space of  *
// main's small and big variables.                            *
//*************************************************************
void getNums(int &input1, int &input2)
{
	cout << "Enter an integer: ";
	cin  >> input1;
	cout << "Enter a second integer: ";
	cin  >> input2;
}

void getNums(float &input1, float &input2)
{
	cout << "Enter an float: ";
	cin  >> input1;
	cout << "Enter a second float: ";
	cin  >> input2;
}

//************************************************************
// Definition of orderNums                                   *
// The arguments passed into num1 and num2 are passed by     *
// reference so that if they are out of order main's         *
// variables small and big can be swapped.  Just swapping    *
// num1 and num2 in orderNum's local memory would not        *
// accomplish the desired result.                            *
//************************************************************
void orderNums (int &num1, int &num2)
{
	int temp;

	if (num1 > num2)  // If the two numbers are out of order, swap them.
	{	temp = num1;
		num1 = num2;
		num2 = temp;
	}
}
void orderNums (float &num1, float &num2)
{
	float temp;

	if (num1 > num2)  // If the two numbers are out of order, swap them.
	{	temp = num1;
		num1 = num2;
		num2 = temp;
	}
}

