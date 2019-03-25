// Chapter 2, Programming Challenge 18: Energy Drink Consumption
#include <iostream>
using namespace std;

int main()
{
		// Variable declarations
		int numberSurveyed;// = 16500;	
		double payingCustomersPC;// = 0.15;
		double perferCitrusDrinkPC;// = 0.58; 
		const double PERCENT = 100.0;
		int payingCustomers;
		int citrusCustomers;

		// user Input
		cout << "Please enter the number of customers surveyed: ";
		cin >> numberSurveyed;

		cout << "Please enter the percent of people surveyed who bought at least one energy drink in the last week (xx%): ";
		cin >> payingCustomersPC;
		payingCustomersPC = payingCustomersPC / PERCENT;

		cout << "Please enter the number of customers who perferred the citrus flavor (xx%): ";
		cin >> perferCitrusDrinkPC;
		perferCitrusDrinkPC = perferCitrusDrinkPC / PERCENT;

		// Calculate and store the number of customers
		// who purchased one or more energy drinks per week.
		payingCustomers = static_cast<int>(numberSurveyed * payingCustomersPC);

		// Calculate and store the number of customers
		// who purchased one or more energy drinks per 
		// week and preferred citrus flavor.
		citrusCustomers = static_cast<int>(payingCustomers * perferCitrusDrinkPC);

		// Display the results
		cout << endl;
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