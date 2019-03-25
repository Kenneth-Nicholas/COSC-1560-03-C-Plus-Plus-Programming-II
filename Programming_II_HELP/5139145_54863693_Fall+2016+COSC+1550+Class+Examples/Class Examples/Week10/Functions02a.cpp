// COSC 1550
// Class Example
// Functions - Chapter 6

#include <iostream>

using namespace std;

int DataIn()
{
	int n;
	cout << "Enter a number greater than 0: ";
	cin >> n;
	while (n < 0)
	{
		cout << "Enter a number greater than 0: ";
		cin >> n;
	}
	return n;
}

void Display(int n)
{
	cout << "Hello from function \'Display\'\n";
	cout << "You sent a " << n << " to the function \'Display\'\n";
}

int main()
{
	int num;
	num = DataIn();
	Display(num);
	return 0;
}

