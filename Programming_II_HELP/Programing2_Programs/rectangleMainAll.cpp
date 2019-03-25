// This program implements the Rectangle class, with separate 
// files for the class declaration, the implementation of the 
// class functions, and the client code that uses the class.

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
		float getLength(){return length;}
		float getWidth(){return width;}
		float getBounds() { return bound;}
		float calcArea(){return length * width;}
		float calcCircumference(){return 2 * length + 2 * width;}
		Rectangle() { bound = 1;}  //  constructor
		Rectangle(float, float, float);  //  constructor
		Rectangle(float, float);  //  constructor

};


Rectangle::Rectangle(float l, float w, float b)
{
	length = l;
	width = w;
	bound = b;
}

Rectangle::Rectangle(float l, float w)
{
	length = l;
	width = w;
	bound = 1;
}


//******************************************************************
//                    Rectangle::setLength                          *
// If the argument passed to the setLength function is zero or      *
// greater, it is copied into the member variable length and true   *
// is returned. If the argument is negative, the value of length    *
// remains unchanged and false is returned.                         *
//*******************************************************************

bool Rectangle::setLength(float len)
{
	bool validData = true;

   if (len > bound)
      length = len;            // Copy argument to length
   else
      validData = false;       // Leave length unchanged
   
   return validData;
}

//*******************************************************************
//                    Rectangle::setWidth                           *
// If the argument passed to the setWidth function is zero or       *
// greater, it is copied into the member variable width and true    *
// is returned. If the argument is negative, the value of width     *
// remains unchanged and false is returned.                         *
//*******************************************************************

bool Rectangle::setWidth(float w)
{
	bool validData = true;

   if (w > bound)
      width = w;               // Copy argument to width
   else
      validData = false;       // Leave width unchanged
   
   return validData;
}


int main()
{
	Rectangle box;                     // Declare a Rectangle object
	float boxLength, boxWidth;

	//Get box length and width
	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the length? ";
	cin  >> boxLength;
	// Call member functions to set box dimensions 
	while (!box.setLength(boxLength))     // Store the length
	{
		cout << "Invalid box length entered. Enter a number greater than " << box.getBounds() << "\n";
	  	cout << "What is the length? ";
		cin  >> boxLength;
	}



	cout << "What is the width? ";
	cin  >> boxWidth;
	while (!box.setWidth(boxWidth))  // Store the width
	{
		cout << "Invalid box width entered. Enter a number greater than " << box.getBounds() << "\n";
   		cout << "What is the width? ";
		cin  >> boxWidth;
	}
   	// Call member functions to get box information to display
	   cout << "\nHere is the rectangle's data:\n";
	   cout << "Length: " << box.getLength() << endl;
	   cout << "Width : " << box.getWidth()  << endl;
	   cout << "Area  : " << box.calcArea()   << endl;
	   cout << "Circ. : " << box.calcCircumference()   << endl;
  
	return 0;
}