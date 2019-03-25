// This program illustrates the use of the left and right manipulators.

#include <iostream>
#include <iomanip>        // Needed to use stream manipulators
#include <string>
using namespace std;

int main()
{  
	string month1 = "January",
		   month2 = "February",
		   month3 = "March";
	
	int days1 = 31,
	    days2 = 28,
		days3 = 31;

	double high1 = 22.6,
		   high2 = 37.4,
		   high3 = 53.9;

	int w1 = 11, w2 = 4, w3 = 8;
	cout << fixed << showpoint << setprecision(1);
//	cout << "Month       Days     High\n";
	cout << left << setw(w1) << "Month" << setw(w2) << right << "Days" << setw(w3) << "High" << "\n";
	cout << setw(w1) << setfill('-') << "-" << setw(w2) << right << "----" << setw(w3) << "----" << endl;
	cout << setfill(' ');
	cout << left  << setw(w1) << month1 
		  << right << setw(w2)  << days1 << setw(w3) << high1 << endl;
	cout << left << setw(w1) << month2
		<< right << setw(w2) << days2 << setw(w3) << high2 << endl;
	cout << left << setw(w1) << month3
		<< right << setw(w2) << days3 << setw(w3) << high3 << endl;
	cout << endl;
   return 0;
}
