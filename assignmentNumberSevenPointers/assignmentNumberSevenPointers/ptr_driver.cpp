//*******************************************************************************************************
//
//        File:              ptr_driver.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #7: Pointers
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               November 8, 2017
//
//
//        This program reads in nineteen numbers from file. The first number tells
//        the program how many times to loop, and the eighteen remaining numbers are
//        read in in groups of two. Each set of two numbers is then added, 
//        subtracted, multiplied, divided, and then the results of these operations
//        is written both to console and to file. This is done using pointers.
//
//        Files required:
//    			   1.      ptr_driver.cpp	   - main .cpp file
//				   2.      data.txt		       - text file of input
//                 3.      a7.txt              - text file of output
//
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

//*******************************************************************************************************

void readNumberOfSets(int &numberOfSets, ifstream &inFile);
void readData(int &operandOne, int &operandTwo, ifstream &inFile);
void sum(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo);
void writeSum(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo,
	ofstream &outFile);
void difference(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo);
void writeDifference(int* pointToResult, int* pointToOperandOne, 
	int* pointToOperandTwo, ofstream &outFile);
void product(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo);
void writeProduct(int* pointToResult, int* pointToOperandOne, 
	int* pointToOperandTwo, ofstream &outFile);
void quotient(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo);
void writeQuotient(int* pointToResult, int* pointToOperandOne, 
	int* pointToOperandTwo, ofstream &outFile);

//*******************************************************************************************************

int main()
{
	int operandOne,
		operandTwo,
		result,
		numberOfSets;

	int* pointToOperandOne = &operandOne,
	   * pointToOperandTwo = &operandTwo,
	   * pointToResult = &result;

	ifstream inputFile;
	inputFile.open("data.txt");

	readNumberOfSets(numberOfSets, inputFile);

	ofstream outputFile;
	outputFile.open("a7.txt", ios::app);

	cout << "PROGRAM RESULTS:" << endl
	     << endl;

	outputFile << "PROGRAM RESULTS:" << endl
		       << endl;

	for (int i = 0; i < numberOfSets; i++)
	{
		readData(operandOne, operandTwo, inputFile);
		
		sum(pointToResult, pointToOperandOne, pointToOperandTwo);
		writeSum(pointToResult, pointToOperandOne, pointToOperandTwo, outputFile);

		difference(pointToResult, pointToOperandOne, pointToOperandTwo);
		writeDifference(pointToResult, pointToOperandOne, pointToOperandTwo, outputFile);

		product(pointToResult, pointToOperandOne, pointToOperandTwo);
		writeProduct(pointToResult, pointToOperandOne, pointToOperandTwo, outputFile);

		quotient(pointToResult, pointToOperandOne, pointToOperandTwo);
		writeQuotient(pointToResult, pointToOperandOne, pointToOperandTwo, outputFile);
	}

	inputFile.close();

	outputFile.close();

	return 0;
}

//*******************************************************************************************************

void readNumberOfSets(int &numberOfSets, ifstream &inFile)
{
	int intHolder;

	inFile >> intHolder;
	numberOfSets = intHolder;
}

//*******************************************************************************************************

void readData(int &operandOne, int &operandTwo, ifstream &inFile)
{
	int intHolder;

	inFile >> intHolder;
	operandOne = intHolder;

	inFile >> intHolder; 
	operandTwo = intHolder;
}

//*******************************************************************************************************

void sum(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo)
{
	*pointToResult = *pointToOperandOne + *pointToOperandTwo;
}

//*******************************************************************************************************

void writeSum(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo, ofstream &outFile)
{
	cout << "The sum of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;
	
	outFile << "The sum of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;
}

//*******************************************************************************************************

void difference(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo)
{
	*pointToResult = *pointToOperandOne - *pointToOperandTwo;
}

//*******************************************************************************************************

void writeDifference(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo, ofstream &outFile)
{
	cout << "The difference of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;
	
	outFile << "The difference of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;
}

//*******************************************************************************************************

void product(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo)
{
	*pointToResult = (*pointToOperandOne) * (*pointToOperandTwo);
}

//*******************************************************************************************************

void writeProduct(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo, ofstream &outFile)
{
	cout << "The product of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;

	outFile << "The product of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;
}

//*******************************************************************************************************

void quotient(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo)
{
	*pointToResult = (*pointToOperandOne) / (*pointToOperandTwo);
}

//*******************************************************************************************************

void writeQuotient(int* pointToResult, int* pointToOperandOne, int* pointToOperandTwo, ofstream &outFile)
{
	cout << "The quotient of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;
	cout << endl;

	outFile << "The quotient of " << *pointToOperandOne << " and " << *pointToOperandTwo << " is " << *pointToResult << endl;
	outFile << endl;
}

//*******************************************************************************************************