#include "junk.h"
#include "triangle.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const int SIZE = 20;
	
	Triangle t1;

	cout << t1.getArea(t1);

	Triangle shapes[SIZE]; // 20 triangle objects in an array

	shapes[4].setBase(6.5); // sets the base value of the 5th triangle to 6.5 - 0 = element 1 in array, 4 = element 5

	cout << shapes[9].getHeight(); // outputs the height of the 10th triangle object

	return 0;
}


// arrays of objects
// learning how to work with multifile projects
// projects will consist of more than one code file
// Setting up a multi-file project
// Goal: break up class definition and implementation
// all information belonging specifically to a class - pulled out and put into a separate file
// makes classes easy to reuse
// .h files are referred to as header files
// the header file for the class contains the class definition everything from private, public, member function definitions, etc.
// at top - preprocessord directives e.g., #ifndef INVENTORY_H
//                                         #define INVENTORY_H
// if INVENTORY_H has not been defined yet, define it again
// a safeguard to make sure that it does get included in executable code
// have to include things in this file that this file uses - e.g., strings, math class, etc.
// in .h file, function prototypes, and data members. public or private, etc.
// at the end #endif
// inventory.h and inventory.ccp go together like puzzle pieces
//
// in inventory.ccp - all the member function definitions go in here - setters, getters, constructor, etc.
//
// in main #include "inventory.h"
// you can have a situation where a class has an #include that isn't used in main, so that #include would not need to be in main
// 
// Arrays of Objects
// 