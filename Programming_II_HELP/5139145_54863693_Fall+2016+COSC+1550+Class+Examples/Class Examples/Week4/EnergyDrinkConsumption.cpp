// Chapter 2, Programming Challenge 18: Energy Drink Consumption
#include <iostream>
using namespace std;

int main()
{
		// Variable declarations
		int numberSurveyed = 16500;	
		double payingCustomersPC = 0.15;
		double perferCitrusDrinkPC = 0.58;
		int payingCustomers;
		int citrusCustomers;

		// Calculate and store the number of customers
		// who purchased one or more energy drinks per week.
		payingCustomers = numberSurveyed * payingCustomersPC;

		// Calculate and store the number of customers
		// who purchased one or more energy drinks per 
		// week and preferred citrus flavor.
		citrusCustomers = payingCustomers * perferCitrusDrinkPC;

		// Display the results
		cout << payingCustomers << " customers purchased" 
			 << " one or more energy drinks per week.\n"
			 << citrusCustomers << " of those customers " 
			 << "preferred citrus flavored energy drink.\n";
	return 0;
}
/*
2475 customers purchased one or more energy drinks per week.
1435 of those customers preferred citrus flavored energy drink.
Press any key to continue . . .
*/