// Paul Biolchini
// COSC 1550
// Functions - Chapter 6
// Problem 2
// Celcius Table

#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
double Celcius(double);
double getTemp();

int main()
{
	double F = -40.0, Cel;
	F = getTemp();
	cout << "Fahrenheit      Celcius" << endl;
	for (int i = 0; i < 30; i++)
	{
		Cel = Celcius(F);
		cout << fixed << setprecision(1);
		cout << setw(5) << F << "\t\t"<< setw(5) << Cel << endl;
		F += 10;
	}
	return 0;
}

double Celcius(double F)
{
	double C;
	C = 5./9. * (F - 32.);
	return C;
}

double getTemp()
{
	double input;
	cout << "Please enter a fahrenheit temperature: ";
	cin >> input;
	while(input < -200)
	{
		cout << "Enter a numner greater than -200!\n";
		cin >> input;
	}
	return input;
}