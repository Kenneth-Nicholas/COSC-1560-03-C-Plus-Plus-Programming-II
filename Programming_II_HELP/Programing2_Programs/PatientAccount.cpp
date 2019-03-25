// File patientAccount.cpp
// This holds the PatientAccount class function definitions.

#include "PatientAccount.h"
#include <iostream>
using namespace std;
const double DAILY_RATE = 1500.00;

/***********************************************************
 *                    PatientAccount                       *
 * PatientAccount default constructor -- sets default      *
 * values for days and charges                             *
 ***********************************************************/
PatientAccount::PatientAccount()
{
	days = 0;
	charges = 0.00;
}

/***********************************************************
 *                       setDays                           *
 * PatientAccount member function to set number of days    *
 * patient was in the hospital and to add room charges for *
 * those days to the PatientAccount charges variable       *
 ***********************************************************/
void PatientAccount::setDays()
{
	cout << "How many days was the patient in the hospital?  ";
	cin >> days;
	while (days < 0)
	{  cout << "Days must be 0 or more. Please re-enter: ";
		cin  >> days;
	}
	charges += days * DAILY_RATE;
}

/***********************************************************
 *                    updateCharges                        *
 * PatientAccount member function to add the newChage      *
 * passed to it onto the charges                           *
 ***********************************************************/
void PatientAccount::updateCharges(double newCharge)
{   
	charges += newCharge;
}

/***********************************************************
 *                       getCharges                        *
 * PatientAccount member function to return the value      *
 * stored in the charges member variable                   *
 ***********************************************************/
double PatientAccount::getCharges()
{
	return charges;
}
