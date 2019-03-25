// Chapter 7, Programming Challenge 19: 2D Array Operations
#include <iostream>
using namespace std;

// Constants for the array sizes
const int ROWS = 4;
const int COLS = 5;

// Function prototypes
int getTotal(int [][COLS], int, int);
double getAverage(int [][COLS], int, int);
int getRowTotal(int [][COLS], int, int);
int getColumnTotal(int [][COLS], int, int);
int getHighestInRow(int [][COLS], int, int);
int getLowestInRow(int [][COLS], int, int);

int main()
{
	// Array with test data
	int testArray[ROWS][COLS] =
					{ { 1,   2,  3,  4,  5 },
					{   6,   7,  8,  9, 10 },
					{  11,  12, 13, 14, 15 },
					{  16,  17, 18, 19, 20 } };
   
	// Display the total of the array elements.
	cout << "The total of the array elements is "
		 << getTotal(testArray, ROWS, COLS)
		 << endl;
   
	// Display the average of the array elements.
	cout << "The average value of an element is "
		 << getAverage(testArray, ROWS, COLS)
		 << endl;

	// Display the total of row 0.
	cout << "The total of row 0 is "
		 << getRowTotal(testArray, 0, COLS)
		 << endl;

	// Display the total of column 2.
	cout << "The total of col 2 is "
		 << getColumnTotal(testArray, 2, ROWS)
		 << endl;

	// Display the highest value in row 2.      
	cout << "The highest value in row 2 is "
		 << getHighestInRow(testArray, 2, COLS)
		 << endl;

	// Display the lowest value in row 2.
	cout << "The lowest value in row 2 is "
		 << getLowestInRow(testArray, 2, COLS)
		 << endl;
        
	return 0;
}

// ********************************************************
// The getTotal function returns the total of all         *
// the elements in the array.                             *
// ********************************************************
int getTotal(int array[][COLS], int rows, int cols)
{
	int total = 0;
      
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
			total += array[row][col];
	}
      
	return total;
}

// ********************************************************
// The getAverage function returns the averave value      *
// of the elements in the array.                          *
// ********************************************************
double getAverage(int array[][COLS], int rows, int cols)
{
	// Calculate the number of elements in the array.
	// Use a double so we can avoid integer division
	// later.
	double numElements = rows * cols;
   
	// Get the average of the elements.
	double average = getTotal(array, rows, cols) / numElements;
   
	// Return the average.
	return average;
}

// ********************************************************
// The getRowTotal function returns the total of the      *
// the elements in the specified row of the array.        *
// ********************************************************
int getRowTotal(int array[][COLS], int rowToTotal, int cols)
{
	int total = 0;
      
	for (int col = 0; col < cols; col++)
	{
		total += array[rowToTotal][col];
	}
      
	return total;
}

// ********************************************************
// The getColTotal function returns the total of the      *
// the elements in the specified column of the array.     *
// ********************************************************
int getColumnTotal(int array[][COLS], int colToTotal, int rows)
{
	int total = 0;
      
	for (int row = 0; row < rows; row++)
	{
		total += array[row][colToTotal];
	}
      
	return total;
}

// ********************************************************
// The getHighestInRow function returns the highest       *
// value in the specified row.                            *
// ********************************************************
int getHighestInRow(int array[][COLS], int rowToSearch, int cols)
{
	int highest = array[rowToSearch][0];
      
	for (int col = 1; col < cols; col++)
	{
		if (array[rowToSearch][col] > highest)
			highest = array[rowToSearch][col];
	}
   
	return highest;
}

// ********************************************************
// The getLowestInRow function returns the lowest         *
// value in the specified row.                            *
// ********************************************************
int getLowestInRow(int array[][COLS], int rowToSearch, int cols)
{
	int lowest = array[rowToSearch][0];
      
	for (int col = 1; col < cols; col++)
	{
		if (array[rowToSearch][col] < lowest)
			lowest = array[rowToSearch][col];
	}
   
	return lowest;
}