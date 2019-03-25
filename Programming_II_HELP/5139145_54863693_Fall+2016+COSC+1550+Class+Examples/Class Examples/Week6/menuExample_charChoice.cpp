// Paul Biolchini
// COSC 1550
// Class 6 Example
// Simple menu statement


#include <iostream>

using namespace std;

int main()
{

	char choice;
	int b;
	int length = 9, width = 7;
	cout << "Length = " << length << " Width = " << width << endl<< endl;

	cout << "a. Enter an \'a\' to calculate area\n";
	cout << "b. Enter a  \'b\' to calculate circumference\n";
	cout << "c. Enter a  \'c\' to do nothing\n";
	cout << "q. Enter a  \'q\' to quit\n";

	cin >> choice;
	if (choice == 'a' || choice == 'A')
	{
		int length, width;
		cout << "You entered an \'a\'\n";
		cout << "Enter the length and width: ";
		cin >> length >> width;
	    cout << "You entered: Length = " << length << " Width = " << width << endl;
		cout << "The area is " << length * width << endl;
	}
	else if (choice == 'b')
	{
		int length, width;
		cout << "You entered a \'b\'\n";
		cout << "Enter the length and width: ";
		cin >> length >> width;
		cout << "You entered: Length = " << length << " Width = " << width << endl;
		cout << "The circumference is " << 2 * length + 2 * width << endl;
	}
	else if (choice == 'c')
	{
		cout << "You entered a \'c\'\n";
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