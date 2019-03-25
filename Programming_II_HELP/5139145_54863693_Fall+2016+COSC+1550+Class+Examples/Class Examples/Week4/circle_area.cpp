// Paul Biolchini
// COSC 1550.07
// Week 4 example
// calculate the area of a circle

#include <iostream>
#include <cmath>

//#define PI 3.14159

using namespace std;

int main()
{
	// Define and initialize variables
	const double PI = 3.14159;
	double radius;
	double power = 2.00;
	double area;

	// enter the number and the power
	cout << "Please enter the radius of the circle: ";
	cin >> radius;

	// Calculate the raised number
	area = PI * pow(radius,power);


	// Display Results
	cout << "The area of a circle with radius " << radius << " is: " << area << endl;

	return 0;
}


/*
Please enter the radius of the circle: 10
The area of a circle with radius 10 is: 314.159
Press any key to continue . . .
*/

