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
		
  		// Print the character corresponding to code
		cout << static_cast<char>(code) << " ";
      
		// Go to the next code
		code++;
		count++;
		if (count > 15)
		{
			count = 0;
			cout << endl;
		}
   }
	return 0;
}
/*
  ! " # $ % & ' ( ) * + , - . /
0 1 2 3 4 5 6 7 8 9 : ; < = > ?
@ A B C D E F G H I J K L M N O
P Q R S T U V W X Y Z [ \ ] ^ _
` a b c d e f g h i j k l m n o
p q r s t u v w x y z { | } ~ ?
Press any key to continue . . .
*/