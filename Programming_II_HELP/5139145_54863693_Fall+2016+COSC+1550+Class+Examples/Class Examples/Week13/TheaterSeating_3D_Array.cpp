// This program stores and displays theater seat prices.
// It demonstrates how to pass a 3-dimensional array to a function.
// The data is read in from a file.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_SECTIONS = 3,
          ROWS_IN_SECTION = 5,
          SEATS_IN_ROW = 8;

// Function prototypes
void fillArray(double[][ROWS_IN_SECTION][SEATS_IN_ROW], int, int, int);
void showArray(double[][ROWS_IN_SECTION][SEATS_IN_ROW], int, int, int); 

int main()
{   
   // Define 3-D array to hold seat prices
   double seats[NUM_SECTIONS][ROWS_IN_SECTION][SEATS_IN_ROW];   

	fillArray(seats,NUM_SECTIONS,ROWS_IN_SECTION,SEATS_IN_ROW);
	showArray(seats,NUM_SECTIONS,ROWS_IN_SECTION,SEATS_IN_ROW);
	return 0;
}

//*****************************************************************
// Function definition for fillArray                              *
// This function accepts a three-dimensional array as an argument *
// and fills the array with data from a file.                     *
//*****************************************************************
void fillArray(double arr[][ROWS_IN_SECTION][SEATS_IN_ROW], int SECTIONS, int ROWS, int SEATS)
{
	ifstream dataIn;
	dataIn.open("seats.dat");

   if (!dataIn)
      cout << "Error opening file.\n";
   else
   {  for (int section = 0; section < SECTIONS; section++)
        for (int row = 0; row < ROWS; row++)
			   for (int seat = 0; seat < SEATS; seat++)
				   dataIn >> arr[section][row][seat];
	
	   dataIn.close();
   }
}

//*****************************************************************
// Function definition for showArray                              *
// This function accepts a three-dimensional array as an argument *
// and displays the contents of the array.                        *
//*****************************************************************
void showArray(double arr[][ROWS_IN_SECTION][SEATS_IN_ROW], int SECTIONS, int ROWS, int SEATS)
{
	cout << fixed << showpoint << setprecision(2);

	for (int section = 0; section < SECTIONS; section++)
	{	
		cout << "\n\nSection" << (section+1);
		for (int row = 0; row < ROWS; row++)
		{	
			cout << "\nRow " << (row+1) << ": ";
			for (int seat = 0; seat < SEATS; seat++)
				cout << setw(7) << arr[section][row][seat]; 
		}	
 	}
	cout << endl;
}
