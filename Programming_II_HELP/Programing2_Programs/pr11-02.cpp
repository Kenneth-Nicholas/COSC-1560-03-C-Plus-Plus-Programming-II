

// This program demonstrates a static class member variable.
#include <iostream>
#include <iomanip>
#include "budget.h"            // For Budget class declaration
using namespace std;

double Budget::corpBudget = 0;  // Definition of static member of 
								// Budget class

const int N_DIVISIONS = 4;
int main()
{
      Budget divisions[N_DIVISIONS];
      int count;

      for (count = 0; count < N_DIVISIONS; count++)
      {
		 double bud;

		 cout << "Enter the budget request for division ";
		 cout << (count + 1) << ": ";
		 cin >> bud;
		 divisions[count].addBudget(bud);
      }
      cout << setprecision(2);
      cout << showpoint << fixed;
      cout << "\nHere are the division budget requests:\n";
      for (count = 0; count < N_DIVISIONS; count++)
      {
        cout << "\tDivision " << (count + 1) << "\t$ ";
	  cout << divisions[count].getDivBudget() << endl;
      }
      cout << "\tTotal Budget Requests:\t$ ";
	  cout << divisions[0].getCorpBudget() << endl;
//	  cout << Budget::corpBudget << endl;   //can't access private member
      //cout << divisions[1].getCorpBudget() << endl; 
      //cout << divisions[2].getCorpBudget() << endl; 
      //cout << divisions[3].getCorpBudget() << endl; 
      return 0;
}
