// File CharRange.h
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
	char getChar() {return input;}
	bool setChar(char i);
};

#endif