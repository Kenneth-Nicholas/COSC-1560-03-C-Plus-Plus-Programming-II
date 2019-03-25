// COSC 1550
// Enter numbers and 
// Get a Total
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int total = 0;
	int ctr = 0;
	int pos;

	cout << "Enter a positive number to add to the total: ";
	cin >> pos;
	while(pos < 0)
	{
		cout << "Enter a positive number to add to the total: ";
		cin >> pos;
	}

	while (ctr < 10)
	{
		total += pos;
		cout << "Loop " << ++ctr << " Number " << pos << " Total " << total << endl;
		if (ctr < 10)
		{
			cout << "Enter a positive number to add to the total: ";
			cin >> pos;
			while(pos < 0)
			{
				cout << "Enter a positive number to add to the total: ";
				cin >> pos;
			}
		}
	}

	cout << "\nThe sum of all the numbers you entered is: " << total << endl << endl;
	return 0;
}