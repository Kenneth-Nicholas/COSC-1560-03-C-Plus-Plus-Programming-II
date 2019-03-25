#include <iostream>
#include <iomanip>
using namespace std;
#include "sale.h"

int main()
{  
	// Define Sale object with 6% sales tax calculated on a $24.95 sale
	Sale cashier1(.06, 24.95);

	// Define a Sale object with a tax-exempt $24.95 sale.
	Sale cashier2(24.95);

	cout << fixed << showpoint << setprecision(2);
	cout << "With a 0.06 sales tax rate, the total\n";
	cout << "of the $24.95 sale is $";
	cout << cashier1.getTotal() << endl;
	cout << "On a tax-exempt purchase, the total\n";
	cout << "of the $24.95 sale is, of course, $";
	cout << cashier2.getTotal() << endl; 
	
	Sale cashier3(24.95);
	cashier3.setTaxRate(0.105);
	cout << "With a 0.105 sales tax rate, the total\n";
	cout << "of the $24.95 sale is $";
	cout << cashier3.getTotal() << endl;

	return 0;
}
