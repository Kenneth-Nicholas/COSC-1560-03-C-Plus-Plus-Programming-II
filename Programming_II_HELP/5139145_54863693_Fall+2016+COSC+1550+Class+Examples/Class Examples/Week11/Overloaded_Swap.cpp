// Pass by Reference Example
// COSC 1550

#include <iostream>
using namespace std;

//Overloaded Functions
bool Swap(int &, int &);  // pass by reference
//bool Swap(int, int);  // pass by Value
//void Swap(int &, int &);  // pass by reference

bool Swap(double &, double &);  // pass by reference

int main ()
{
	bool res = false;
	int num1 = 10, num2 = 5;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
	res = Swap(num1, num2);

	if(res)
		cout << "The variables were Swapped!\n";
	else
		cout << "The variables were not Swapped!\n";

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	double numA = 12.2, numB = 3.5;

	cout << "numA = " << numA << " and numB = " << numB << endl;
	res = Swap(numA, numB);

	if(res)
		cout << "The variables were Swapped!\n";
	else
		cout << "The variables were not Swapped!\n";

	cout << "numA = " << numA << " and numB = " << numB << endl;
	return 0;
}
// bool Swap(int a, int b)  // pass by value
 bool Swap(int & a, int & b) // pass by reference
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
 ////bool Swap(int a, int b)  // pass by value
 ////{
	//// bool result = false;
	//// if (a > b)
	//// {
	////	 result = true;
	////	 int temp = a;
	////	 a = b;
	////	 b = temp;
	//// }
	//// return result;
 ////}
 //void Swap(int & a, int & b) // pass by reference
 //{
	// if (a > b)
	// {
	//	 int temp = a;
	//	 a = b;
	//	 b = temp;
	// }
 //}
 // bool Swap(double a, double b)  // pass by value
 bool Swap(double & a, double & b) // pass by reference
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