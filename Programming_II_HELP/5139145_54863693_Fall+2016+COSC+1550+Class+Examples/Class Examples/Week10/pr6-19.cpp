// This program has local and global variables. In the function
// ringUpSale, there is a local variable named tax. There is
// also a global variable with the same name.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
void ringUpSale(); 

// Global variables
const double TAX_RATE = 0.06;
double tax, sale, total;

int main()
{
	char again;

	cout << fixed << showpoint << setprecision(2);
	do
   {	 ringUpSale();
		 cout << "Is there another item to be purchased? ";
		 cin  >> again;
	} while (again == 'y' || again == 'Y');

	tax = sale * TAX_RATE;
	total = sale + tax;
	cout << "\nThe tax for this sale is " << tax << endl;
	cout << "The total is " << total << endl;
	return 0;
}

//******************************************************************
// Definition of function ringUpSale                               *
// This function asks for the quantity and unit price of an item.  *
// It then calculates and displays the sales tax and subtotal      *
// for those items.                                                *
//******************************************************************
void ringUpSale()
{  // Local variables 
	int qty;
	double unitPrice, tax, thisSale, subTotal;

	cout << "\nQuantity: ";
	cin  >> qty;
	cout << "Unit price: ";
	cin  >> unitPrice;
	thisSale = qty * unitPrice; // Get the total unit price
   sale += thisSale;           // Update global variable sale
	tax = thisSale * TAX_RATE;  // Get sales tax for these items
	subTotal = thisSale + tax;  // Get subtotal for these items
	cout << "Price for these items: " << thisSale << endl;
	cout << "Tax for these items: " << tax << endl;
	cout << "SubTotal for these items: " << subTotal << endl;
}
