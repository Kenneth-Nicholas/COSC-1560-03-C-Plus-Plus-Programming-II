// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.

#include <iostream>
using namespace std;

int main()
{
	int bigVal = 10, smallVal = 1;

	cout << "BigVal starts as " << bigVal;
	cout << " and SmallVal starts as " << smallVal << endl;
	cout << "BigVal--: " << bigVal-- << endl;
	cout << "SmallVal++: " << smallVal++ << endl;
	cout << "Now BigVal is: " << bigVal << endl;
	cout << "Now SmallVal is: " << smallVal << endl;
	cout << "--BigVal: " << --bigVal << endl;
	cout << "++SmallVal: " << ++smallVal << endl;
	return 0;
}
