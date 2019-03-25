// Pass by Reference Example
// COSC 1550

#include <iostream>
using namespace std;

//Overloaded Functions
bool swap(int &, int &);  // pass by reference
bool swap(double &, double &);  // pass by reference

int main ()
{
	bool res = false;
	int num1 = 10, num2 = 5;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	res = swap(num1, num2);

	if(res)
		cout << "The variables were swapped!\n";
	else
		cout << "The variables were not swapped!\n";

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	double numA = 12.2, numB = 3.5;

	cout << "numA = " << numA << " and numB = " << numB << endl;
	res = swap(numA, numB);

	if(res)
		cout << "The variables were swapped!\n";
	else
		cout << "The variables were not swapped!\n";

	cout << "numA = " << numA << " and numB = " << numB << endl;



	return 0;
}
// bool swap(int a, int b)  // pass by value
 bool swap(int & a, int & b) // pass by reference
 {
	 bool result = false;
	 if (a > b)
	 {
		 result = true;
		 int temp = a;
		 a = b;
		 b = temp;
	 }
	 return result;
 }

 // bool swap(double a, double b)  // pass by value
 bool swap(double & a, double & b) // pass by reference
 {
	 bool result = false;
	 if (a > b)
	 {
		 result = true;
		 double temp = a;
		 a = b;
		 b = temp;
	 }
	 return result;
 }