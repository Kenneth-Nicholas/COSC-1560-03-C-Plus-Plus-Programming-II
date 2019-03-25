// This program allows the user to edit a specific record in
// the inventory file.
#include <iostream>
#include <fstream>
using namespace std;


// Declaration of Invtry structure
struct Invtry
{
	char desc[31];
	int qty;
	double price;
};

int main()
{
	fstream inventory("invtry.dat", ios::in | ios::out |
	                    ios::binary);
	Invtry record = { "", 0, 0.0 };
	long recNum;


	inventory.seekg(0L, ios::end);
	long pos = inventory.tellg();
	int numRecs = pos/sizeof(record);
	cout << "There are " << numRecs << " records. \n";
	for(int i = 0; i < numRecs; i++)
	{
		inventory.seekg(i * sizeof(record), ios::beg);
		inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
		cout << "Description: ";
		cout << record.desc << endl;
		cout << "Quantity: ";
		cout << record.qty << endl;
		cout << "Price: ";
		cout << record.price << endl << endl;
	}

	cout << "Which record do you want to edit? ";
	cin >> recNum;
	while (recNum >= numRecs)
	{
		cout << "There are only " << numRecs << " records. ";
		cout << "Which record do you want to edit? ";
		cin >> recNum;
	}
	inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	cout << "Description: ";
	cout << record.desc << endl;
	cout << "Quantity: ";
	cout << record.qty << endl;
	cout << "Price: ";
	cout << record.price << endl;
	cout << "Enter the new data:\n";
	cout << "Description: ";
	cin.ignore();
	cin.getline(record.desc, 31);
	cout << "Quantity: ";
	cin >> record.qty;
	cout << "Price: ";
	cin >> record.price;
	inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
	inventory.close();
	return 0;
}
