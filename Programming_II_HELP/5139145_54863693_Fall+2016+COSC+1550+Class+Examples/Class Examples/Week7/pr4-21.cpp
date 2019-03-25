// This program uses relational operators to compare a string
// entered by the user with valid stereo part numbers.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const double APRICE = 249.0,
		          BPRICE = 299.0;
	string partNum;

	cout << "The stereo part numbers are:\n";
	cout << "Boom Box   : part number S147-29A \n";
	cout << "Shelf Model: part number S147-29B \n";
	cout << "Enter the part number of the stereo you\n";
	cout << "wish to purchase: ";	
	cin  >> partNum;
	cout << fixed << showpoint << setprecision(2);

	if (partNum == "S147-29A")
		cout << "The price is $" << APRICE << endl;
	else if (partNum == "S147-29B")
		cout << "The price is $" << BPRICE << endl;
	else
		cout << partNum << " is not a valid part number.\n";
	return 0;
}
