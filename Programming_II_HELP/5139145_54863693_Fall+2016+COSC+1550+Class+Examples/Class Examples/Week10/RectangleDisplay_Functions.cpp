// Paul Biolchini
// COSC 1550 
// Chapter 5, Problem 18
// Homework 9 Assignment 2
// The Rectangle Display

#include <iostream>
#include <string>
using namespace std;

int getSide(string, int, int);
void display(int, int);

int main()
{
// Need 2 integers.  Largest = length; smallest = width;
// Print width rows of length columns of letter 'X'

	int num1, num2, length, width;
	num1 = getSide("length", 2, 5);
	cout << endl;
	num2 = getSide("width", 2, 10);


	// check for larger
	length = num1;
	width = num2;
	if (length < num2)
	{
		length = num2;
		width = num1;
	}
// draw rectangle
	cout << endl;
	display(length, width);

	return 0;
}

int getSide(string side, int lower, int upper)
{
	int num;
	cout << "Please enter a " << side << " between " << lower << " and " << upper << ":";

	cin >> num;
	while(num < lower || num > upper)
	{
		cout << side << " should be a number between " << lower << " and " << upper << ":";
		cin >> num;
	}
	return num;
}




void display(int len, int wid)
{
	for(int row = 0; row < wid; row++)
	{
		for (int col = 0; col < len; col++)
			cout << 'X';
		cout << endl;
	}
}