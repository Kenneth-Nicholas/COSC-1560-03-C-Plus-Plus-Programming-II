// Chapter 7, Programming Challenge 20: Theater Seating
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// Constants for rows and columns
const int ROWS = 15;
const int COLS = 30;

// Function prototypes
void displayMenu();
int  getChoice();
void displaySeats(const char [][COLS]);   
void displayPrices(const double[]);
void displaySales(double);
void purchaseTicket(char [][COLS], const double[], double&);

int main()
{
	char theater[ROWS][COLS];
	double ticketPrice[ROWS] = { 0.0 };
	double totalSales = 0.0;
	int row;
	int seat;
	int choice;
	ifstream rowPrice;
	rowPrice.open("PriceList.dat");

	// Initialize theater with #'s -- all seats available
	for(row = 0; row < ROWS; row++)
		for (seat = 0; seat < COLS; seat++)
			theater[row][seat] = '#';

	// Get seat prices for each of the ROWS rows
		if (!rowPrice)
		{
			cout << "Error opening file.  Please enter data manually.\n";
			for (row = 0; row < ROWS; row++)
			{
				cout << "Please enter ticket price for Row " << setw(2) << row + 1
					<< ": ";
				cin >> ticketPrice[row];
			}
		}
		else
		{
			for (row = 0; row < ROWS; row++)
			{
				rowPrice >> ticketPrice[row];
			}
			rowPrice.close();
		}

   
	// Set print formats
	cout << fixed << showpoint << setprecision(2);  

	do
	{ 
		displayMenu();
		choice = getChoice();
      
		switch(choice)
		{
			case 1: displaySeats(theater);
			break;

			case 2: displayPrices(ticketPrice);
			break;

			case 3: displaySales(totalSales);
			break;

			case 4: purchaseTicket(theater, ticketPrice, totalSales);
			break;

			default: // Do nothing
			break;
		} 

	} while (choice != 5); 

	return 0;
}

// ********************************************************
// Function displayMenu                                   *
// Displays the menu of program options                   *
// ********************************************************
void displayMenu()
{
   // Display menu of choices
   cout << "\n\n\n\t\tC++ Theatre" << endl << endl;
   cout << "\n\t1.  View Available Seats";
   cout << "\n\t2.  View Seating Prices";
   cout << "\n\t3.  View Ticket Sales";
   cout << "\n\t4.  Purchase a Ticket";
   cout << "\n\t5.  Exit the Program\n\n";
   cout << "\n\tEnter your choice(1-5):  ";
}

// ********************************************************
// Function getChoice                                     *
// This function inputs, validates, and returns the       *
// user's choice                                          *
// ********************************************************
int getChoice()
{
	int choice;

	// Get and validate user's choice
	cin  >> choice;
	while (choice < 1 || choice > 5)
	{  
		cout << "Choice must be between 1 and 5. Please re-enter: ";
		cin  >> choice;
	}

	//Return the choice
	return choice;
}

// ********************************************************
// Function displaySeats                                  *
// Displays a chart showing sold and available seats      *
// ********************************************************
void displaySeats(const char theater[][COLS])
{
	cout << "\n\t\tSeats";
	cout << "\n        123456789012345678901234567890" << endl;

	for(int row = 0; row < ROWS; row++)
	{
		cout << "\nRow " << setw(2) << row+1 << "\t";

		for (int seat = 0; seat < COLS; seat++)
		{  
			cout << theater[row][seat];
		}
	}

	cout << "\n\n\n\tLegend:\t*  =  Sold";
	cout << "\n\t\t#  =  Available";

	cout << "\n\n\nPress the Enter key to continue.";
	cin.ignore();
	cin.get();

}

// ********************************************************
// Function displayPrices                                 *
// Displays ticket prices for each row                    *
// ********************************************************
void displayPrices(const double price[])
{
   cout << "\nTicket Prices By Row  " << endl << endl;
   cout << "      Row    Price" << endl;
   cout << "      ---    -----" << endl;
   
   for (int row = 0; row < ROWS; row++)
   {
      cout << setw(8) << row+1 << setw(10) << price[row] << endl;
   }

   cout << "\n\n\nPress the Enter key to continue.";
   cin.ignore();
   cin.get();
}

// ********************************************************
// Function purchaseTicket                                *
// Handles ticket purchases                               *
// ********************************************************
void purchaseTicket(char theater[][COLS], const double price[], 
                    double &totSales)
{
	int row;
	int seat;
	int numTickets = 0;
	double totPrice = 0;
	char response;

	cout << "\n\t\t        C++ Theatre" << endl;
	cout << "\t\tTicket Purchase Opportunity" << endl << endl;
   
	cout << "Do you wish to view the chart of available seats \n"
	     << "before making your selections (y/n)? ";
	cin  >> response;

	if (toupper(response) == 'Y')
		displaySeats(theater);

	do
	{  
		cout << "\nPlease enter desired row number (1-"
		     << ROWS << "): ";
		cin >> row;

		while (row < 1 || row > ROWS)
		{ 
			cout << "Row must be between 1 and "
				 << ROWS << ". Please re-enter: ";
			cin  >> row;
		}

		cout << "\nPlease enter desired seat number (1-"
			 << COLS << "): ";
		cin >> seat;

		while (seat < 1 || seat > COLS)
		{  
			cout << "Seat must be between 1 and "
				 << COLS << ". Please re-enter: ";
			cin  >> seat;
		}

		if (theater[row-1][seat-1] == '#')  // if the seat is available
		{
			theater[row-1][seat-1] = '*';    // mark the seat is taken
			numTickets++;                    // add to patron's ticket total
			totPrice += price[row-1];        // add to patron's $ total
			cout << "\nPurchase confirmed\n";
		}
		else  // seat has been sold
		{
			cout << "\nSorry.  That seat has been sold.\n";
		}

		cout << "\nWould you like to purchase another seat (y/n)? ";
		cin >> response;

	} while (toupper(response) == 'Y');

	// Display a purchase summary for the patron
	cout << "\n\nYou have purchased a total of " << numTickets 
	<< " tickets " << "for a total price of $" << totPrice;
   
	// Add patron's purchases to theater total puchases
	totSales += totPrice;
}

// ********************************************************
// Function displaySales                                  *
// Displays total sales information                       *
// ********************************************************
void displaySales(double totalSales)
{
	cout << "\n\nTotal Sales to Date:  $" << totalSales << "\n\n";
}