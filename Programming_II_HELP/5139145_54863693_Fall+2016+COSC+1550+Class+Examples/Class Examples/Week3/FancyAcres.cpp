// COSC 1550
// Paul Biolchini
// Class Example
// Problem 2.8
// Land Calculation

#include <iostream>

using namespace std;

int main()
{
	const double ONE_ACRE = 43560.0;  // square feet per acre
	double tractSize = 389767.0, numberOfAcres;
	
	//ONE_ACRE = 2; //error C3892: 'ONE_ACRE' : you cannot assign to a variable that is const
	numberOfAcres = tractSize / ONE_ACRE;

	cout << "There are " << numberOfAcres 
		<< " acres in a tract of land containing " 
		<< tractSize << " square feet.\n";

	return 0;

	
}
// before
/*
There are 8.94782 acres in a tract of land containing 389767 square feet.
Press any key to continue . . .

// after setprecision(1) << fixed
There are 8.9 acres in a tract of land containing 389767.0 square feet.
Press any key to continue . . .

//after setprecision(2) << fixed
There are 8.95 acres in a tract of land containing 389767.00 square feet.
Press any key to continue . . .

//after setprecision(2) << fixed   and  << setprecision(0)
There are 8.95 acres in a tract of land containing 389767 square feet.
Press any key to continue . . .
*/