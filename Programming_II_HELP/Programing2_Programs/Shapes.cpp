// This program demonstrates a simple class.

#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

void callCircle();
int main()
{
	Circle sphere1,          // Define 2 Circle objects
	       sphere2;      
	Square sq1, sq2(5,2);  // single constructor using default parameters
	cout << "The area of the first square is " << sq1.getArea() << endl;
	cout << "The area of the second square is " << sq2.getArea() << endl;

	Triangle t1(1,1), t2(3,4);

	Rectangle rec;
	rec.setLength(5);
	rec.setWidth(10);
	cout << "The area of the rectangle is " << rec.getArea() << endl;

	Rectangle rec1( 12,6);
	cout << "The area of the rectangle is " << rec1.getArea() << endl;


	bool result = t1.setBase(-5);
	if(result)
	{
		t1.setHeight(10);

		cout << "The area of the triangle is " << t1.calcArea() << endl;
	}
	
	callCircle();
	callCircle();
	callCircle();
	sphere1.setRadius(1);    // This sets sphere1's radius to 1
	sphere2.setRadius(2.5);  // This sets sphere2's radius to 2.5

	cout << "The area of sphere1 is " << sphere1.calcArea() << endl;
	cout << "The circumference of sphere1 is " << sphere1.calcCircumference() << endl;
	cout << "The area of sphere2 is " << sphere2.calcArea() << endl;
	cout << "The circumference of sphere2 is " << sphere2.calcCircumference() << endl;
	return 0;
}

void callCircle()
{
	Circle c;
	cout << "callCircle function called.  One circle created.\n";
}

/*
Creating the Circle!
Creating the Circle!
Creating the Square with the 2 parameter overloaded constructor!
Creating the Square with the 2 parameter overloaded constructor!
The area of the first square is 4
The area of the second square is 25
Creating a new Triangle with a base of 1 and a height of 1
Creating a new Triangle with a base of 3 and a height of 4
Creating the Rectangle with the default constructor!
The area of the rectangle is 50
Creating the Rectangle with the 2 parameter overloaded constructor!
The area of the rectangle is 72
Creating the Circle!
Destroying the Circle!
The area of sphere1 is 3.14
The circumference of sphere1 is 6.28
The area of sphere2 is 19.625
The circumference of sphere2 is 15.7
Destroying the Rectangle!
Destroying the Rectangle!
Destroying the Triangle!
Destroying the Triangle!
Destroying the Square!
Destroying the Square!
Destroying the Circle!
Destroying the Circle!
Press any key to continue . . .*/