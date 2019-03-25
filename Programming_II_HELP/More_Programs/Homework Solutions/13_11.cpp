//  Written by C++ Programmer
//  Chapter 13
//  Assignment 11:  Inventory Program

#include <iostream>
#include <fstream>
using namespace std;

// Declaration of Invtry structure

struct Invtry
{
	char desc[51];
	int qty;
	float wholeSale;
	float retail;
	char date[11];
};

//Function Prototypes
void addRecord();
void viewRecord();
void changeRecord();

fstream inventory;

int main()
{
	int choice;
   
	do
        {
		cout << "\n1. Add a new record\n";
		cout << "2. View an existing record\n";
		cout << "3. Change an existing record\n";
		cout << "4. Exit\n\n";

		do
		{
			cout << "Enter your choice (1-4): ";
   			cin >> choice;
			if (choice < 1 || choice > 4)
      		        cout << "Enter 1, 2, 3, or 4\n";
		} while (choice < 1 || choice > 4);
	
		switch (choice)
   		{
   		case 1:  
			addRecord();
			break;
		case 2:	
			viewRecord();
			break;
            case 3:
			changeRecord();
	   }
   } while (choice != 4);
   return 0;

}

//*******************************
// Add a record                 *
//*******************************
void addRecord()
{
   Invtry record;

   inventory.open("invtryItems.dat", ios::out | ios::app | ios::binary);
   if (inventory.fail())
   {
   	cout << "Error opening file.\n";
      return;
   }
   cin.ignore();
   cout << "\nEnter the following inventory data:\n";
   cout << "Description: ";
   cin.getline(record.desc, 31);
	
   do
   {
      cout << "Quantity: ";
	cin >> record.qty;
      if (record.qty < 0)
           cout << "Enter a positive value, please.\n";
   } while (record.qty < 0);

   do
   {
       cout << "Wholesale cost: ";
       cin >> record.wholeSale;
       if (record.wholeSale < 0)
       cout << "Enter a positive value, please.\n";
   } while (record.wholeSale < 0);

   do
   {
       cout << "Retail price: ";
       cin >> record.retail;
       if (record.retail < 0)
           cout << "Enter a positive value, please.\n";
   } while (record.retail < 0);
	
   cout << "Date added to inventory: ";
   cin >> record.date;

   inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
	
   if (inventory.fail())
       cout << "Error writing record to file.\n";
   else
       cout << "record written to file.\n\n";
   inventory.close();
}

//*********************************
// view a record                  *
//*********************************
void viewRecord()
{
	Invtry record;
	long recNum;

	inventory.open("invtryItems.dat", ios::in | ios::binary);

	if (inventory.fail())
	{
            cout << "Error opening file.\n";
            return;
	}
	cout << "\nEnter the record number of the item: ";
	cin >> recNum;
	inventory.seekg(recNum * sizeof(record), ios::beg);
	
	if (inventory.fail())
	{
   		cout << "\nError locating record.\n";
		inventory.close();
		return;
	}
	inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	inventory.close();

	cout << "Description: ";
	cout << record.desc << endl;
	cout << "Quantity: ";
	cout << record.qty << endl;
	cout << "Wholesale cost: ";
	cout << record.wholeSale << endl;
	cout << "Retail price: ";
	cout << record.retail << endl << endl;
	cout << "Date: ";
	cout << record.date << endl << endl;
	cout << "Press any key to continue...\n ";
	cin.ignore();
}

//*******************************
// Change a record              *
//*******************************
void changeRecord()
{
   Invtry record;
   long recNum;

   inventory.open("invtryItems.dat", ios::in | ios::out | ios::binary);
   if (inventory.fail())
   {
       cout << "Error opening file.\n";
       return;
   }
   
   cout << "Enter the record number of the item: ";
   cin >> recNum;
   inventory.seekg(recNum * sizeof(record), ios::beg);
	
   if (inventory.fail())
   {
       cout << "Error locating record.\n";
       inventory.close();
       return;
   }

   cout << "Current record contents:\n";
   inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
  
   cout << "Description: ";
   cout << record.desc << endl;
   cout << "Quantity: ";
   cout << record.qty << endl;
   cout << "Wholesale cost: ";
   cout << record.wholeSale << endl;
   cout << "Retail price: ";
   cout << record.retail << endl << endl;
   cout << "Date: ";
   cout << record.date << endl << endl;
   cout << "Enter the new data:\n";
   cin.ignore();

   cout << "Description: ";
   cin.getline(record.desc, 31);
   cout << "Quantity: ";
   cin >> record.qty;
   cout << "Wholesale cost: ";
   cin >> record.wholeSale;
   cout << "Retail price: ";
   cin >> record.retail;
   cout << "Date added to inventory: ";
   cin >> record.date;

   inventory.seekp(recNum * sizeof(record), ios::beg);
   inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
   cout << "Press any key to continue... ";
   cin.ignore();
   inventory.close();
}


