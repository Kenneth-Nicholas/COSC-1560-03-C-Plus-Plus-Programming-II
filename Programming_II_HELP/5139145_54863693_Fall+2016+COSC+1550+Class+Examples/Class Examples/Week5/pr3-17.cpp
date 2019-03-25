//	This program demonstrates the setw manipulator
// being used with variables of various data types. 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int intValue = 3928;
	double doubleValue = 91.5;
	string stringObjectValue = "Jill Q. Jones";

	cout << "(" << setw(5) << intValue << ")" << endl;
	cout << "(" << setw(8) << doubleValue << ")" << endl;
	cout << "(" << setw(16) << stringObjectValue << ")" << endl;
	return 0;
}
