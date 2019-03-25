// File Square.cpp -- Function implementation file
// Contains function definitions for Square class functions

#include "Square.h"

Square::Square(float s, float b)
{
	side = s;
	bound = b;
	cout << "Creating the Square with the 2 parameter overloaded constructor!" << endl;
}


//*******************************************************************
//                    Square::setSide                          *
// If the argument passed to the setSide function is zero or      *
// greater, it is copied into the member variable length and true   *
// is returned. If the argument is negative, the value of length    *
// remains unchanged and false is returned.                         *
//*******************************************************************

bool Square::setSide(float sid)
{
	bool validData = true;

   if (sid > bound)
      side = sid;            // Copy argument to side
   else
      validData = false;       // Leave side unchanged
   
   return validData;
}








