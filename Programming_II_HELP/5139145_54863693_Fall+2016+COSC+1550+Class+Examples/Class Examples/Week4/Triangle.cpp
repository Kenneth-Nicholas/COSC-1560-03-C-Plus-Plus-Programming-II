// Example using sqrt and pow
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// variable declaration
	double side1, side2, hyp;
	// input
	cout << "Please enter one side of the right triangle: ";
	cin >> side1;
	cout << "Now enter the other side: ";
	cin >> side2;
	 // calculation
	hyp = sqrt(pow(side1, 2.0) + pow(side2, 2.0));
	// output
	cout << "The hypotenuse of the triangle is: " << hyp << endl;
	return 0;
}