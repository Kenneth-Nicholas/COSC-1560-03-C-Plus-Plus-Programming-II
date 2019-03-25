//  Written by Paul Biolchini
//  Chapter 12
//  Assignment 7: Name Arranger


#include <iostream>
#include <cstring>
using namespace std;

char* makeFullName(char*, char*, char*);

int main()
{
	char first[21], middle[21], last[21];

	cout << "Enter your first name: ";
	cin.getline(first, 21);
	cout << "Enter your middle name: ";
	cin.getline(middle, 21);
	cout << "Enter your last name: ";
	cin.getline(last, 21);
	char  *full = makeFullName(first, middle, last);
	cout << full << endl;
	delete [] full;
	full = 0;
	return 0;
}

char* makeFullName(char *fn, char *mn, char *ln)
{
	char * full = new char[strlen(fn) + strlen(mn) + strlen(ln) + 4];
	strcpy(full, ln);
	strcat(full, ", ");
	strcat(full, fn);
	strcat(full, " ");
	strcat(full, mn);
	return full;
}