// This program takes daily sales figures over a period of time
// and calculates their total.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int days, 
		 count;              // Counter that controls the loop
	double total = 0.0;     // Initialize accumulator

	cout << "For how many days do you have sales figures? ";
	cin  >> days;
	while(days <= 0)	// input validation (days > 0)
	{
		cout << "Please enter a number greater than 0\n";
		cout << "For how many days do you have sales figures? ";
		cin  >> days;
	}

	count = 1;              // Initialize counter
	while (count <= days)  
	{
		double sales;
		cout << "Enter the sales for day " << count << ": ";
		cin  >> sales;
		while(sales < 0)
		{
			cout << "Please enter a number greater than or equal to 0\n";
			cout << "Enter the sales for day " << count << ": ";
			cin  >> sales;
		}

		total += sales;      // Accumulate running total
		count++;             // Increment counter
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales are $" << total << endl;
	return 0;	
}
