// Paul Biolchini
// COSC 1550
// Class 6 Example
// Simple if statements


#include <iostream>

using namespace std;

int main()
{
	//int a = 7;
	//int b = 9;
	int a, b;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	//if (a > b)
	//{
	//	cout << "The first number is bigger than the second!\n";
	//}
	//else if (a < b)
	//{
	//	cout << "The second number is bigger than the first!\n";
	//}
	//else
	//	cout << "The two numbers are equal\n";



	//if (a >= b)
	//{
	//	cout << "The first number is bigger than or equal to the second!\n";
	//}
	//else
	//{
	//	cout << "The second number is bigger than the first!\n";
	//}

	if (a > b)
	{
		cout << "The first number is bigger than the second!\n";
	}
	else
	{
		if(a == b)
			cout << "The two numbers are equal\n";
		else
			cout << "The second number is bigger than the first!\n";
	}

	return 0;
}