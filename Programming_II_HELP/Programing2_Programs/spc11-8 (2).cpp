// Chapter 11, Programming Challenge 8: Search Function for Customer Accounts Program
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Declaration of the Customer structure
struct Customer
{
   string name;    // Name
   string address; // Address
   string city;    // City
   string state;   // State
   string zip;     // ZIP code
   string phone;   // Phone number
   double balance; // Account balance
   string lastPay; // Date of last payment
};

// Function prototypes
void getInfo(Customer &);
void showInfo(Customer);
void showSearch(Customer [], string, int);

int main()
{
   // Constant for the number of accounts
   const int NUM_ACCOUNTS = 20;
   
   // Array of Customer structures
   Customer account[NUM_ACCOUNTS];
      
   int maxCust = 0; // Subscript of next account to enter
   int choice;      // User's choice from a menu
   int cust;
   int count;
   string search;
   
   do
   {
	   system("cls");
	   // Display a menu.
      cout << "1. Enter new account information\n";
      cout << "2. Change account information\n";
      cout << "3. Display all account information\n";
      cout << "4. Search for a customer\n";
      cout << "5. Exit the program\n\n";
      
      // Get the user's choice.
      cout << "Enter your choice: ";
      cin >> choice;
      
      // Validate the choice.
      while (choice < 1 || choice > 5)
      {
         cout << "Please nter 1, 2, 3, 4 or 5.\n";
         cout << "Enter your choice: ";
         cin >> choice;
      }

      // Perform the selected operation.
      switch (choice)
      {
         // Enter new account information.
         case 1: 
            cin.ignore();
            getInfo(account[maxCust]);
            cout << "You have entered information"
                 << "for customer number ";
            cout << maxCust << endl;
            maxCust++;
            break;
         
         // Change an existing account.
         case 2:
            // Get the customer number.
            cout << "Customer number: ";
            cin >> cust;
            
            // Validate the customer number.
            while (cust < 0 || cust >= maxCust)
            {
               cout << "ERROR: Invalid Customer Number\n";
               cout << "Enter a valid customer number: ";
               cin >> cust;
            }
            
            // Show the selected account.
            showInfo(account[cust]);
            
            // Get the new account information.
            cin.ignore();
            getInfo(account[cust]);
            break;
            
         // Display all account information.
         case 3:
            cin.ignore();
            for (count = 0; count < maxCust; count++)
            {
               showInfo(account[count]);
               cout << "Press enter to continue...";
               cin.ignore();
            }
            break;
         
         // Search for a customer.
         case 4:  
            cin.ignore();
            cout << "Enter part of the customer name: ";
            getline(cin, search);
            showSearch(account, search, maxCust);
      }
         
   } while (choice != 5);

   return 0;
}

//********************************************************
// Function getInfo                                      *
// This function gets account information from the user  *
// and stores it in the parameter c, which is a Customer *
// structure reference variable.                         *
//********************************************************
void getInfo(Customer &c)
{
   // Get the customer name
   cout << "\nCustomer name: ";
   getline(cin, c.name);
   while (c.name.empty())
   {
      cout << "You must enter a name.\n";
      getline(cin, c.name);
   }

   // Get the customer's address.
   cout << "Customer address: ";
   getline(cin, c.address);
   while (c.address.empty())
   {
      cout << "You must enter an address.\n";
      getline(cin, c.address);
   }

   // Get the customer's city.
   cout << "City: ";
   getline(cin, c.city);
   while (c.city.empty())
   {
      cout << "You must enter a city.\n";
      getline(cin, c.city);
   }

   // Get the customer's state.
   cout << "State: ";
   getline(cin, c.state);
   while (c.state.empty())
   {
      cout << "You must enter a state.\n";
      getline(cin, c.state);
   }
   
   // Get the customer's ZIP code.
   cout << "ZIP code: ";
   getline(cin, c.zip);
   while (c.zip.empty())
   {
      cout << "You must enter a ZIP code.\n";
      getline(cin, c.zip);
   }

   // Get the customer's phone number.
   cout << "Telephone: ";
   getline(cin, c.phone);
   while (c.phone.empty())
   {
      cout << "You must enter a "
           << "telephone number.\n";
      getline(cin, c.phone);
   }

   // Get the account balance.
   cout << "Account balance: ";
   cin >> c.balance;
   while (c.balance < 0)
   {
      cout << "Please enter 0 or geater "
           << "for account balance.\n";
      cin >> c.balance;
   }

   // Get the date of the last payment.
   cin.ignore();
   cout << "Date of last payment: ";
   getline(cin, c.lastPay);
   while (c.lastPay.empty())
   {
      cout << "You must enter the date "
           << "of the last payment.\n";
      getline(cin, c.lastPay);
   }
}
//************************************************************
// Function showInfo                                         *
// This function displays the customer's name, address,      *
// account balance, and date of last payment. The information*
// is passed into the c structure.                           *
//************************************************************

void showInfo(Customer c)
{
   cout << fixed << showpoint << setprecision(2);
   cout << "Customer name: " << c.name << endl;
   cout << "Customer address: " << c.address
        << endl;
   cout << "City: " << c.city << endl;
   cout << "State: " << c.state << endl;
   cout << "Zip: " << c.zip << endl;
   cout << "Telephone: " << c.phone << endl;
   cout << "Account balance: $" << c.balance
        << endl;
   cout << "Date of last payment: " << c.lastPay
        << endl << endl;
}

//************************************************************
// Function showSearch                                       *
// This function's parameters are c, an array of Customer    *
// structures, s a string which holds a customer's name, and *
// max, an integer containing the size of the array. If the  *
// customer's name is found in the array, the entire struct  *
// contents are displayed. If the customer's name is not     *
// found, a message is displayed.                            *
//************************************************************
void showSearch(Customer c[], string s, int max)
{
   bool found = false;	// flag, initailzed to false

   // Step through the array looking for all
   // accounts that match the search criteria.
   for (int count = 0; count < max; count++)
   {
	   //if (c[count].name.find(s) != -1)
	   if (c[count].name == s)
		{
			found = true;
			showInfo(c[count]);
		}
   }
   
   if (!found)
      cout << "Record not found\n";

   cout << "Press enter to continue...";
   cin.ignore();
}