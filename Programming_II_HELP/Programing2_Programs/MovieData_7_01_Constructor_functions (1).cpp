// Paul Biolchini 
// COSC1560 
// Homework 2 Assignment 1 
// Chapter 7 - Problem 1 
// Movie Data 
// This program stores movie information in a structure with functions. 

#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
	string title,
		director;
	int    year,     // year released
		length;      // running time in minutes
	double costs,    // production costs 
		revenues;    // first year revenues 

	MovieData(string _title = "null",string _director = "null", 
			int _year = 0, int _length = 0, 
			double _costs = 0.0, double _revenues = 0.0)
	{ 
		title = _title;
		director = _director;
		year = _year;
		length = _length;
		costs = _costs;
		revenues = _revenues;
	}
};

void getMovieInfo(MovieData &);
void displayMovieInfo(const MovieData [], int);
int main()
{
	const int SIZE = 4;
//	MovieData movie[SIZE];  //// initialize with function
//
//	for(int i = 0; i < SIZE; i++)
//	{
//		getMovieInfo(movie[i]);
//	}

	MovieData movie[SIZE] = {MovieData(),  //// initialize with constructor at declaration
		MovieData("War of the Worlds", "Byron Haskin", 1953, 88),
		MovieData("War of the Worlds", "Stephen Spielberg", 2005, 118)
	};
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
	}

}

void getMovieInfo(MovieData & m)
{
	cout << "Enter the movie's name: ";
	getline(cin, m.title);
	cout << "Enter the movie's director's name: ";
	getline(cin, m.director);
	cout << "Enter the year the movie was released: ";
	cin >> m.year;
	cout << "Enter the length (in minutes) of the movie: ";
	cin >> m.length;
	cin.ignore();
}