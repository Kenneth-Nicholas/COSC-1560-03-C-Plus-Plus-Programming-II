// This program uses a function that returns a structure.  
#include <iostream>
#include <iomanip>
#include <cmath>		  // Needed for the pow function
using namespace std;

// Circle structure declaration
struct Circle
{
	double radius;
	double diameter;
	double area;
};

const double PI = 3.14159;

int main()
{  // Define 2 Circle structure variables
	const int size = 2;
	Circle circ[size] = {{1.0,2.0,3.14159},
						{1.0,2.0,3.14159}};     
	
//	 Get the diameter and radius for each circle
	for(int i = 0; i < size; i++)
	{
		cout << "Enter the diameter of a circle: ";
		cin >> circ[i].diameter;
		circ[i].radius = circ[i].diameter / 2;
		// Calculate the area of each circle
		circ[i].area = PI * pow(circ[i].radius, 2.0);
	}
	

	// Display the results
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe radius and area of the circles are\n";
   cout << "Circle 1 -- Radius: " << setw(6) << circ[0].radius 
        << "   Area: " << setw(6) <<  circ[0].area << endl;
   cout << "Circle 2 -- Radius: " << setw(6) <<  circ[1].radius 
        << "   Area: " << setw(6) <<  circ[1].area << endl;
   if ( circ[0].area ==  circ[1].area)
      cout << "The two circles have the same area.\n\n";
   else
      cout << "The two circles do not have the same area.\n\n";


	return 0;
}

