//  Written by C++ Programmer
//  Chapter 13
//  Assignment 11:  Inventory Program
#include <iostream>
#include <fstream>

using namespace std;

// Declaration of Inventory structure

struct Inventory
{
	char desc[51];			// Description
	int qty;					// Quantity
	float wholeSale;		// Wholesale cost
	float retail;			// Retail price
	char date[11];			// Date added to inventory
};

// Function prototypes
void addRecord(fstream &, int &);
void viewRecord(fstream &, int &);
void changeRecord(fstream &, int &);
void displayRecord(Inventory);
void getRecord(Inventory &);
long recordOffset(int);	
int getRecordNumber(int);
int getMaxRecords(fstream &);


int main()
{
	fstream inventoryFile;
	int choice, maxRecords = 0;

	do
	{
		maxRecords = getMaxRecords(inventoryFile);
		cout << "\nThere are " << maxRecords << " items in the inventory.\n\n";
		if(maxRecords < 0)
		{
			cout << "Unable to open file.";
			return 0;
		}
		cout << "1. Add a new record\n";
		cout << "2. Change an existing record\n";
		cout << "3. View an existing record\n";
		cout << "4. Exit\n\n";

		cout << "Enter your choice (1-4): ";
		cin >> choice;
		while (choice < 1 || choice > 4)
		{
			cout << "Enter 1, 2, 3, or 4: ";
			cin >> choice;
		}
	
		switch (choice)
   		{
   		case 1:  
				addRecord(inventoryFile, maxRecords);
				maxRecords = getMaxRecords(inventoryFile);
				
				break;
		case 2:	
				changeRecord(inventoryFile, maxRecords);
				break;
		case 3:
				viewRecord(inventoryFile, maxRecords);
	   }
   } while (choice != 4);

   return 0;
}

//************************************************
// Function addRecord                            *
// This function gets the data for a record      *
// and writes it to the file.                    *
//************************************************

void addRecord(fstream &invFile, int & maxRecords)
{
	Inventory record;

	invFile.open("invtryItems.dat", ios::out | ios::app | ios::binary);
	if (invFile.fail())
	{
		cout << "Error opening file.\n";
		return;
	}

    cin.ignore();
	cout << "\nEnter the following inventory data:\n";
	getRecord(record);
	
	// Write the record.
	invFile.write(reinterpret_cast<char *>(&record), sizeof(record));
	
	if (invFile.fail())
		cout << "Error writing record to file.\n";
	else
	{
		cout << "record written to file.\n\n";
		maxRecords++;
	}
	invFile.close();
}

//************************************************
// Function viewRecord                           *
// This function reads a specified record from   *
// the file and displays it on the screen.       *
//************************************************

void viewRecord(fstream &invFile, int & maxRecords)
{
	Inventory record;
	long recNum;

	// Open the file.
	invFile.open("invtryItems.dat", ios::in | ios::binary);
	if (invFile.fail())
	{
            cout << "Error opening file.\n";
            return;
	}

	// Get the record number from the user.
	if(maxRecords < 1)
	{
		cout << "The inventory file is empty.  PLease add a record before attempting to access the data.\n";
		return;
	}
	recNum = getRecordNumber(maxRecords);
	// Seek to the record.
	invFile.seekg(recordOffset(recNum), ios::beg);
	if (invFile.fail())
	{
   		cout << "\nError locating record.\n";
		invFile.close();
		return;
	}

	// Read the record.
	invFile.read(reinterpret_cast<char *>(&record), sizeof(record));
	invFile.close();

	// Display the record.
	displayRecord(record);
	system("PAUSE");
}

//************************************************
// Function changeRecord                         *
// This function reads a specified record from   *
// the file and allows the user to change it.    *
//************************************************

void changeRecord(fstream &invFile, int & maxRecords)
{
	Inventory record;
    long recNum;

   // Open the file.
	invFile.open("invtryItems.dat", ios::in | ios::out | ios::binary);
   if (invFile.fail())
   {
       cout << "Error opening file.\n";
       return;
   }
   
 	// Get the record number from the user.
	if(maxRecords < 1)
	{
		cout << "The inventory file is empty.  PLease add a record before attempting to access the data.\n";
		return;
	}
	recNum = getRecordNumber(maxRecords);

   // Seek to the record.
   invFile.seekg(recordOffset(recNum), ios::beg);	
    if (invFile.fail())
    {
       cout << "Error locating record.\n";
       invFile.close();
       return;
    }
	cin.ignore();

	// Read the record.	
	invFile.read(reinterpret_cast<char *>(&record), sizeof(record));

	// Display the record.
	displayRecord(record);
	system("PAUSE");

	// Get the New Data
	// Get the description.
	getRecord(record);

  // Rewind to the start of the record
   invFile.seekg(recordOffset(recNum), ios::beg);	
    if (invFile.fail())
    {
       cout << "Error locating record.\n";
       invFile.close();
       return;
    }

	// Write the record with the new data.
	invFile.write(reinterpret_cast<char *>(&record), sizeof(record));
	invFile.close();
	system("PAUSE");
}


int getMaxRecords(fstream & invFile)
{
	invFile.open("invtryItems.dat", ios::in | ios::binary);
	if (invFile.fail())
	{
		cout << "Error opening file.\n";
		return -1;
	}
	invFile.seekg(0L,ios::end);
	long numBytes = invFile.tellg();
	invFile.close();
	return numBytes / sizeof(Inventory);
}

int getRecordNumber(int max)
{
	int recNum;
	// Get the record number from the user.
	do {
		cout << "\nEnter the record number of the item: ";
		cin >> recNum;
		if (recNum > max || recNum < 1)
			cout << "That record does not exist. Please enter a number between 1 and " << max << endl;
	}while (recNum > max || recNum < 1);
	return recNum;
}

void displayRecord(Inventory record)
{
	// Display the record.
	cout << "Description: ";
	cout << record.desc << endl;
	cout << "Quantity: ";
	cout << record.qty << endl;
	cout << "Wholesale cost: ";
	cout << record.wholeSale << endl;
	cout << "Retail price: ";
	cout << record.retail << endl << endl;
	cout << "Date Entered: ";
	cout << record.date << endl << endl;
}

void getRecord(Inventory & record)
{
	// Get the New Data
	// Get the description.
   cout << "\nEnter the following inventory data:\n";
   cout << "Description: ";
   cin.getline(record.desc, 51);
   while (strlen(record.desc) == 0)
   {
		cout << "Please enter a description: ";
		cin.getline(record.desc, 51);
	}
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
	while (strlen(record.date) == 0)
	{
		cout << "Please enter a date: ";
		cin.getline(record.date, 51);
	}
}

//************************************************************
// Definition of function recordOffset. Accepts an integer as     *
// its argument. Returns the byte number in the file of the  *
// record whose number is passed as the argument.            *
//************************************************************
long recordOffset(int recNum)
{
	return ((recNum -1) * sizeof(Inventory));
}
