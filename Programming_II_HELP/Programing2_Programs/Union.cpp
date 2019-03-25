// Union example

#include <iostream>
#include <string>
using namespace std;

union Numbers
{
	int one;
	double two;
//	float two;
};

int main ()
{
   Numbers nums;
   cout << "The size of Numbers is : " << sizeof(Numbers) << endl;
	cout << "Enter an integer. ";
	cin >> nums.one;
	cout << endl << nums.one << endl;
	cout << endl << nums.two << endl;
	cout << "Enter a floating point number: ";
	cin >> nums.two;
	cout << endl << nums.two << endl;
	cout << endl << nums.one << endl;
	return 0;
}
