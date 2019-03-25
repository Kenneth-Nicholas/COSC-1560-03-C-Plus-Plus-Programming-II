//*******************************************************************************************************
//
//        File:              assignmentTwoComplex.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #2: Complex
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Sept 13, 2017
//
//
//        This program uses two structures containing two integer variables each in order to add 
//        and subtract complex numbers; It prompts the user to enter integer values representing 
//        both the real, and imaginary portions of each complex number. The program then adds
//        and subtracts the complex numbers and displays the result of these calculations in 
//        the console while also recording the results in "a2.txt," an external file.
//
//*******************************************************************************************************

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//*******************************************************************************************************

struct Complex
{
	int real,
		imaginary;
};

//*******************************************************************************************************

void getData(Complex &c1, Complex &c2, bool &firstTime);
void addComplex(Complex c1, Complex c2, Complex &sum);
void subtractComplex(Complex c1, Complex c2, Complex &diff);
void outputData(Complex c1, Complex c2, Complex sum, Complex diff, bool &firstTimeTwo);

//*******************************************************************************************************

int main()
{
	bool decision = false,
	   	 firstTime = true,
		 firstTimeTwo = true;

	do{

		Complex c1,
			c2,
			sum,
			diff;

		char yesOrNo;

		getData(c1, c2, firstTime);

		addComplex(c1, c2, sum);

		subtractComplex(c1, c2, diff);

		outputData(c1, c2, sum, diff, firstTimeTwo);

		cout << "Continue program? (y/n): ";

		cin >> yesOrNo;

		for (int i = 0; i == 0; i++)
		{

			if (yesOrNo == 'y' || yesOrNo == 'Y')
			{
				decision = true;
			}
			else if (yesOrNo == 'n' || yesOrNo == 'N')
			{
				cout << endl;
				
				decision = false;
			}
			else
			{
				cout << endl << "Invalid Entry!" << endl << endl;

				cout << "Continue program? (y/n): ";

				cin >> yesOrNo;

				i = -1;
			}
		}
	} while (decision == true);

	return 0;                                                        
}

//*******************************************************************************************************

void getData(Complex &c1, Complex &c2, bool &firstTime)
{
	if (firstTime == true)
	{

		cout << "Welcome to the complex number sum and difference calculator!" << endl
			 << endl
			 << "This program accepts four integer values, which correspond to the "
			 << "values representing the real, and imaginary parts of " << endl
			 << "two complex numbers." << endl
			 << endl
			 << "After entering the four request integer values, this program adds the two "
			 << "complex numbers together and displays the " << endl
			 << "result of this operation." << endl
			 << endl
			 << "In addition, this program subtracts the second complex number from the "
			 << "first complex number entered, and displays the " << endl
			 << "result of this operation." << endl
		   	 << endl
			 << "Please enter an integer value representing the real part of "
			 << "the first complex number: ";

		cin >> c1.real;

		cout << "Please enter an integer value representing the imaginary part of "
			 << "the first complex number: ";

		cin >> c1.imaginary;

		cout << endl
			 << "Please enter an integer value representing the real part of "
			 << "the second complex number: ";

		cin >> c2.real;

		cout << "Please enter an integer value representing the imaginary part of "
			 << "the second complex number: ";

		cin >> c2.imaginary;

		cout << endl;

		firstTime = false;
	}
	else
	{
		cout << endl << "Please enter an integer value representing the real part of "
			 << "the first complex number: ";

		cin >> c1.real;

		cout << "Please enter an integer value representing the imaginary part of "
			 << "the first complex number: ";

		cin >> c1.imaginary;

		cout << endl
			 << "Please enter an integer value representing the real part of "
			 << "the second complex number: ";

		cin >> c2.real;

		cout << "Please enter an integer value representing the imaginary part of "
			 << "the second complex number: ";

		cin >> c2.imaginary;

		cout << endl;
	}
}

//*******************************************************************************************************

void addComplex(Complex c1, Complex c2, Complex &sum)
{
	sum.real = c1.real + c2.real;

	sum.imaginary = c1.imaginary + c2.imaginary;
}

//*******************************************************************************************************

