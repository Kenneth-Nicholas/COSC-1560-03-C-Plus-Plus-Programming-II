// pointer example

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x = 3;
	int y = 10;
	int * ptr;
	ptr = &x;
	cout << "The value of x is: " << x << endl;
	cout << "x is stored at: " << &x << endl;

	cout << "The value of ptr is: " << ptr << endl;
	cout << "ptr is stored at: " << &ptr << endl;
	cout << "The value ptr points to is: " << *ptr << endl;
	*ptr = 7;
	cout << "The value of x is: " << x << endl;
	cout << "x is stored at: " << &x << endl;

	cout << "The value of ptr is: " << ptr << endl;
	cout << "ptr is stored at: " << &ptr << endl;
	cout << "The value ptr points to is: " << *ptr << endl;

	ptr = &y;
	cout << "The value of x is: " << x << endl;
	cout << "x is stored at: " << &x << endl;
	cout << "The value of y is: " << y << endl;
	cout << "y is stored at: " << &y << endl;

	cout << "The value of ptr is: " << ptr << endl;
	cout << "ptr is stored at: " << &ptr << endl;
	cout << "The value ptr points to is: " << *ptr << endl;

	return 0;
}