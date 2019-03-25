//	This program asks for sales figures for three days. 
//	The total sales are calculated and displayed in a table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double day1, day2, day3, total;

	cout << "Enter the sales for day 1: ";
	cin  >> day1;
	cout << "Enter the sales for day 2: ";
	cin  >> day2;
	cout << "Enter the sales for day 3: ";
	cin  >> day3;
	total = day1 + day2 + day3;
	cout << "\nSales Figures\n";
	cout << "-------------\n";
	cout << setprecision(2) << fixed << showpos;// << showpoint;
	cout << left << setw(8) << "Day 1:" <<"$"<< right << setw(9) << day1 << setw(8) << "dollars" << endl;
	cout << left << setw(8) << "Day 2:" <<"$"<< right << setw(9) << day2 << setw(8) << "dollars" << endl;
	cout << left << setw(8) << "Day 3:" <<"$"<< right << setw(9) << day3 << setw(8) << "dollars" << endl;
	cout << left << setw(8) << "Total:" <<"$"<< right << setw(9) << total << setw(8) << "dollars" << endl;
	
	cout << endl <<endl;
	cout << "Day 1:  $" << setw(9) << day1 << " dollars" << endl;
	cout << "Day 2:  $" << setw(9) << day2 << " dollars" << endl;
	cout << "Day 3:  $" << setw(9) << day3 << " dollars" << endl;
	cout << "Total:  $" << setw(9) << total << " dollars" << endl;
	return 0;
}
