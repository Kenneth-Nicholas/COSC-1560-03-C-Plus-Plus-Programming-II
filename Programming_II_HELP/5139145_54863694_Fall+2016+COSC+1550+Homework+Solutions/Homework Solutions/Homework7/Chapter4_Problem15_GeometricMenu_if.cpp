// Chapter 4 - Assignment 15, Geometry Calculator
// This menu-driven program solves simple geometry problems.

#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;

    int    choice;         // User's shape choice
    double area;           // Area of the selected shape
	
   // Display selections and request user input
	cout << "Geometry Calculator\n\n";
	cout << "1. Calculate the area of a Circle\n";
	cout << "2. Calculate the area of a Rectangle\n";
	cout << "3. Calculate the area of a Triangle\n";
	cout << "4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;

	// Calculate and display the area of the selected shape
	if(choice == 1)
	{
		double radius;         // Circle radius
		// Area of a circle	
        cout << "\nEnter the circle's radius: ";
		cin  >> radius;
        if (radius < 0)
			cout << "\nThe radius can not be less than zero.\n";
		else
		{	
			area = PI * radius * radius;
			cout << "\nThe area is " << area << endl;
		}
	}
	else if (choice == 2)
	{
		double length,         // Rectangle length
           width;          // Rectangle width
		// Area of a rectangle
		cout << "\nEnter the rectangle's length: ";
			cin  >> length;
		cout << "Enter the rectangle's width: ";
			cin  >> width;
        if (length < 0 || width < 0)
			cout << "\nOnly enter positive values for length and width.\n";
		else
		{	
			area = length * width;
			cout << "\nThe area is " << area << endl;
		}
	}
	else if (choice == 3)
	{
		double base,           // Triangle base
           height;         // Triangle height
		// Area of a triangle
        cout << "Enter the length of the base: ";
		cin  >> base;
		cout << "Enter the triangle's height: ";  
		cin  >> height;
        if (base < 0 || height < 0)
			cout << "\nOnly enter positive values for base and height.\n";
		else
		{  
			area = base * height * 0.5;
			cout << "\nThe area is " << area << endl;
		}
	 }           
	 else if (choice == 4)
	 { 
		cout << "\nBye!\n";
	 }
	 else
		cout << "\nYou may only enter 1, 2, 3, or 4.\n";
	return 0;
}
