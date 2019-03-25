//This program demonstrates that string literals
//are pointers to char
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//	char storedAt[] = " is stored at ";
	char * storedAt = " is stored at ";
	char * s = "s";
//	char * a = 'a'; //// No  This will not compile

	char* p, *q;

   char letter = 'a';
   cout << letter << "  " << int(letter) << endl;
   //assign string literals to pointers to char
   p = "Hello ";
   q = "Bailey";

   //The following statement is now equivalent to
   cout << p << q << endl;
   
   //print the addresses where the C-strings are stored
//   cout << storedAt << int(storedAt) << "   " << *storedAt << endl;
   cout << p  << storedAt << int(p) << "   " << *p << endl;
   cout << q  << storedAt << int(q) << "   " << *q << endl
        << int("Another string literal") << endl;
   return 0;
}