void subtractComplex(Complex c1, Complex c2, Complex &diff)
{
	diff.real = c1.real - c2.real;

	diff.imaginary = c1.imaginary - c2.imaginary;
}

//*******************************************************************************************************

void outputData(Complex c1, Complex c2, Complex sum, Complex diff, bool &firstTimeTwo)
{
	fstream outFile;													  

	outFile.open("a2.txt", ios::app);
	
	if (firstTimeTwo == true)
	{
		cout << "PROGRAM RESULTS:" << endl << endl
			 << "The complex numbers:" << endl << endl
			 << "(" << c1.real << " + " << c1.imaginary << "i) (" << c2.real << " + " << c2.imaginary
			 << "i)" << endl
			 << "Added together equal: (" << sum.real << " + " << sum.imaginary << "i)" << endl
			 << "Subrtacted equal:     (" << diff.real << " + " << diff.imaginary << "i)" << endl
			 << endl;

		outFile << "PROGRAM RESULTS: " << endl << endl
			    << "The complex numbers:" << endl << endl
			    << "(" << c1.real << " + " << c1.imaginary << "i) (" << c2.real << " + " << c2.imaginary
			    << "i)" << endl
			    << "Added together equal: (" << sum.real << " + " << sum.imaginary << "i)" << endl
			    << "Subrtacted equal:     (" << diff.real << " + " << diff.imaginary << "i)" << endl
			    << endl;

		firstTimeTwo = false;
	}
	else
	{
		cout << "(" << c1.real << " + " << c1.imaginary << "i) (" << c2.real << " + " << c2.imaginary
			 << "i)" << endl
			 << "Added together equal: (" << sum.real << " + " << sum.imaginary << "i)" << endl
			 << "Subrtacted equal:     (" << diff.real << " + " << diff.imaginary << "i)" << endl
			 << endl;

		outFile << "(" << c1.real << " + " << c1.imaginary << "i) (" << c2.real << " + " << c2.imaginary
		    	<< "i)" << endl
			    << "Added together equal: (" << sum.real << " + " << sum.imaginary << "i)" << endl
			    << "Subrtacted equal:     (" << diff.real << " + " << diff.imaginary << "i)" << endl
			    << endl;
	}

	outFile.close();
}

//*******************************************************************************************************
// Welcome to the complex number sum and difference calculator!
//
// This program accepts four integer values, which correspond to the values representing the real, and imaginary parts of
// two complex numbers.
//
// After entering the four request integer values, this program adds the two complex numbers together and displays the
// result of this operation.
//
// In addition, this program subtracts the second complex number from the first complex number entered, and displays the
// result of this operation.
//
// Please enter an integer value representing the real part of the first complex number : 5
// Please enter an integer value representing the imaginary part of the first complex number : 9
//
// Please enter an integer value representing the real part of the second complex number : 12
// Please enter an integer value representing the imaginary part of the second complex number : 8
//
// PROGRAM RESULTS :
//
// The complex numbers :
//
// (5 + 9i) (12 + 8i)
// Added together equal : (17 + 17i)
// Subrtacted equal : (-7 + 1i)
//
// Continue program ? (y / n) : y
//
// Please enter an integer value representing the real part of the first complex number : 10
// Please enter an integer value representing the imaginary part of the first complex number : 5
//
// Please enter an integer value representing the real part of the second complex number : 3
// Please enter an integer value representing the imaginary part of the second complex number : 4
//
// (10 + 5i) (3 + 4i)
// Added together equal : (13 + 9i)
// Subrtacted equal : (7 + 1i)
//
// Continue program ? (y / n) : y
//
// Please enter an integer value representing the real part of the first complex number : 2
// Please enter an integer value representing the imaginary part of the first complex number : 8
//
// Please enter an integer value representing the real part of the second complex number : 7
// Please enter an integer value representing the imaginary part of the second complex number : 13
//
// (2 + 8i) (7 + 13i)
// Added together equal : (9 + 21i)
// Subrtacted equal : (-5 + -5i)
//
// Continue program ? (y / n) : n
//
// Press any key to continue . . .
//
//*******************************************************************************************************