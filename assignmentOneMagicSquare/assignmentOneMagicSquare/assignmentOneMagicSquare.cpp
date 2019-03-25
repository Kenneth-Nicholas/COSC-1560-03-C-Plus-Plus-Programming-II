//*******************************************************************************************************
//
//        File:              assignmentOneMagicSquare.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #1: Magic Square
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Sept 6, 2017
//
//
//        This program prompts the user to enter nine integer values in row/column
//        fashion. The program then compares each row, column, and diagonal to the
//        value of the three integers that make up the first row. Each row, column,
//        and diagonal value is obtained by adding the three integers values that 
//        make them up. The program then writes the corresponding results to a text
//        file titled "a1.txt." The results contain the nine integers that make up 
//        the square, along with whether or not the square is a magic square or not.
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
using namespace std;				

//*******************************************************************************************************

void loadSquare(int square[3][3]);										  //function prototype
bool isMagic(int square[3][3]);											  //function prototype

//*******************************************************************************************************

int main()																  //a must have
{
	int square[3][3];													  //creates unpopulated array

	fstream outFile;													  //enable filestream method

	outFile.open("a1.txt", ios::app);									  //creates/opens text

	loadSquare(square);													  //calls loading function

	isMagic(square);													  //calls determining function

	outFile << endl 
		    << "PROGRAM RESULTS:" << endl								  //output formatting
		    << endl;

	for (int i = 0; i < 3; i++)											  //loop for rows
	{
		for (int j = 0; j < 3; j++)										  //loop for columns
		{
			outFile << square[i][j] << "|";								  //output formatting
		}
		outFile << endl;												  //creates square output
	}

	if (isMagic(square) == false)										  //if false, not magic
	{
		outFile << "The values you entered do not represent a magic square."
				<< endl;												 
	}
	else if (isMagic(square) == true)									  //if true, then magic
	{
		outFile << "The values you entered represent a magic square!"	  //writes result to txt
				<< endl;
	}

	outFile.close();													  //closes text file

	return 0;
}

//*******************************************************************************************************

void loadSquare(int square[3][3])										  //loads array w user input
{
	cout << "This program determines if a three by three square is a magic square." << endl
	     << endl
		 << "Please enter the nine integer values that make up the three by three square." << endl
		 << endl
		 << "Begin by entering the numbers in the first row, from left to right." << endl
		 << endl
		 << "Then proceed to do the same for the second row, and then, the third row." << endl
		 << endl
		 << "Hit the enter key one time each time you enter an integer." << endl
		 << endl;

	for (int i = 1; i < 4; i++)											  //loop for rows
	{
		for (int j = 1; j < 4; j++)										  //loop for columns
		{
			cout << "Entering row " << i << ", column " << j << ": ";	  //console user interface

			cin >> square[i - 1][j - 1];								  //-1 bc elements start @ 0
		}
	}

	cout << endl;														  //spacing for readability
}

//*******************************************************************************************************

bool isMagic(int square[3][3])											  //determines if magic
{    
	int firstRow = 0,													  //initialize variables
		secondRow = 0,
		thirdRow = 0,
		firstColumn = 0,
		secondColumn = 0,
		thirdColumn = 0,
		botLeftTopRight = 0,
		topLeftBotRight = 0;

	for (int i = 0; i < 3; i++)
	{
		firstRow += square[0][i];                                         //get r1 
	}
	for (int i = 0; i < 3; i++)
	{
		secondRow += square[1][i];                                        //get r2
	}
	for (int i = 0; i < 3; i++)
	{
		thirdRow += square[2][i];                                         //get r3
	}
	for (int i = 0; i < 3; i++)
	{
		firstColumn += square[i][0];                                      //get c1
	}
	for (int i = 0; i < 3; i++)
	{
		secondColumn += square[i][1];                                     //get c2
	}
	for (int i = 0; i < 3; i++)
	{
		thirdColumn += square[i][2];                                      //get c3
	}
	for (int i = 0; i < 3; i++)
	{
		topLeftBotRight += square[i][i];                                  //get NW2SE Diagonal
	}
	for (int i = 0, j = 2; i < 3; i++, j--)
	{
		botLeftTopRight += square[j][i];                                  //get SW2NE Diagonal
	}

	if (firstRow != secondRow)                                            //compares r1 & r2
	{
		return false;
	}
	else if (firstRow != thirdRow)                                        //compares r1 & r3
	{
		return false;
	}
	else if (firstRow != firstColumn)                                     //compares r1 and c1
	{
		return false;
	}
	else if (firstRow != secondColumn)                                    //compares r1 & c2
	{
		return false;
	}
	else if (firstRow != thirdColumn)                                     //compares r1 & c3
	{
		return false;
	}
	else if (firstRow != topLeftBotRight)                                 //compares r1 & NW2SE Diagonal
	{
		return false;
	}
	else if (firstRow != botLeftTopRight)                                 //compares r1 & SW2NE Diagonal
	{
		return false;
	}
	else                                                                  //if magic square 
	{
		return true;
	}
}

//*******************************************************************************************************
// This program determines if a three by three square is a magic square.
//
// Please enter the nine integer values that make up the three by three square.
//
// Begin by entering the numbers in the first row, from left to right.
//
// Then proceed to do the same for the second row, and then, the third row.
//
// Hit the enter key one time each time you enter an integer.
//
// Entering row 1, column 1: 4
// Entering row 1, column 2: 9
// Entering row 1, column 3: 2
// Entering row 2, column 1: 3
// Entering row 2, column 2: 5
// Entering row 2, column 3: 7
// Entering row 3, column 1: 8
// Entering row 3, column 2: 1
// Entering row 3, column 3: 6
//
// Press any key to continue . . .
//
// This program determines if a three by three square is a magic square.
//
// Please enter the nine integer values that make up the three by three square.
//
// Begin by entering the numbers in the first row, from left to right.
//
// Then proceed to do the same for the second row, and then, the third row.
//
// Hit the enter key one time each time you enter an integer.
//
// Entering row 1, column 1: 9
// Entering row 1, column 2: 1
// Entering row 1, column 3: 1
// Entering row 2, column 1: 4
// Entering row 2, column 2: 2
// Entering row 2, column 3: 3
// Entering row 3, column 1: 9
// Entering row 3, column 2: 3
// Entering row 3, column 3: 3
//
// Press any key to continue . . .
//
// This program determines if a three by three square is a magic square.
//
// Please enter the nine integer values that make up the three by three square.
//
// Begin by entering the numbers in the first row, from left to right.
//
// Then proceed to do the same for the second row, and then, the third row.
//
// Hit the enter key one time each time you enter an integer.
//
// Entering row 1, column 1: 2
// Entering row 1, column 2: 7
// Entering row 1, column 3: 6
// Entering row 2, column 1: 9
// Entering row 2, column 2: 5
// Entering row 2, column 3: 1
// Entering row 3, column 1: 4
// Entering row 3, column 2: 3
// Entering row 3, column 3: 8
//
// Press any key to continue . . .
//
//*******************************************************************************************************