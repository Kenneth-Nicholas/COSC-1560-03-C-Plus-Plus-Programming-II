// File Pharmacy.h
// This holds the declaration for the Pharmacy class.

#include "PatientAccount.h"

#ifndef PHARMACY_H
#define PHARMACY_H

class Pharmacy
{
private:
	double price1,    // Holds prices of 5 types of medicine
	       price2,
			 price3,
			 price4,
			 price5;
public:
	Pharmacy();
	void updateAccount(PatientAccount&, int);
};

#endif
