// Chapter 4 - Assignment 3, State Abbreviations
// This program displays the state name corresponding 
// to an entered state abbreviation.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string abbr;

	// Request input from user
	cout << "Enter one of the following state abbreviations:\n";
	cout << "NC, SC, GA, FL, or AL:  ";
	cin  >> abbr;

	// Display name based on decision
	if (abbr == "NC" || abbr == "Nc" || abbr == "nC" || abbr == "nc")
	{
		cout << "North Carolina\n\n";
	}
	else if (abbr == "SC" || abbr == "Sc" || abbr == "sC" || abbr == "sc")
	{
		cout << "South Carolina\n\n";
	}
	else if (abbr == "GA" || abbr == "Ga" || abbr == "gA" || abbr == "ga")
	{
		cout << "Georgia\n\n";
	}
	else if (abbr == "FL" || abbr == "Fl" || abbr == "fL" || abbr == "fl")
	{
		cout << "Florida\n\n";
	}
	else if (abbr == "AL" || abbr == "Al" || abbr == "aL" || abbr == "al")
	{
		cout << "Alabama\n\n";
	}
	else
	{
		cout << abbr << " is not one of the choices.\n\n";
	}
	return 0;
}
