
//  Chapter 13 -- Assignment 12:  Inventory Screen Report

#include <iostream>
#include <fstream>
using namespace std;

const int DESC_LEN = 51;
const int DATE_LEN = 11;

// Declaration of Invtry structure
struct Invtry
{
	char desc[51];			// Description
	int qty;					// Quantity
	float wholesale;		// Wholesale cost
	float retail;			// Retail price
	char date[11];			// Date added to inventory};
};


int main()
{
	fstream Inventory;
	Invtry record;
    double totalWholesale = 0, totalRetail = 0;
    int totalQty = 0, count = 0;

    Inventory.open("invtryItems.dat", ios::in | ios::binary);
    if (Inventory.fail())
    {
        cout << "Error opening file.\n";
        return 1;
    }

	Inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    while (!Inventory.eof())
    {
		if (Inventory.fail())
		{
			cout << "Error locating record.\n";
			Inventory.close();
			return 2;
		}
		count++;
        totalQty += record.qty;
        totalWholesale += record.wholesale * record.qty;
        totalRetail += record.retail * record.qty;
		Inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	}
    Inventory.close();

	cout << "\n\n* * * * * INVENTORY SCREEN REPORT * * * * *\n\n";
    cout.precision(2);
    cout.setf(ios::fixed | ios::showpoint);
	cout << "  The inventory contained " << count << " separate items.\n";
    cout << "  Total wholesale Value:\t $";
    cout << totalWholesale << endl << endl;
    cout << "  Total retail Value:\t\t $";
    cout << totalRetail << endl << endl;
    cout << "  Number of Items in Inventory:\t " << totalQty << endl << endl;
    cout << "* * * * * * * * * * * * * * * * * * * * * *\n\n\n\n";
    return 0;
}

