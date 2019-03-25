//  Written by Paul Biolchini
//  Chapter 12
//  Assignment 7: Name Arranger


#include <iostream>
#include <cstring>
using namespace std;

char* makeFullName(char*, char*, char*);

int main()
{
	char first[21], middle[21], last[21], full[64];

	cout << "Enter your first name: ";
	cin.getline(first, 21);
	cout << "Enter your middle name: ";
	cin.getline(middle, 21);
	cout << "Enter your last name: ";
	cin.getline(last, 21);
	strcpy(full,makeFullName(first, middle, last));
	cout << full << endl;
	return 0;
}

char* makeFullName(char *fn, char *mn, char *ln)
{
	char full[64];
	strcpy(full, ln);
	strcat(full, ", ");
	strcat(full, fn);
	strcat(full, " ");
	strcat(full, mn);
	return full;
}