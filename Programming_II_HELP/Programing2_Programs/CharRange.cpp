// File CharRange.cpp 
#include <iostream>
#include <cctype>	     // Needed to use toupper
#include "CharRange.h"
using namespace std;

//*********************************************
// CharRange default constructor              *
//*********************************************
CharRange::CharRange(char l, char u)
{
	lower = toupper(l);
	upper = toupper(u);
}

//*********************************************
// CharRange member function getChar          *
// Inputs a character and validates that it   *
// is in the correct range. Then it returns   *
// the valid character.                       *
//*********************************************
//char CharRange::getChar()
//{
//	cin.get(input);          // Get a character
//	cin.ignore();            // Ignore the '\n' in the input buffer
//	input = toupper(input);  // Uppercase the character
//		
//	// Ensure character is in the correct range
//	while (input < lower || input > upper && input != 'X')  
//	{  cout << "That is not a valid character.\n";
//		cout << "Enter a value from " << lower;
//		cout << " to " << upper << ".\n";
//		cin.get(input);
//		cin.ignore();
//		input = toupper(input);
//	}
//	return input;
//}

bool CharRange::setChar(char i)
{
	bool result = false;
	if (toupper(i) >= lower && toupper(i) <= upper)
	{ 
		input = toupper(i);
		result = true;
	}
	return result;
}