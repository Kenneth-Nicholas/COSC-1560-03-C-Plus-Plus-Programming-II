// This program uses the Account class to perform simple banking 
// operations. This file should be combined into a project along with
// the Account.h, Account.cpp, CharRange.h, and CharRange.cpp files.
#include <iostream>
#include <iomanip>
#include <cctype>
#include "AccountSingleH.h"
#include "CharRange.h"
using namespace std;

// Function prototypes
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
   Account savings;           // Account object to model savings account
   CharRange input('A', 'G'); // CharRange object to do input validation
   char choice;

   cout << fixed << showpoint << setprecision(2);
   do                   
   {
      displayMenu();
      choice = input.getChar(); // This returns only an uppercase A - G
      switch(choice)
      {
         case 'A': cout << "The current balance is $";
                   cout << savings.getBalance() << endl;
                   break;
         case 'B': cout << "There have been ";
                   cout << savings.getTransactions()
                        << " transactions.\n";
                   break;
         case 'C': cout << "Interest earned for this period: $";
                   cout << savings.getInterest() << endl;
                   break;
         case 'D': makeDeposit(savings);
                   break;
         case 'E': withdraw(savings);
                   break;
         case 'F': cout << "$" << savings.calcInterest() << " interest added.\n";
      }
   } while(choice != 'G');
   return 0;
}

//***************************************************************
//                        displayMenu                           *
// This function displays the user's menu on the screen.        *
//***************************************************************
void displayMenu()
{
   cout << "\n                MENU\n\n";
   cout << "a) Display the account balance\n";
   cout << "b) Display the number of transactions\n";
   cout << "c) Display interest earned for this period\n";
   cout << "d) Make a deposit\n";
   cout << "e) Make a withdrawal\n";
   cout << "f) Add interest for this period\n";
   cout << "g) Exit the program\n\n";
   cout << "Enter your choice: ";
}

//***************************************************************
//                        makeDeposit                           *
// This function accepts a reference to an Account object.      *
// The user is prompted for the dollar amount of the deposit,   * 
// and the makeDeposit member of the Account object is          *
// then called.                                                 *
//***************************************************************
void makeDeposit(Account &account)
{
   double dollars;

   cout << "Enter the amount of the deposit: ";
   cin  >> dollars;
   cin.ignore();
   account.makeDeposit(dollars);
}

//***************************************************************
//                        withdraw                              *
// This function accepts a reference to an Account object.      *
// The user is prompted for the dollar amount of the withdrawal,* 
// and the withdraw member of the Account object is then called.*
//***************************************************************
void withdraw(Account &account)
{
   double dollars;

   cout << "Enter the amount of the withdrawal: ";
   cin  >> dollars;
   cin.ignore();
   if (!account.withdraw(dollars))
      cout << "ERROR: Withdrawal amount too large.\n\n";
}
