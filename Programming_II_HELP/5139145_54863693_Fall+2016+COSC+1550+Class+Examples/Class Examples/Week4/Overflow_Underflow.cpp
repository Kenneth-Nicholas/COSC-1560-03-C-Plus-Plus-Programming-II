// This program demonstrates integer overflow and underflow.

#include <iostream>
using namespace std;

int main()
{
     short testVar = 32767;

     cout << testVar << endl;
     testVar = testVar + 1;
     cout << testVar << endl;
     testVar = testVar - 1;
     cout << testVar << endl;

	 cout << endl;

     short testVar0 = -32768;

     cout << testVar0 << endl;
     testVar0 = testVar0 - 1;
     cout << testVar0 << endl;
     testVar0 = testVar0 + 1;
     cout << testVar0 << endl;
	 
	 cout << endl;

 	 unsigned short testVar1 = 65535;

     cout << testVar1 << endl;
     testVar1 = testVar1 + 1;
     cout << testVar1 << endl;
     testVar1 = testVar1 + 1;
     cout << testVar1 << endl;
     testVar1 = testVar1 - 1;
     cout << testVar1 << endl;
     testVar1 = testVar1 - 1;
     cout << testVar1 << endl;

     return 0;
}
