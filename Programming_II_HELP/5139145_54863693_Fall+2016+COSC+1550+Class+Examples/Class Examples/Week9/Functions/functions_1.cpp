// Paul Biolchini
// COSC 1550.07
// Functions Example 1

#include <iostream>

using namespace std;

// function prototype
int display();
double displayMore();
int displaySomeMore(double);
void showIt();

//double gbVariable = 12.5555;////EVIL  Don't use global variables!!!!
int main()
{
	cout << "I am in main.\n";
	int num;
	double num1;
	num = display();
	cout << "I am back in main.\n";
	cout << "I received a: " << num << " from display()\n";
	cout << "I received a: " << display() << " from display()\n";

	num1 = displayMore();
	cout << "I am back in main.\n";
	cout << "I received a: " << num1 << " from displayMore()\n";
	cout << "I received a: " << displayMore() << " from displayMore()\n";
//	cout << "The global variable\'s value is: " << gbVariable << endl;
	//displaySomeMore();
	//displayMore();
	//display();

	cout << "I am back in main.\n";
	showIt();
	return 0;
}

int display()
{
//	cout << "The global variable\'s value is: " << gbVariable << endl;
	int number = 2;
	cout << "I am in display.\n";
	cout << "I am returning a: " << number << endl;
	return number;
}

double displayMore()
{
//	cout << "The global variable\'s value is: " << gbVariable << endl;
	double myNumber;
	cout << "I am in displayMore.\n";
	cout << "Enter a floating point number: ";
	cin >> myNumber;
	int newNumber = displaySomeMore(myNumber);
	cout << "I am returning a: " << newNumber << endl;
	return newNumber;
}

int displaySomeMore(double dblNumber)
{
//  cout << "The global variable\'s value is: " << gbVariable << endl;
	cout << "I am in displaySomeMore.\n";
	cout << "I received a: " << dblNumber << " from displayMore()\n";
	int number = static_cast<int> (dblNumber);
	cout << "I am returning a: " << number << endl;
	return number;
}

void showIt()
{
//	cout << "Bye now!\n";
}