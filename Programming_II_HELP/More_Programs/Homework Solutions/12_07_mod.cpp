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
	//cout << makeFullName(first, middle, last)<< endl;
	char  *full = makeFullName(first, middle, last);
	cout << full << endl;
	delete [] full;
	full = NULL;
	return 0;
}

char* makeFullName(char *fn, char *mn, char *ln)
{
	int size = strlen(fn) + strlen(mn) + strlen(ln) + 4;
	char * full = new char[size];
	strcpy_s(full, size, ln);
	strcat_s(full, size, ", ");
	strcat_s(full, size, fn);
	strcat_s(full, size, " ");
	strcat_s(full, size, mn);
	return full;
}