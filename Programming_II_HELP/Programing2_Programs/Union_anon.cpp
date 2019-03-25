// Anonymous Union example

#include <iostream>
#include <string>
using namespace std;


int main ()
{
	//int one;
	//float two;

	union 
	{
		int one;
		float two;
	};

	cout << "Enter an integer. ";
	cin >> one;
	cout << endl << one << endl;
	cout << endl << two << endl;
	cout << "Enter a floating point number: ";
	cin >> two;
	cout << endl << two << endl;
	cout << endl << one << endl;
	return 0;
}
