// This program demonstrates how a local variable
// can shadow the name of a global constant.
#include <iostream>
using namespace std;

// Gobal constant.
const int BIRDS = 500;

// Function prototype
void california();
void nevada();

int main()
{
   cout << "In main there are " << BIRDS
        << " birds.\n";
   california();
   nevada();
   cout << "In main there are " << BIRDS
	   << " birds.\n";
   return 0;
}

//********************************************
// california function                       *
//********************************************

void california()
{
   const int BIRDS = 10000;
   cout << "In california there are " << BIRDS
        << " birds.\n";
}

void nevada()
{
	cout << "In nevada there are " << BIRDS
		<< " birds.\n";
}