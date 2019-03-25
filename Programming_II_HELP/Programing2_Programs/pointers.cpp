// first pointers

#include <iostream>
using namespace std;

int main()
{
	float x[3]= {10,15,20};
	float * y;
//	y = &x[0];
	y = x;

	cout << "The value stored in x[0] is " << x[0] << endl;
	cout << "The value stored in x[1] is " << x[1] << endl;
	cout << "The value stored in x[2] is " << x[2] << endl;
	cout << "x[0] is located at " << &x[0] << endl;
	cout << "x[1] is located at " << &x[1] << endl;
	cout << "x[2] is located at " << &x[2] << endl;
	system("PAUSE");
	cout << endl;
	cout << "The value stored in y is " << y << endl;
	cout << "y is located at " << &y << endl;
	cout << "The value stored at location y is " << *y << endl;
	system("PAUSE");
	cout << endl;
	cout << endl;
	*y = 12;
	cout << "The value stored in x[0] is " << x[0] << endl;
	cout << "The value stored in x[1] is " << x[1] << endl;
	cout << "The value stored in x[2] is " << x[2] << endl;
	cout << "x[0] is located at " << &x[0] << endl;
	cout << "x[1] is located at " << &x[1] << endl;
	cout << "x[2] is located at " << &x[2] << endl;
	system("PAUSE");
	cout << endl;
	cout << "The value stored in y is " << y << endl;
	cout << "y is located at " << &y << endl;
	cout << "The value stored at location y is " << *y << endl;
	system("PAUSE");
    cout << endl;
	cout << "The value stored in x   is " << x << endl;
	cout << "The value stored in x+1 is " << x+1 << endl;
	cout << "The value stored in x+2 is " << x+2 << endl;
	system("PAUSE");
    cout << endl;
	cout << "The value stored in *x     is " << *x << endl;
	cout << "The value stored in *(x+1) is " << *(x+1) << endl;
	cout << "The value stored in *(x+2) is " << *(x+2) << endl;
	system("PAUSE");
    cout << endl;
	cout << "The value stored in y   is " << y << endl;
	cout << "The value stored in y+1 is " << y+1 << endl;
	cout << "The value stored in y+2 is " << y+2 << endl;
	system("PAUSE");
    cout << endl;
	cout << "The value stored in *y     is " << *y << endl;
	cout << "The value stored in *(y+1) is " << *(y+1) << endl;
	cout << "The value stored in *(y+2) is " << *(y+2) << endl;
	system("PAUSE");
    cout << endl;
	cout << "The value stored in y[0] is " << y[0] << endl;
	cout << "The value stored in y[1] is " << y[1] << endl;
	cout << "The value stored in y[2] is " << y[2] << endl;
	cout << "y[0] is located at " << &y[0] << endl;
	cout << "y[1] is located at " << &y[1] << endl;
	cout << "y[2] is located at " << &y[2] << endl;

	return 0;
}
