// This program takes daily sales figures for one week
// and calculates their total.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DAYS = 7;      // Number of days to process
	double total = 0.0;
	//int count = 1;
	//for ( ; count <= NUM_DAYS; count++)
	//double total;
	//int count;
	for (int count = 1; count <= NUM_DAYS; count++)
	{
		double sales;
		cout << "Enter the sales for day " << count << ": ";
		cin  >> sales;
		while(sales < 0)  // validate sales input >= 0
		{
			cout << "Sales can not be less than 0.0\n\n";
			cout << "Enter the sales for day " << count << ": ";
			cin  >> sales;
		}
		total += sales;
	}
//	cout << sales;  // sales does not exist here
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales are $" << total << endl;
	return 0;
}
