#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;

// Rectangle class declaration
class Square
{
	private:
		float side;
		float bound;
	public:
		bool  setSide(float);
		float getSide(){	return side;}
		float getBounds() { return bound;}

		float getArea(){	return side * side;}
		Square(float = 2,float = 1);
		~Square(){cout << "Destroying the Square!" << endl;}
};
#endif