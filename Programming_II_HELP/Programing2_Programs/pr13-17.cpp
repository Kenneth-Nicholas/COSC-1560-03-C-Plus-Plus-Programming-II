//This program demonstrates the use of a structure variable to
//store a record of information to a file.
#include <iostream>
#include <fstream>
#include <cctype>  // for toupper
using namespace std;
//#include "reinterpret.h"

// Declare a structure for the record
struct Info
{
	char name[51];
	int  age;
	char address1[51];
	char address2[51];
	char phone[14];
};

int main()
{
	fstream people("people.dat", ios::out | ios::binary);
	Info person;
	char again;

	if (!people)
	{
		cout << "Error opening file. Program aborting.\n";
		return 0;
	}
	do
	{
		cout << "Enter the following information about a "
		     << "person:\n";
		cout << "Name: ";
		cin.getline(person.name, 51);
		cout << "Age: ";
		cin >> person.age;
		cin.ignore(); // Skip over remaining newline.
		cout << "Address line 1: ";
		cin.getline(person.address1, 51);
		cout << "Address line 2: ";
		cin.getline(person.address2, 51);
		cout << "Phone: ";
		cin.getline(person.phone, 14);

        people.write(reinterpret_cast<char*>(&person), sizeof(person));
		
		cout << "Do you want to enter another record? ";
		cin >> again;
		cin.ignore();
	} while (toupper(again) == 'Y');
	people.close();
	return 0;
}
