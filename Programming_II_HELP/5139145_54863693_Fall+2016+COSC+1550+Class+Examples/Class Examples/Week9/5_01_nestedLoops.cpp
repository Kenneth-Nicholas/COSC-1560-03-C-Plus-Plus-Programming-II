// Chapter 5 - Assignment 1, Characters for the ASCII Codes
// This program uses a while loop to display the printable characters 
// corresponding to ASCII codes 32 - 127. 
// Note that ASCII 32 is a blank space, so the first "character" printed
// on the first output line is a blank.

#include <iostream>
using namespace std;

int main()
{   
   int code = 32, count = 0;
   while (code <= 127)
   {  
		while(count <= 15)
		{
			// Print the character corresponding to code
			cout << static_cast<char>(code) << " ";
      
			// Go to the next code
			code++;
			count++;
		}
		count = 0;
		cout << endl;
   }
	return 0;
}
