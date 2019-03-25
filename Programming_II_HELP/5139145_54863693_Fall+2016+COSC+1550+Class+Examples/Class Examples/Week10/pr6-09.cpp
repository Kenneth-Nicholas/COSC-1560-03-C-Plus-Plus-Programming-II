// This program demonstrates that changes to a function parameter
// have no effect on the original argument.

#include <iostream>
using namespace std;

// Function prototype
void changeThem(int, double);

int main()
{
	int whole = 12;
	double real = 3.5;

	cout << "In main the value of whole is " << whole << endl;
	cout << "and the value of real is " << real << endl << endl;
	
   changeThem(whole, real);	// Call changeThem with 2 arguments
	
   cout << "Now back in main again, the value of ";
	cout << "whole is still " << whole << endl; 
	cout << "and the value of real is still " << real << endl;
	return 0;
}

//**************************************************************
// Definition of function changeThem                           *
// It uses i, an int parameter, and d, a double. The values of *
// i and d are changed and then displayed.                     *
//**************************************************************
void changeThem(int i, double d)
{
	i = 100;
	d = 27.5;	
	cout << "In changeThem the value of i is changed to ";
	cout << i << endl;
	cout << "and the value of d is changed to " << d << endl << endl;
}
