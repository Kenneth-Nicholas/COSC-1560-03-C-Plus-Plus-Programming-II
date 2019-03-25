// This program demonstrates the use of a structure variable to
// read a record of information from a file.
#include <iostream>
#include <fstream>
using namespace std;
//#include "reinterpret.h"

// Declare a structure for the record
struct Info
{
	char name[51];
	int age;
	char address1[51];
	char address2[51];
	char phone[14];
};

int main()
{
	fstream people;
	Info person;
	char again;

	people.open("people.dat", ios::in | ios::binary);
	if (!people)
	{
		cout << "Error opening file. Program aborting.\n";
		return 0;
	}
	cout << "Here are the people in the file:\n\n";

    people.read(reinterpret_cast<char*>(&person), sizeof(person));
	
	while (!people.eof())
	{
		cout << "Name: ";
		cout << person.name << endl;
		cout << "Age: ";
		cout << person.age << endl;
		cout << "Address line 1: ";
		cout << person.address1 << endl;
		cout << "Address line 2: ";
		cout << person.address2 << endl;
		cout << "Phone: ";
		cout << person.phone << endl;
		system("PAUSE");


        people.read(reinterpret_cast<char*>(&person), sizeof(person));
	}
	cout << "That's all the information in the file!\n";
	people.close();
	return 0;
}
