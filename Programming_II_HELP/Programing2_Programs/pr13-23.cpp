// This program displays the contents of the inventory file.
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
	fstream inventory("invtry.dat", ios::in | ios::binary);
	Invtry record = { "", 0, 0.0 };

	// Now read and display the records
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	while (!inventory.fail())
	{
		cout << "Description: ";
		cout << record.desc << endl;
		cout << "Quantity: ";
		cout << record.qty << endl;
		cout << "Price: ";
		cout << record.price << endl << endl;
        inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	}
	inventory.close();
	return 0;
}
