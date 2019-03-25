// File Surgery.cpp
// This holds the Surgery class function definitions.

#include "Surgery.h"

/************************************************************
 *                       Surgery                            *
 * Surgery class default constructor --                     *
 * Sets rates for each surgery type                         *
 ************************************************************/
Surgery::Surgery()
{
	rate1 = 100.00;    // Set rates for surgery types 1-5
    rate2 = 200.00;
	rate3 = 300.00;
	rate4 = 400.00;
	rate5 = 500.00;
}

/*************************************************************
 *                    updateAccount                          *
 *  This Surgery class function is passed a reference to a   *
 *  PatientAccount object and an int indicating the type of  *
 *  surgery. It then calls the updateCharges member function *
 *  for the PatientAccount object, passing it the charge to  *
 *  be added to the account.                                 *
 *************************************************************/
void Surgery::updateAccount(PatientAccount& pt, int type)
{
	switch (type)
	{	
		case 1:  pt.updateCharges(rate1);
					break;
		case 2:  pt.updateCharges(rate2);
					break;
		case 3:  pt.updateCharges(rate3);
					break;
		case 4:  pt.updateCharges(rate4);
					break;
		case 5:  pt.updateCharges(rate5);
					break;
		default:      ; // Do not add any charge to the account.
	}
}
