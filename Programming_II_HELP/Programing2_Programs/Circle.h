// Circle class declaration


#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
#include <iostream>
using namespace std;

class Circle
{	private:
		float radius;
		
	public:
		void setRadius(float r)
		{   radius = r; }

		float calcArea()
		{   return 3.14 * pow(radius, 2);  }

		float calcCircumference();
		Circle(){cout << "Creating the Circle!" << endl;}
		~Circle(){cout << "Destroying the Circle!" << endl;}

};
#endif