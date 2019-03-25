// Chapter 5 - Assignment 1, Characters for the ASCII Codes
// This program uses a while loop to display the printable characters 
// corresponding to ASCII codes 32 - 127. 
// Note that ASCII 32 is a blank space, so the first "character" printed
// on the first output line is a blank.

#include <iostream>
using namespace std;

int main()
{   
   
   for (int code = 32; code <= 127; )
   {  
		for(int count = 0; count <= 15 && code <= 127; count++)
		{
			// Print the character corresponding to code
			cout << static_cast<char>(code++) << " ";
		}
		cout << endl;
   }
	return 0;
}
