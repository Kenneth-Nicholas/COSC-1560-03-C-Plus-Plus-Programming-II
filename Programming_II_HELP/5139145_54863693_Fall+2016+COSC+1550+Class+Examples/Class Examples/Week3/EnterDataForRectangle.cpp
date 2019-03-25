// COSC 1550
// Paul Biolchini
// Class Example
// Calculate the area of a rectangle

#include <iostream>
using namespace std;

int main()
{
	int length, width, area;
//	length = 10;
//	width = 5;
	// input
	//cout << "Please enter the length of the rectangle (as an integer number): ";
	//cin >> length;
	//cout << "Please enter the width of the rectangle (as an integer number): ";
	//cin >> width;

	cout << "Please enter the length and width of the rectangle (as an integer number): ";
	cin >> length >> width;
	// calculation

	area = length * width;
    //	output
	cout << "The area of a rectangle with a length of " 
		<< length << " and a width of "
		<< width << " is " << area << endl;

	return 0;
}