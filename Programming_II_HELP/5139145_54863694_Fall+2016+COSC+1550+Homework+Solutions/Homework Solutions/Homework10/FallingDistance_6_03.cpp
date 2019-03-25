// Chapter 6 - Programming Challenge 3, Falling Distance
// This program uses a function that computes and returns the distance
// an object falls due to gravity in a specific number of seconds.
// The information is displayed in a table.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double fallingDistance(int);

int main()
{
	double dist;
	// Display table heading
	cout << "           Distance \n"
		 << "  Seconds  (meters) \n"
		 << "---------------------\n\n";

	// Create and display the table
	cout << fixed << setprecision(1) << showpoint;
	for (int sec = 1; sec <= 10; sec++)
	{
		//cout << setw(6) << sec << setw(11) << fallingDistance(sec) << endl;
		dist = fallingDistance(sec);
		cout << setw(6) << sec << setw(11) << dist << endl;
	}
	return 0;
}

/*************************************************************
 *                     fallingDistance                       *
 * When passed a time in seconds (t), this function computes *
 * and returns the distance in meters an object falls due to *
 * gravity during that time period.                          *
 * Use Dist = 1/2 * Grav. Const * Time Squared               *
 *************************************************************/
double fallingDistance(int t)
{
	const double G = 9.8;        // Gravitational constant (meters/sec)
//	const double G = 32.2;        // Gravitational constant (eet/sec)
	double distance = .5 * G * t * t;

	return distance;
}
