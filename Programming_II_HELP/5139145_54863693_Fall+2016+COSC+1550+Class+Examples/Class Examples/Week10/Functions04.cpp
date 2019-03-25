// COSC 1550
// Class Example
// Functions - Chapter 6

#include <iostream>

using namespace std;

// function prototypes
int Display(int);
//int Display();  // uses global variable num


int num = 5;  // Global Variable

int main()
{
	cout << "The value of num is " << num << " in \'main\'\n";
	int num = 2, val;
	Display(num);  // Display(2);  // pass by value - one way to function (not back)
//	Display();  
	
	cout << "The value of num is " << num << " in \'main\'\n";
	for(int i = 0; i < 10; i++)
//		val = 	Display();  
		val = Display(num);  // Display(2);
	cout << "The value of num is " << num << " in \'main\'\n";
	cout << "The value of val is " << val << " in \'main\'\n";
	return 0;
}

int Display(int num)
//int Display()
{
	static int result = 1;
	cout << "Hello from function \'Display\'\n";
	cout << "You sent a " << num << " to the function \'Display\'\n";
	//result++;
	cout << "The value of num is " << num << " in function \'Display\'\n";
	cout << "The value of result is " << result++ << " in function \'Display\'\n";
	return result;
}
