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

MovieData getMovieInfo();
void displayMovieInfo(const MovieData [], int);

int main()
{
	const int SIZE = 4;
	MovieData movie[SIZE] = {
		{"War of the Worlds", "Byron Haskin", 1953,  88,  2500000,  3800000},
		{"War of the Worlds", "Stephen Spielberg", 2005, 118, 94300000, 68700000},
		{" "," ",0,0,0,0},
		{" "," ",0,0,0,0}
		};

	movie[2] = getMovieInfo();
	movie[3] = getMovieInfo();
	displayMovieInfo(movie, SIZE);


	return 0;
}

void displayMovieInfo(const MovieData m[], int size)
{
		for(int i = 0; i<size; i++)
		{
			cout << "\nTitle       : " << m[i].title;
			cout << "\nDirector    : " << m[i].director;
			cout << "\nReleased    : " << m[i].year;
			cout << "\nRunning Time: " << m[i].length << " minutes" << endl;
			if (m[i].revenues >= m[i].costs)
				cout << "\nFirst year profit: $" 
				<< ((m[i].revenues - m[i].costs)/1000000) << " million\n";
			else
				cout << "\nFirst year loss  : $" 
				<< ((m[i].costs - m[i].revenues)/1000000) << " million\n";
			cout << endl;
		}
}

MovieData getMovieInfo()
{
	MovieData m;
	cout << "Enter the movie's name: ";
	getline(cin, m.title);
	cout << "Enter the movie's director's name: ";
	getline(cin, m.director);
	cout << "Enter the year the movie was released: ";
	cin >> m.year;
	cout << "Enter the length (in minutes) of the movie: ";
	cin >> m.length;
	cout << "Enter the production costs of the movie: ";
	cin >> m.costs;
	cout << "Enter the first year's reveues of the movie: ";
	cin >> m.revenues;

	cin.ignore();

	return m;
}