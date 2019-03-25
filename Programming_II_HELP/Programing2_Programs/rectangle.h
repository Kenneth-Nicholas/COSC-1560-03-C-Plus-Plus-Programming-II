#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

// Rectangle class declaration
class Rectangle
{
	private:
		float length;
		float width;
		float bound;
	public:
		bool  setLength(float);
		bool  setWidth(float);
		float getLength(){	return length;}
		float getWidth(){	return width;}
		float getBounds() { return bound;}

		float getArea(){	return length * width;}
		Rectangle() { bound = 1;
		cout << "Creating the Rectangle with the default constructor!" << endl;}
		Rectangle(int,int);
		Rectangle(int,int,int);
		~Rectangle(){cout << "Destroying the Rectangle!" << endl;}
};
#endif