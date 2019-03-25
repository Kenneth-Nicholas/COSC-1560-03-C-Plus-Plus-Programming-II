// This program uses the return value of the square function
// in a mathematical statement.

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
double getRadius();
double square(double);
double area(double);

int main()
{
   double rad;
  
   cout << fixed << showpoint << setprecision(2);
   cout << "This program calculates the area of a circle.\n";
   rad = getRadius();
  // area =  PI * square(rad);
   cout << "The area is " << area(rad) << endl;
   return 0;
}

//*******************************************************
// Definition of function getRadius                     *
// This function asks the user to enter the radius of   *
// the circle and then returns that number as a double. *
//*******************************************************
double getRadius()
{
   double radius; // local variables

   cout << "Enter the radius of the circle: ";
   cin >> radius;
   while (radius <= 0)
   {
		cout << "Enter a radius greater than 0: ";
		cin >> radius;
   }
   return radius;
}

//******************************************************
// Definition of function square                       *
// This function accepts a double argument and returns *
// the square of the argument as a double.             *
//******************************************************
double square(double number)
{
   return number * number;
}

double area(double rad)
{
    const double PI = 3.14159;
	return PI * square(rad);
}