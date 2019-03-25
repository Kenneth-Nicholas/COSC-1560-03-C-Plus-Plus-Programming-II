// COSC 1550
// Paul Biolchini
// Class Example
// Problem 2.8
// Land Calculation

#include <iostream>
//#define ONE_ACRE 43560.0  //old c language const definition
using namespace std;

int main()
{
	const double ONE_ACRE = 43560.0;  // square feet per acre
	double tractSize = 389767.0,/*  comment inside a line */ numberOfAcres;
	numberOfAcres = tractSize / ONE_ACRE;
  //ONE_ACRE = 50000.0;  //compiler error - changing a const variable
	cout << "There are " << numberOfAcres 
		<< " acres in a tract of land containing "
		<< tractSize << " square feet.\n";

	return 0;

	
}

//There are 8.94782 acres in a tract of land containing 389767 square feet.
//Press any key to continue . . .
