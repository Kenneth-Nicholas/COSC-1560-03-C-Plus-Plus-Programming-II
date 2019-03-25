// Chapter 8 - Assignment 3, Chips and Salsa
// This program produces a sales report for a salsa maker who
// markets 5 types of salsa. It includes total sales for all
// products and identifies the highest and lowest selling product.

#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void getSales(int [], const string [], int);
int getTotal(const int [], int);
int posOfLargest(const int [], int);
int posOfSmallest(const int [], int);

int main()
{
   const int NUM_TYPES = 5;   
   const string name[NUM_TYPES] = 
              {"Mild  ", "Medium", "Sweet ", "Hot   ", "Zesty "};  
   int sales[NUM_TYPES];   // Holds jars sold for each salsa type
   
   int totalJarsSold,
       hiSalesProduct,
       loSalesProduct;
   
   getSales(sales, name, NUM_TYPES);
   
   // Get total sales and high and low selling products
   totalJarsSold  = getTotal(sales, NUM_TYPES);
   hiSalesProduct = posOfLargest(sales, NUM_TYPES);
   loSalesProduct = posOfSmallest(sales, NUM_TYPES);
   
	// Produce the sales report
	cout << endl << endl;
	cout << "     Salsa Sales Report \n\n";
	cout << "Name              Jars Sold \n";
	cout << "____________________________\n";
   
	for (int salsaType = 0; salsaType < NUM_TYPES; salsaType++)
      cout << name[salsaType] << setw(21) << sales[salsaType] << endl;
   
	cout << "\nTotal Sales:" << setw(15) << totalJarsSold << endl;
	cout << "High Seller: "  << name[hiSalesProduct] << " with " << sales[hiSalesProduct] << " jars sold.\n";
    cout << "Low Seller : " <<  name[loSalesProduct] << " with " << sales[loSalesProduct] << " jars sold.\n";    
        
   return 0;
}

/************************************************************
 *                       	getTotal                         *
 * Calculates and returns the total of the values stored in *
 * the myArray passed to the function.                        *
 ************************************************************/
int getTotal(const int myArray[], int numElts)
{
	int total = 0;

	for (int pos = 0; pos < numElts; pos++)
		total += myArray[pos];

	return total;
}


/************************************************************
 *                    posOfLargest                          *
 * Finds and returns the subscript of the myArray position    *
 * holding the largest value in the myArray passed to the     *
 * function.                                                *
 ************************************************************/
int posOfLargest(const int myArray[], int numElts)
{
	int indexOfLargest = 0;
    int largest = myArray[0];
	for (int pos = 1; pos < numElts; pos++)
	{
		if(myArray[pos] > largest)
		{
			largest = myArray[pos];
			indexOfLargest = pos;
		}
    }
	return indexOfLargest;
}


/************************************************************
 *                    posOfSmallest                         *
 * Finds and returns the subscript of the myArray position    *
 * holding the smallest value in the myArray passed to the    *
 * function.                                                *
 ************************************************************/
int posOfSmallest(const int myArray[], int numElts)
{
	int indexOfSmallest = 0;
	
	for (int pos = 1; pos < numElts; pos++)
	{
		if (myArray[pos] < myArray[indexOfSmallest])
			indexOfSmallest = pos;
	}		
	return indexOfSmallest;
}


void getSales(int sales[], const string name[], int NUM_TYPES)
{
	for (int type = 0; type < NUM_TYPES; type++)
	{
		cout << "Jars sold last month of " << name[type] << ": ";
		cin  >> sales[type];
      
		while (sales[type] < 0)
		{	cout << "Jars sold must be 0 or more.  Please re-enter: ";
		   cin  >> sales[type];
		}
	}

}