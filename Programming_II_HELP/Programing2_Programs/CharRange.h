// File CharRange.h -- CharRange class specification file
#include <iostream>

using namespace std;

#ifndef CHRANGE_H
#define CHRANGE_H

class CharRange
{
 private:
	char input;		// User input
	char lower;		// Lowest valid character
	char upper;		// Highest valid character	
 public:
	CharRange(char, char);
	char getChar();
};



//****************************************************
// CharRange default constructor                     *
//****************************************************
CharRange::CharRange(char l, char u)
{
   lower = toupper(l);
   upper = toupper(u);
}

//*****************************************************
// CharRange member function getChar                  *
// Inputs a character, validates it is in the correct *
// range, and then returns the valid character.       *
//*****************************************************
char CharRange::getChar()
{
   cin.get(input);          // Get a character
   cin.ignore();            // Ignore the '\n' in the input buffer
   input = toupper(input);  // Uppercase the character
		
   // Ensure character is in the correct range
   while (input < lower || input > upper)  
   {  cout << "That is not a valid character.\n";
      cout << "Enter a value from " << lower;
      cout << " to " << upper << ".\n";
      cin.get(input);
      cin.ignore();
      input = toupper(input);
   }
   return input;
}

#endif