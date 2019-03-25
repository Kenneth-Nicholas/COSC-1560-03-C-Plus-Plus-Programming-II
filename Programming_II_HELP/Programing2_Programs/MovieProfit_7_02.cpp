// Paul Biolchini
// COSC 1560
// Homework 2 Assignment 2
// Chapter 7 - Problem 2 
// Movie Profit 
// This program stores movie information in a structure. 
// This program modifies Programming Challenge 1 to also compute and display the
// movie's first year profit or loss. 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData
{
	string title,
		director;
	int    year,        // year released
		length;      // running time in minutes
	double costs,       // production costs 
		revenues;    // first year revenues 
};


int main()
{
	const int SIZE = 2;
	MovieData movie[SIZE] = {
		{"War of the Worlds", "Byron Haskin", 1953,  88,  2500000,  3800000},
		{"War of the Worlds", "Stephen Spielberg", 2005, 118, 94300000, 68700000}};

		for(int i = 0; i<SIZE; i++)
		{
			cout << "\nTitle       : " << movie[i].title;
			cout << "\nDirector    : " << movie[i].director;
			cout << "\nReleased    : " << movie[i].year;
			cout << "\nRunning Time: " << movie[i].length << " minutes" << endl;
			if (movie[i].revenues >= movie[i].costs)
				cout << "\nFirst year profit: $" 
				<< ((movie[i].revenues - movie[i].costs)/1000000) << " million\n";
			else
				cout << "\nFirst year loss  : $" 
				<< ((movie[i].costs - movie[i].revenues)/1000000) << " million\n";
			cout << endl;
		}

	return 0;
}
