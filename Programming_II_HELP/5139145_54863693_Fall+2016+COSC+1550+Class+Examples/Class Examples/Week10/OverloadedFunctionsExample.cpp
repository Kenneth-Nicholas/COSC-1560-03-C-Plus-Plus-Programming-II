// Overloaded Functions Example
// COSC 1550

#include <iostream>
#include <iomanip>
using namespace std;

void area (int &, int, int);  // area of a rectangle
void area (int &, int);	// area of a square
void area (float &, int); // area of a circle
void area (float &, int, int);  // area of a triangle

int main()
{
	int rectArea, squareArea, len = 10, wid = 5, side = 10, rad = 7;
	float circleArea, triangleArea;

	area(rectArea, len, wid);
	area(squareArea, side);
	area(circleArea, rad);
	area(triangleArea, len, wid);
	
	cout << fixed << setprecision(2) << showpoint;
	cout << "The Areas are: \n";
	cout << "Rectangle: " << rectArea << endl;
	cout << "Square:    " << squareArea << endl;
	cout << "circle:    " << circleArea << endl;
	cout << "Triangle:  " << triangleArea << endl;
	return 0;
}

void area (float & area, int b, int h)
{
	area = 0.5 * b * h;
}

void area (int & area, int l, int w)
{
	area = l * w;
}
void area (int & area, int s)
{
	area = s * s;
}
void area (float & area, int r)
{ 
	area = 3.14159 * r * r;
}
