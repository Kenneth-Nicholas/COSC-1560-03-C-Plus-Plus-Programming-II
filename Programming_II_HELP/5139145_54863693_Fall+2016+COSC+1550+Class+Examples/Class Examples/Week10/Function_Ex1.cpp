// COSC 1550
// Functions Example 1

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


int main()
{
	int num1, num2, num3,num4, num5;
	num1 = DataIn();
	cout << "You entered a " << num1 << " in the function.\n";
	num2 = DataIn();
	cout << "You entered a " << num2 << " in the function.\n";
	num3 = DataIn();
	cout << "You entered a " << num3  << " in the function.\n";
	num4 = DataIn();
	cout << "You entered a " << num4 << " in the function.\n";
	num5 = DataIn();
	cout << "You entered a " << num5 << " in the function.\n";

	cout << "You entered: \n"
		<< "num1: " << num1 << endl
		<< "num2: " << num2 << endl
		<< "num3: " << num3 << endl
		<< "num4: " << num4 << endl
		<< "num5: " << num5 << endl << endl;

	return 0;
}