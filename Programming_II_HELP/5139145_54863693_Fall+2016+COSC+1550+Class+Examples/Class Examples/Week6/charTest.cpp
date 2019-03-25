// COSC 1550
// Chapter 4
// Test a entered char value

#include <iostream>

using namespace std;

int main()
{
	char letter1;
	
	cout << "Please enter an A, B, or C: ";
	cin >> letter1;

	if (letter1 == 'a' || letter1 == 'A')
	{
		cout << "You entered an " << letter1 << endl;
	}
	else if (letter1 == 'b' || letter1 == 'B')
	{
		cout << "You entered an " << letter1 << endl;
	}
	else if (letter1 == 'c' || letter1 == 'C')
	{
		cout << "You entered an " << letter1 << endl;
	}
	else
	{
		cout << "You really should have entered an A, B, or C: \n";
	}
	return 0;
}