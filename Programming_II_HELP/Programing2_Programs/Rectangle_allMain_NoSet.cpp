// Circle class/object example
#include <iostream>
#include <cmath>
using namespace std;
// Rectangle class declaration

class Rectangle
{	private:
		double length, width;
		
	public:
		double getLength() {return length;}
		double getWidth() {return width;}
		void setDimensions(double l, double w)
		{   length = l; width = w;}			// inline method declaration

		float calcArea()
		{   return length * width;  }	// inline method declaration

		float calcCircumference();
};

float Rectangle::calcCircumference()		// method declaration
{
	return 2 * (length + width);
}

int main()
{
	Rectangle box1;          // Define a Rectangle object

	box1.setDimensions(1, 2.5);    // This sets box1's length to 1 and width to 2.5

	cout << "The area of a rectangle with length " << box1.getLength() 
		<< " and width " << box1.getWidth() 
		<< " is " << box1.calcArea() << endl;
	cout << "The circumference of the rectangle is " << box1.calcCircumference() << endl;
	cout << endl;
	return 0;
}