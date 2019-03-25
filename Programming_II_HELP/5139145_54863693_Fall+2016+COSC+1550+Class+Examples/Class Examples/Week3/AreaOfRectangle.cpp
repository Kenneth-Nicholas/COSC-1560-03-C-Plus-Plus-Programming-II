// COSC 1550
// Paul Biolchini
// Class Example
// Calculate the area of a rectangle

#include <iostream>
using namespace std;

int main()
{
	int length, width, area;
	length = 10;
	width = 5;
	area = length * width;
//	length * width = area;  // incorrect assignment
	cout << "The area of a rectangle with a length of " 
		<< length << " and a width of "
		<< width << " is " << area << endl;

	return 0;
}