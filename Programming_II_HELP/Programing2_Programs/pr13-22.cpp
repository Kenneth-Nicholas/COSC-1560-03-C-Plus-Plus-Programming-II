// This program sets up a file of blank inventory records.
#include <iostream>
#include <fstream>
using namespace std;


// Declaration of Invtry structure
struct Invtry
{
	char desc[31];
	int qty;
	float price;
};

int main()
{
	fstream inventory("invtry.dat", ios::out | ios::binary);
	Invtry record = { "", 0, 0.0 };

	// Now write the blank records
	for (int count = 0; count < 5; count++)
	{
          cout << "Now writing record " << count << endl;
          inventory.write(reinterpret_cast<char *>(&record), sizeof(record));
	}
	inventory.close();
	return 0;
}

