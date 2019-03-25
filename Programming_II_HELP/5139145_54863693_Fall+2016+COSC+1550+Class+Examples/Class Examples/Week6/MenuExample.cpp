// Paul Biolchini
// COSC 1550
// Class 6 Example
// Simple menu statement
// variable scope demonstration


#include <iostream>

using namespace std;

int main()
{

	int a;
	int length = 9, width = 7;
	cout << "Length = " << length << " Width = " << width << endl<< endl;

	cout << "1. Enter a 1 to calculate area\n";
	cout << "2. Enter a 2 to calculate circumference\n";
	cout << "3. Enter a 3 to do nothing\n";
	cout << "4. Enter a 4 to quit\n";

	cin >> a;
	if (a == 1)
	{
		int length, width;
		cout << "You entered a 1\n";
		cout << "Enter the length and width: ";
		cin >> length >> width;
	    cout << "You entered: Length = " << length << " Width = " << width << endl;
		cout << "The area is " << length * width << endl;
	}
	else if (a == 2)
	{
		int length, width;
		cout << "You entered a 2\n";
		cout << "Enter the length and width: ";
		cin >> length >> width;
		cout << "You entered: Length = " << length << " Width = " << width << endl;
		cout << "The circumference is " << 2 * length + 2 * width << endl;
	}
	else if (a == 3)
	{
		int length = 42, width = 1;
		cout << "You entered a 3\n";
		cout << "Length = " << length << " Width = " << width << endl;
	}
	else
	{
		cout << "You Quit!\n";
		cout << "Length = " << length << " Width = " << width << endl;
	}
	cout << endl;
	cout << "Length = " << length << " Width = " << width << endl;
	return 0;
}