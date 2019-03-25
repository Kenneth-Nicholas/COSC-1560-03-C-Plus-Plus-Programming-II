// This program displays the number of days in each month. It uses an
// array of string objects to hold the month names and an int array 
// to hold the number of days in each month. Both are initialized with 
// initialization lists at the time they are created.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void calendar(int [], string [], int);
int main()
{
	const int NUM_MONTHS = 12;
    string name[NUM_MONTHS] = {"January",  "February","March",   "April", 
		                      "May",      "June",    "July",    "August",
						      "September","October", "November","December"};

	int days[NUM_MONTHS] = {31, 28, 31, 30, 
				            31, 30, 31, 31, 
                            30, 31, 30, 31};
	calendar(days, name, NUM_MONTHS);
	return 0;
}


void calendar(int days[], string name[], int NUM_MONTHS)
{
	for (int month = 0; month < NUM_MONTHS; month++)
	{
		cout << setw(9) << left << name[month] << " has ";
		cout << days[month] << " days.\n";
	}

}