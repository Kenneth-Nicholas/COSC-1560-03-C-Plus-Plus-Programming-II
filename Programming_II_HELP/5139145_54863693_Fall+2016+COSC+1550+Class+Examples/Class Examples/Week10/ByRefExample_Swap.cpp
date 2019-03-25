// Pass by Reference Example
// COSC 1550

#include <iostream>
using namespace std;

//bool swap(int, int);  // pass by value
bool swap(int &, int &);  // pass by reference

int main ()
{
	bool res = false;
	int num1 = 11, num2 = 5;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
//	res = swap(num1, num2);
	if(swap(num1, num2))
//	if(res)
		cout << "The variables were swapped!\n";
	else
		cout << "The variables were not swapped!\n";

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	return 0;
}
// bool swap(int a, int b)  // pass by value
 bool swap(int & a, int & b) // pass by reference
 {
	 int result = false;
	 if (a > b)
	 {
		 result = true;
		 int temp = a;
		 a = b;
		 b = temp;
	 }
	 return result;
 }