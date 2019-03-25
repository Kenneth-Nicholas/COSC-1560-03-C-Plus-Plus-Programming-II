// Circle class/object example
#include <iostream>
#include <cmath>
using namespace std;
// Circle class declaration

class Circle
{	private:
		double radius;
		const double PI = 3.14159263;
	public:
		Circle();
		Circle(double);
		double getRadius();
		bool setRadius(double);
		double calcArea();
		double calcCircumference();
};
Circle::Circle()   //// default constructor
{
	radius = 1;
}

Circle::Circle(double r)  //// overloaded constructor
{
	radius = r;
}

double Circle::getRadius()  //// accessor method
{
	return radius;
}

bool Circle::setRadius(double r)  //// mutator method
{
	bool result = false;
	if(r > 0)
	{
		radius = r;
		result = true;
	}
	return result;
}

double Circle::calcArea()      // method declaration
{   
	return PI * pow(radius, 2);
}

double Circle::calcCircumference()		// method declaration
{
	return 2 * PI * radius;
}

int main()
{
	Circle circ, circ1(2), circ2;      // Define some Circle objects
	double rad;

	circ2.setRadius(2.5);    // This sets circ2's radius to 2.5

//	cout << circ1.radius << endl;
	cout << "The area of a circle with the default radius " << circ.getRadius() << " is " << circ.calcArea() << endl;
	cout << "The circumference of a circle with the default radius " << circ.getRadius() << " is " << circ.calcCircumference() << endl;
	cout << endl;

	cout << "The area of a circle with radius " << circ1.getRadius() << " is " << circ1.calcArea() << endl;
	cout << "The circumference of a cicle with radius " << circ1.getRadius() << " is " << circ1.calcCircumference() << endl;
	cout << endl;

	cout << "The area of a circle with radius " << circ2.getRadius() << " is " << circ2.calcArea() << endl;
	cout << "The circumference of a circle with radius " << circ2.getRadius() << " is " << circ2.calcCircumference() << endl;
	cout << endl;

	cout << "Enter the radius of your circle: ";
	cin >> rad;
	while (!circ.setRadius(rad))
	{
		cout << "Enter a positive number greater than 0! ";
		cin >> rad;
	}

	cout << "The area of a circle with radius " << circ.getRadius() << " is " << circ.calcArea() << endl;
	cout << "The circumference of a circle with radius " << circ.getRadius() << " is " << circ.calcCircumference() << endl;
	cout << endl;


	return 0;
}
////Results
/*
The area of a circle with the default radius 1 is 3.14159
The circumference of a circle with the default radius 1 is 6.28319

The area of a circle with radius 2 is 12.5664
The circumference of a cicle with radius 2 is 12.5664

The area of a circle with radius 2.5 is 19.635
The circumference of a circle with radius 2.5 is 15.708

Enter the radius of your circle: 10
The area of a circle with radius 10 is 314.159
The circumference of a circle with radius 10 is 62.8319

Press any key to continue . . .*/