#include "budget2.h"

double Budget::corpBudget = 0; // Definition of static member of 
                              // Budget class

//**********************************************************
// Definition of static member function mainOffice         *
// This function adds the main office's budget request to  *
// the corpBudget variable.                                *
//**********************************************************
void Budget::mainOffice(double moffice)
{
	corpBudget += moffice;
}
