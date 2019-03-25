// pointer example

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x = 3;
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

	int * myPtr = ptr;
	cout << "The value of ptr is: " << ptr << endl;
	cout << "ptr is stored at: " << &ptr << endl;
	cout << "The value ptr points to is: " << *ptr << endl;
	cout << "The value of myPtr is: " << myPtr << endl;
	cout << "myPtr is stored at: " << &myPtr << endl;
	cout << "The value myPtr points to is: " << *myPtr << endl;


	return 0;
}