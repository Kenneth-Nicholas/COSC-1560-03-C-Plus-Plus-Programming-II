// This program uses the CharRange class and demonstrates its 
// capabilities. This file should be combined into a project
// along with the CharRange.h and CharRange.cpp files.

#include <iostream>
#include "CharRange.h"        
using namespace std;          

int main()
{
	char ch;                   // Holds user input
   
   CharRange input('A', 'E'); // Create a CharRange object named input
                              // It will check for chars in the range J - N

	cout << "Enter any of the characters A, B, C, D, or E.\n";
	//cout << "Entering X will stop this program.\n";
   cin >> ch;
   while (!input.setChar(ch))
   { 
	   	cout << "Enter any of the characters A, B, C, D, or E.\n";
		cin >> ch;
   }
   cout << "You entered " << input.getChar() << endl;
     
	return 0;
}
