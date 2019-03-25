// This program demonstrates overloaded functions to calculate
// the gross weekly pay of hourly-wage or salaried employees.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getChoice(char &);
double calcWeeklyPay(int, double); 
double calcWeeklyPay(double);

int main()
{
	char selection;
	int worked;
	double rate, yearly;

	cout << fixed << showpoint << setprecision(2);
	cout << "Do you want to calculate the weekly pay of\n";
	cout << "(H) an hourly-wage employee, or \n";
	cout << "(S) a salaried employee? ";
   getChoice(selection);
	switch (selection)
	{
		case 'H' :
		case 'h' :  cout << "How many hours were worked? ";
						cin  >> worked;
						cout << "What is the hour pay rate? ";
						cin  >> rate;
						cout << "The gross weekly pay is $";
						cout << calcWeeklyPay(worked, rate) << endl;
						break;
		case 'S' :
		case 's' :  cout << "What is the annual salary? ";
						cin  >> yearly;
						cout << "The gross weekly pay is $";
						cout << calcWeeklyPay(yearly) << endl;
	}
	return 0;
}

//**************************************************************
// Definition of function getChoice                            *
// The parameter, letter, is a reference to a char.            *
// This function asks the user for an H or an S and returns    *
// the validated input.                                        *
//**************************************************************
void getChoice(char &letter)
{
	cin >> letter;

	while (letter != 'H' && letter != 'h' && letter != 'S' && letter != 's')
	{	
		cout << "Enter H or S: ";
		cin  >> letter;
	}
}
	
//***********************************************************
// Definition of overloaded function calcWeeklyPay          *
// This function calculates the gross weekly pay of         *
// an hourly-wage employee. The parameter hours holds the   *
// number of hours worked. The parameter payRate holds the  *
// hourly pay rate. The function returns the weekly salary. *
//***********************************************************
double calcWeeklyPay(int hours, double payRate)
{
	return hours * payRate;
}

//***********************************************************
// Definition of overloaded function calcWeeklyPay          *
// This function calculates the gross weekly pay of         *
// a salaried employee. The parameter holds the employee's  *
// annual salary. The function returns the weekly salary.   *
//***********************************************************
double calcWeeklyPay(double annSalary)
{
	return annSalary / 52.0;
}
