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

	cout << "Enter a positive number to add to the total or -99 to Quit: ";
	cin >> pos;
	while(pos != -99 && pos < 0)
	{
		cout << "Enter a positive number to add to the total or -99 to Quit: ";
		cin >> pos;
	}
	//do
	while(pos != -99)
	{
		//if (pos != -99)
		//{
			total += pos;
			cout << "Loop " << ++ctr << " Number " << pos << " Total " << total << endl;
			cout << "Enter a positive number to add to the total or -99 to Quit: ";
			cin >> pos;
			while(pos != -99 && pos < 0)
			{
				cout << "Enter a positive number to add to the total or -99 to Quit: ";
				cin >> pos;
			}
		//}
	}
	//while(pos != -99);


	cout << "The sum of all the numbers you entered is: " << total << endl;
	return 0;
}