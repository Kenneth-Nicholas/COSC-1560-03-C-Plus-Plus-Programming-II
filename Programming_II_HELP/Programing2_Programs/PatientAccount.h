// File PatientAccount.h
// This holds the PatientAccount class declaration
// Because students have not yet learned to create friend 
// functions, updateCharges has been made a public function
// so that functions within the Pharmacy and Surgery classes
// can update the patient charges.

#ifndef PATIENT_ACCOUNT_H
#define PATIENT_ACCOUNT_H

class PatientAccount
{
private:
	double charges;
	int   days;

public:
	PatientAccount();
	void  setDays();
	void  updateCharges(double);
	double getCharges();
};

#endif
