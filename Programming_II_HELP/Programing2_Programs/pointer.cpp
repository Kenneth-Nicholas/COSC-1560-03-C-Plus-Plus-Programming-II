// Pointer example

#include <iostream>
using namespace std;

int main()
{
	int x[3] = {5,10,15};
	int * ptr = NULL;
//	ptr = x;
	ptr = &x[0];

	cout << "x[0] = " << x[0] << endl;
	cout << "x[1] = " << x[1] << endl;
	cout << "x[2] = " << x[2] << endl;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;
	
	cout << "Change *ptr to 10" << endl;
	*ptr = 10;
	
	cout << "x[0] = " << x[0] << endl;
	cout << "x[1] = " << x[1] << endl;
	cout << "x[2] = " << x[2] << endl;
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;
	*x = 5;
	cout << "*x = " << *x << endl;
	cout << "*(x+1) = " << *(x+1) << endl;
	cout << "*(x+2) = " << *(x+2) << endl;

	cout << "*x+1 = " << *x+1 << endl;
	cout << "*(x+3) = " << *(x+3) << endl;
	cout << "*(x+4) = " << *(x+4) << endl;
	*(x+40000) = 22;
	cout << endl;
	return 0;
}