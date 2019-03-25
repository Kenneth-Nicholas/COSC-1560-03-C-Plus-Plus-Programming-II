// COSC 1550
// First Function Program

#include <iostream>


using namespace std;

// function prototype
int getNumber();

int main()
{
	int var1, var2, var3, var4, var5;
	var1 = getNumber();
	cout << "You entered " << var1 << endl;
	var2 = getNumber();
	cout << "You entered " << var2 << endl;
	var3 = getNumber();
	cout << "You entered " << var3 << endl;
	var4 = getNumber();
	cout << "You entered " << var4 << endl;
	var5 = getNumber();
	cout << "You entered " << var5 << endl;

	return 0;
}
int getNumber()
{
	int num;
	cout << "Please enter a number greater than 0: ";
	cin >> num;
	while (num <= 0)
	{
		cout << "That number is less than or equal to 0.\n";
		cout << "Please enter a number greater than 0: ";
		cin >> num;
	}
	return num;
}