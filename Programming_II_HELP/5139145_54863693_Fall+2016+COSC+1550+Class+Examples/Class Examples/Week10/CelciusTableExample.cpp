// Celcius Table
// Problem 2 Chapter 6
// COSC 1550

#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes
double celcius(double);
double getTemp();
void displayTemp(double, double);

int main()
{
	double F,C;
	F = getTemp();
	C = celcius(F);
	displayTemp(F, C);
		//cout << setw(10) << F <<  setw(20) << C <<endl;
	return 0;
}

double getTemp()
{
	double Fah;
	cout << "Please enter a temperature in Fahrenheit: ";
	cin >> Fah;
	return Fah;
}

double celcius(double Fah)
{
	double Cel = 5 * (Fah - 32.) / 9;
	return Cel;
}

void displayTemp(double Fah, double Cel)
{
	cout << "Degrees Fahrenheit     " << "Degrees Celcius.\n";
	cout << fixed << setprecision(1);
	cout << setw(10) << Fah << setw(20) << Cel << endl;
}