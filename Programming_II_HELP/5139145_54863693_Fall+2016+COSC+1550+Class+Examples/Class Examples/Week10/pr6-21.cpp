// This program uses a static local variable.

#include <iostream>
using namespace std;

// Function prototype
void showStatic(); 

int main()
{
	for (int count = 0; count < 5; count++)
		showStatic();
    return 0;
}

//**************************************************************
// Definition of function showStatic                           *
// statNum is a static local variable. Its value is displayed  *
// and then incremented just before the function returns.      *
//**************************************************************
void showStatic()
{
	static int statNum = 1;   // Static local variable

	cout << "StatNum is " << statNum << endl;
	statNum++;
}
