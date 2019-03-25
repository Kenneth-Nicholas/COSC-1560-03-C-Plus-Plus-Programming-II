// Chapter 13, Programming Challenge 8: Circle Class
#include <iostream>
using namespace std;

// Circle class declaration
class Circle
{
private:
	const double pi = 3.14159;     // To hold a value for pi
    double radius; // To hold the radius
   
public:
   // The default constructor sets
   // radius to 0.0 and pi to 3.14159.
   Circle()
      { radius = 0.0; /*pi = 3.14159; */}
   
   // The overloaded constructor accepts
   // the radius as an arguemnt.
   Circle(double r)
      { radius = r;  /*pi = 3.14159; */ }
      
   // Mutator function for the radius
   void setRadius(double r)
      { radius = r; }
   
   // Accessor function for the radius
   double getRadius() const
      { return radius; }
      
   // The getArea function returns the
   // circle's area.
   double getArea() const
      { return pi * radius * radius; }

   // The getDiameter function returns the
   // circle's diameter.
   double getDiameter() const
      { return radius * 2; }

   // The getCircumference function returns
   // the circle's circumference.
   double getCircumference() const
      { return 2 * pi * radius; }
};

// Demo program
int main()
{
   double radius;  // To hold a radius
   
   // Get the radius.
   cout << "Enter the circle's radius: ";
   cin >> radius;
   
   // Create a Circle object with the 
   // specified radius.
   Circle c(radius);
   
   // Display the circle's data.
   cout << "Radius: " << c.getRadius()
        << endl;
   cout << "Area : " << c.getArea()
        << endl;
   cout << "Diameter: " << c.getDiameter()
        << endl;
   cout << "Circumference: " << c.getCircumference()
        << endl;
   return 0;
}