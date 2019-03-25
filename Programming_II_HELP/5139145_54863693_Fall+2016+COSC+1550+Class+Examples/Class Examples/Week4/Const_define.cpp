//   This program calculates the area of a circle.
//   The formula for the area of a circle is pi times
//   the radius squared. Pi is 3.14159.

#include <iostream>
#include <cmath>     // Needed for the pow function
using namespace std;

#define PI 3.14159  // C method of creating constants  (PI is a double)
//#define PI 3.14159f  // force PI to be a float

int main()
{
   double area, radius;
//   const double PI = 3.14159;  // C++ constant declaration
   cout << "This program calculates the area of a circle.\n";
   cout << "What is the radius of the circle? ";
   cin  >> radius;
   //cout << "Please enter the value of PI: ";
   cin >> PI;  // PI is a constant, can not change
   PI = 3.0;// PI is a constant, can not change
   //3.14159 = 3.0;// This is what define does!
   area = PI * pow(radius, 2);
   cout << "The area is " << area << endl;
   return 0;
}
