// Chapter 6 - Assignment 13, Order Status
// This program displays the status of an order for copper wire.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getStockInfo (int &, int &, double &);
void displayStatus(int, int, double = 10.00);

int main()
{
	int ordered = 0,           // Number of spools ordered
		 inStock = 0;           // Number of spools in stock
	double specialChgs = 0.0;  // Any special charges to ship the spools

	getStockInfo(ordered, inStock, specialChgs);

	if (specialChgs >= .01)
		displayStatus(ordered, inStock, 10.0 + specialChgs);
  	else
		displayStatus(ordered, inStock);

	return 0;
}// end of main function

/*************************************************************
 *                        getStockInfo                       *
 * This function is called by main to input and validate     *
 * the number of spools ordered, the number in stock, and    *
 * any special shipping charges. These values are stored in  *
 * reference parameters.                                     *
 *************************************************************/
void getStockInfo(int &ord, int &stock, double &specChg)
{
	cout << "How many spools were ordered? ";
	cin  >> ord;
   while (ord < 1)
   {	cout << "The number of spools ordered must be one or more. "
	        << "Please re-enter: ";
		cin  >> ord;
	} 
   
	cout << "How many spools are in stock? ";
	cin  >> stock;
   while (stock < 0)
   {	cout << "The number of spools in stock must be zero or more. "
	        << "Please re-enter: ";
		cin  >> stock;
	}
   
	cout << "\nAmount of any special shipping charges above\n"
        << "the regular $10 per spool rate (0 for none): ";
	cin  >> specChg;
   while (specChg < 0.0)
   {	cout << "The extra shipping charges must be zero or more. "
	        << "Please re-enter: ";
		cin  >> specChg;
	}
}// end of function getStockInfo

/***************************************************************
 *                       displayStatus                         *
 * This function is called by main and passed as arguments the *
 * number of spools ordered, the number in stock, and the      *
 * shipping charge per spool. The default value for shipping   *
 * charge is $10.00. This information is used to display an    *
 * order status report.                                        *
 ***************************************************************/
void displayStatus(int numOrdered, int inStock, double unitShipChg)
{
	const double UNIT_SPOOL_COST = 100.00;

	int shipNow = numOrdered,  // Number of spools available to ship now
		 backOrder = 0;         // Number of spools that must be
	                           //   back ordered to fill the order
         
	double spoolCost,          // Amount customer is being billed for
		                        //   the spools being shipped now
			 shipCharges,        // Shipping charges for this shipment
		    totalCharges;       // Cost of shipped spools + shipping chgs 
			
	if (numOrdered > inStock)
   {  
		shipNow   = inStock;
   	backOrder = numOrdered - inStock;
	}
   spoolCost    = shipNow * UNIT_SPOOL_COST;
	shipCharges  = shipNow * unitShipChg;
   totalCharges = spoolCost + shipCharges;

	cout << fixed << showpoint <<setprecision(2);
	cout << "\n\n     *** Order Summary *** \n\n";
	cout << "Spools ordered :          " << setw(5) << numOrdered << endl;
   cout << "Spools in this shipment:  " << setw(5) << shipNow << endl;
   
	if (shipNow < numOrdered)
		cout << "Spools back ordered:      " << setw(5) << backOrder << endl;
   
   cout << "\n   Charges for this shipment\n"
        <<   "   -------------------------\n";
   cout << "Spool charges:        $" << setw(8) << spoolCost << endl;
   cout << "Shipping charges:     $" << setw(8) << shipCharges << endl;
   cout << "Total this shipment:  $" << setw(8) << totalCharges << endl;
}// end of function displayStatus
