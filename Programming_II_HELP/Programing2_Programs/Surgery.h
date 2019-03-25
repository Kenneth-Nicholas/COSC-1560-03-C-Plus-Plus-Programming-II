// File Surgery.h
// This holds the declaration of the Surgery class

#include "PatientAccount.h"

#ifndef SURGERY_H
#define SURGERY_H

class Surgery
{
private:
	double rate1,           // Rates for 5 surgery types
          rate2,
			 rate3,
			 rate4,
			 rate5;
public:
	Surgery();
	void updateAccount(PatientAccount&, int);
};

#endif
