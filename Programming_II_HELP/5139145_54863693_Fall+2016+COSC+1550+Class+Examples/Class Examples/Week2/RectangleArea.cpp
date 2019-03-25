//**********************************************************
//* Paul Biolchini							                
//* COSC 1550.07 Computer Programming I				        
//* Program Name:	RectangleArea.cpp    		        
//* Week 2  Class Example 1
//* Problem #: Example                                        
//* Due Date:	9/3/2015   			                    
//**********************************************************


#include <iostream>
using namespace std;

int main()
{
	// input and Definitions
//	int length = 12;
	int length;
	length = 12;
	int width = 2;
	int area;
	// calculation
	area = length * width;
	// output
	cout << "A rectangle"
		<< "\nwith a length of " << length
		<< "\nand a width of   " << width
		<< "\nhas an area of   " << area << endl << endl;

	// Insert "Press any key to continue ..." into program
    system("pause");  
	return 0;
}
/*
A rectangle
with a length of 3
and a width of   7
has an area of   21

Press any key to continue . . .*/