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

// Function Prototypes
long recordOffset(int);	
void showRec(Info);

int main()
{
	fstream people;
	Info person;

	people.open("people.dat", ios::in | ios::binary);
	if (!people)
	{
		cout << "Error opening file. Program aborting.\n";
		return 0;
	}
	cout << "Here is record 1:\n";
	people.seekg(recordOffset(1), ios::beg);
    people.read(reinterpret_cast<char*>(&person), sizeof(person));
	
	showRec(person);
	cout << "\nHere is record 0:\n";
	
	people.seekg(recordOffset(0), ios::beg);
    people.read(reinterpret_cast<char*>(&person), sizeof(person));
	
	showRec(person);
	cout << "Here is record 2:\n";
	people.seekg(recordOffset(2), ios::beg);
	people.read(reinterpret_cast<char*>(&person), sizeof(person));

	showRec(person);

	cout << "\nHere is record 0 again:\n";

	people.seekg(recordOffset(0), ios::beg);
	people.read(reinterpret_cast<char*>(&person), sizeof(person));

	showRec(person);

	people.close();
	return 0;
}


//************************************************************
// Definition of function recordOffset. Accepts an integer as     *
// its argument. Returns the byte number in the file of the  *
// record whose number is passed as the argument.            *
//************************************************************
long recordOffset(int recNum)
{
	return sizeof(Info) * recNum;
}

//************************************************************
// Definition of function showRec. Accepts an Info structure *
// as its argument, and displays the structure's contents.   *
//************************************************************
void showRec(Info record)
{
	cout << "Name: ";
	cout << record.name << endl;
	cout << "Age: ";
	cout << record.age << endl;
	cout << "Address line 1: ";
	cout << record.address1 << endl;
	cout << "Address line 2: ";
	cout << record.address2 << endl;
	cout << "Phone: ";
	cout << record.phone << endl;
	cout << endl;
}
