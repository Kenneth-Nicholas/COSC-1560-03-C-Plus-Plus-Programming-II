// This program demonstrates a static class member function.
#include <iostream>
#include <iomanip>
#include "budget2.h" // For Budget class declaration
using namespace std;

int main()
{
    const int N_DIVISIONS = 4;
	double amount;
        int count;

	cout << "Enter the main office's budget request: ";
	cin >> amount;
	Budget::mainOffice(amount);	
	cout << Budget::getCorpBudget() << endl;  

	Budget divisions[N_DIVISIONS];
	for (count = 0; count < N_DIVISIONS; count++)
	{
		double bud;

		cout << "Enter the budget request for division ";
		cout << (count + 1) << ": ";
		cin >> bud;
		divisions[count].addBudget(bud);
		cout << Budget::getCorpBudget() << endl;  
	}
	cout << setprecision(2);
        cout<< showpoint << fixed;
	cout << "\nHere are the division budget requests:\n";
	for (count = 0; count < N_DIVISIONS; count++)
	{
            cout << "\tDivision " << (count + 1) << "\t$ ";
	    cout << divisions[count].getDivBudget() << endl;
	}
	cout << "\tTotal Requests (including main office): $ ";
	cout << Budget::getCorpBudget() << endl;  
	return 0;
}
