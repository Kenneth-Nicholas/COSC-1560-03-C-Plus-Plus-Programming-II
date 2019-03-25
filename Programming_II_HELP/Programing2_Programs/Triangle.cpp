#include "Triangle.h"
#include <cmath>
#include <iostream>
using namespace std;
float Triangle::calcArea()
{
	return base * height /2.0;
}

float Triangle::calcCircumference()
{
	return  base + height;
}

Triangle::Triangle()
{
	base = 1;
	height = 1;
	cout << "Creating a new Triangle!" << endl;
}

Triangle::Triangle(float b, float h)
{
	base = b;
	height = h;
	cout << "Creating a new Triangle with a base of " << base << " and a height of " << height << endl;
}

Triangle::~Triangle()
{
	cout << "Destroying the Triangle!" << endl;
}