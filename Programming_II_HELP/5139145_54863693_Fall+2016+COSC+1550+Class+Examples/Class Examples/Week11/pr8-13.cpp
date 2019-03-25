// This program stores employee hours worked and hourly pay rates
// in two parallel arrays.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
   const int NUM_EMPS = 5; 
   int index;
	int hours[NUM_EMPS];         // Define 2 parallel arrays
	double payRate[NUM_EMPS];
   double grossPay;

	// Get employee work data
   cout << "Enter the hours worked and hourly pay rates of "
        << NUM_EMPS << " employees. \n";  

	for (index = 0; index < NUM_EMPS; index++)
	{
		cout << "Hours worked by employee #" << (index + 1) << ": ";
		cin  >> hours[index];
		cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
		cin  >> payRate[index];
	}
   // Display the data
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_EMPS; index++)
	{
     	grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}
	return 0;
}
