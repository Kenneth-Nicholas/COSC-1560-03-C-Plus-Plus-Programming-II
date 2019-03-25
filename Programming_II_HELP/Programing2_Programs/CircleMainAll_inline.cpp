// Circle class/object example
#include <iostream>
#include <cmath>
using namespace std;
// Circle class declaration

class Circle
{	private:
		float radius;
		
	public:
		float getRadius() {return radius;} // inline method declaration
		void setRadius(float r) { radius = r;}			// inline method declaration

		float calcArea(){return 3.14 * pow(radius, 2);  }	// inline method declaration

		float calcCircumference()
		{
			return 2 * 3.14 * radius;
		}
};

int main()
{
	Circle sphere1, sphere2;          // Define a Circle object

	sphere1.setRadius(1);    // This sets sphere1's radius to 1
	//sphere2.setRadius(2.5);    // This sets sphere2's radius to 2.5

	cout << "The area of a sphere with radius " << sphere1.getRadius() << " is " << sphere1.calcArea() << endl;
	cout << "The circumference of a sphere with radius " << sphere1.getRadius() << " is " << sphere1.calcCircumference() << endl;
	cout << endl;
	//cout << "The area of a sphere with radius " << sphere2.calcArea() << endl;
	//cout << "The circumference of a sphere with radius " << sphere2.calcCircumference() << endl;
	return 0;
}