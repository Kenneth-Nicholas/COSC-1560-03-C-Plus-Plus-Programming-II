// Overloaded Functions Example
// COSC 1550

#include <iostream>
using namespace std;

//void area (int &, int=10, int = 5); //error due to ambiguous call to  
//overloaded function (default parameter list rather than an overloaded function)
void area (int &, int , int );
//void area (int &, int );
void area (int & , int );
//void area (int , int);
void area (float &, int );

int main()
{
	int rectArea, squareArea, len = 10, wid = 5, side = 10, rad = 7;
	float circleArea;

	area(rectArea, len, wid);
//	area(squareArea);
	area(squareArea, side);

	area(circleArea, rad);

	cout << "The Areas are: \n";
	cout << "Rectangle: " << rectArea << endl;
	cout << "Square:    " << squareArea << endl;
	cout << "circle:    " << circleArea << endl;
	return 0;
}

void area (int & area, int l, int w)
{
	area = l * w;
}
void area (int & area, int s)
{
	area = s * s;
}
//void area (int area, int s)
//{
//	area = s * s;
//}

void area (float & area, int r)
{ 
area = 3.14159 * r * r;
}
