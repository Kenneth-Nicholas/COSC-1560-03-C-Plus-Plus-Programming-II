// File rectangle.cpp -- Function implementation file
// Contains function definitions for Rectangle class functions

#include "rectangle.h"

Rectangle::Rectangle(int l, int w)
{
	length = l;
	width = w;
	bound = 1;
	cout << "Creating the Rectangle with the 2 parameter overloaded constructor!" << endl;
}

Rectangle::Rectangle(int l, int w, int b)
{
	length = l;
	width = w;
	bound = b;
	cout << "Creating the Rectangle with the 3 parameter overloaded constructor!" << endl;
}


//*******************************************************************
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






