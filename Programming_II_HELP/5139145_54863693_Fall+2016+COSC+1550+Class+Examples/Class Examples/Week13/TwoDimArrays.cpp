// This program demonstrates how to pass a two-dimensional array 
// to a function.
#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_COLS  = 4;     // Number of columns in each array
void showArray(int [][NUM_COLS], int, int); // Function prototype

int main()
{
	const int TBL1_ROWS = 3;     // Number of rows in table1
	const int TBL2_ROWS = 4;     // Number of rows in table2
	const int TBL3_ROWS = 5;     // Number of rows in table2

	int table1[TBL1_ROWS][NUM_COLS] = {{1,  2,  3,  4},
	                                   {5,  6,  7,  8},
                                       {9, 10, 11, 12}};

	int table2[TBL2_ROWS][NUM_COLS] = {{ 10,  20,  30,  40},
	                                   { 50,  60,  70,  80},
							           { 90, 100, 110, 120},
							           {130, 140, 150, 160}};


	int table3[TBL3_ROWS][NUM_COLS] = {{ 100,  200,  300,  400},
	                                   { 500,  600,  700,  800},
							           { 900, 1000, 1100, 1200},
							           {1300, 1400, 1500, 1600},
									   {1700, 1800, 1900, 2000}};


	cout << "The contents of table1 are:\n";
	showArray(table1, TBL1_ROWS,NUM_COLS);
	cout << "\nThe contents of table2 are:\n";
	showArray(table2, TBL2_ROWS,NUM_COLS);
	cout << "\nThe contents of table3 are:\n";
	showArray(table3, TBL3_ROWS,NUM_COLS);
	return 0;
}

//******************************************************************
// Function Definition for showArray                               *
// The first argument is a two-dimensional int array with NUM_COLS *
// columns. The second argument, numRows, specifies the number of  *
// rows in the array. The function displays the array's contents.  *
//******************************************************************
void showArray(int arr[][NUM_COLS], int numRows, int numCols)
{
	for (int row = 0; row < numRows; row++)
	{	for (int col = 0; col < numCols; col++)
		{
			cout << setw(5) << arr[row][col] << " ";
		}
		cout << endl;
	}
}
