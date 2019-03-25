// Chapter 7 - Assignment 14, Patient Fees
// Driver program for the Patient, Surgery, and Pharmacy classes

//	File members of this project:
//	7_14.cpp (this file)
//	PatientAccount.h   -- contains PatientAccount class declaration
// PatientAccount.cpp -- contains PatientAccount function definitions
// Surgery.h          -- contains Surgery class declaration
// Surgery.cpp        -- contains Surgery function definitions
// Pharmacy.h         -- contains Pharmacy class declaration
// Pharmacy.cpp       -- contains Pharmacy function definitions

#include <iostream>
#include <iomanip>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
using namespace std;

int main()
{
	PatientAccount patient1;       // Create a PatientAccount object
	Surgery  surgery;              // Create a Surgery object
	Pharmacy pharmacy;             // Create a Pharmacy object
	int surtype, medtype;
   char hadSurgery,               // Did patient have surgery (Y/N)? 
        hadMedicine;              // Did patient receive medicine (Y/N)? 

	cout << "*** Patient Release Statement ***\n\n";
	
	patient1.setDays();            // Sets length of patient stay and
	                               // adds daily room rate onto charges

	// Get and validate surgery data
	cout << "\nDid the patient have surgery (Y/N)? ";
   cin  >> hadSurgery;
   if (toupper(hadSurgery) == 'Y')
   {  // Student will display a menu of surgery types to select from
      cout << "Type of Surgery (1-5):  ";
      cin  >> surtype;
      while (surtype < 1 || surtype > 5)
      {  cout << "Legal values are 1-5.  Please re-enter surgery type: ";
         cin  >> surtype;
      }
      surgery.updateAccount(patient1, surtype);
   }

	// Get and validate medication data
   cout << "\nDid the patient receive medication (Y/N)? ";
   cin  >> hadMedicine;
   
   while (toupper(hadMedicine) == 'Y')
   {  // Student will display a menu of medicine types to select from
      cout << "Type of Medication (1-5):  ";
      cin >> medtype;
      while (medtype < 1 || medtype > 5)
      {  cout << "Legal values are 1-5.  Please re-enter medicine type: ";
         cin  >> medtype;
      }
      pharmacy.updateAccount(patient1, medtype);
      
      cout << "\nDid the patient receive other medication (Y/N)? ";
      cin  >> hadMedicine;
   }
	
   // Display the charges
   cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal Patient Charges:  $" << patient1.getCharges() << endl;
	return 0;
}
