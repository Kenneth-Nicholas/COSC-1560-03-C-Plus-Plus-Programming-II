// This program demonstrates a two-dimensional array. 
// The data stored in the array is read in from a file.
#include <iostream>

#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS]; // 2D array with 3 rows and 4 columns
	double totalSales = 0;	          // Accumulates total sales
	double divSales[NUM_DIVS] = {0.0};
	double qtrSales[NUM_QTRS] = {0.0};
	int div, qtr;			             // Loop counters
               // Used to read data from a file
	
      cout << fixed << showpoint << setprecision(2);
      cout << "Quarterly Sales by Division\n\n";

	   // Nested loops are used to read in quarterly sales figures for each
      // division. The data is stored in the array and displayed on the screen.
      for (div = 0; div < NUM_DIVS; div++)
	   {	for (qtr = 0; qtr < NUM_QTRS; qtr++)
		   {
			   cout << "Division "  << (div + 1) 
                 << ", Quarter " << (qtr + 1) << ": $";
            cin >> sales[div][qtr];
            cout << sales[div][qtr] << endl;
		   }
		   cout << endl; // Print blank line.
	  }

	  for(int r = 0; r < 3; r++)
	  {
		  for(int c = 0; c < 4; c++)
			  cout << setw(6) << sales[r][c] << " ";
		  cout << endl;
	  }
		cout << endl;

	  // Nested loops are used to add all the elements.
	   for (div = 0; div < NUM_DIVS; div++)
	   {	for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
			   totalSales += sales[div][qtr];
			   divSales[div] +=  sales[div][qtr];
			}
	   }

	   // Nested loops are used to add all the elements.
	   for (qtr = 0; qtr < NUM_QTRS; qtr++)
	   {
	   	   for (div = 0; div < NUM_DIVS; div++)
		   {
			   qtrSales[qtr] +=  sales[div][qtr];
		   }
	   }



      // Display the total.
	   cout << "The total sales for the company are: $";
	   cout << totalSales << endl;

      // Display the division yearly sales.
	   for (div = 0; div < NUM_DIVS; div++)
	   {
			cout << "The total sales for division " << div+1 << " are: $";
			cout << divSales[div] << endl;
	   }
      // Display the sales by quarter.
	   for (qtr = 0; qtr < NUM_QTRS; qtr++)
	   {
			cout << "The total sales for Quarter " << qtr+1 << " are: $";
			cout << qtrSales[qtr] << endl;
	   }

	return 0;
}
