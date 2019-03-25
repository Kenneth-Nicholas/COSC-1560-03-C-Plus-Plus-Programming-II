// This program demonstrates the use of a structure variable to
// read a record of information from a file.
#include <iostream>
#include <fstream>
using namespace std;

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
	int recnum;

	people.open("people.dat", ios::in |ios::out| ios::binary);
	if (!people)
	{
		cout << "Error opening file. Program aborting.\n";
		return 0;
	}
	int maxRec;
	do
	{
		cout << "Enter a record number: ";
		cin >> recnum;
		cin.ignore();
		people.seekg(0L,ios::end);
		long pos = people.tellg();
		maxRec = pos/sizeof(person);
		if(recnum <= 0)
			cout << "Negative numbers do not work.\n";
		if(recnum > maxRec) 
			cout << "There are only " << maxRec << " records in this file.\n";
	}while (recnum > maxRec || recnum <= 0);

	people.seekg(recordOffset(recnum), ios::beg);
    people.read(reinterpret_cast<char*>(&person), sizeof(person));
	
	cout << "\nHere is record " << recnum << ":\n";
	showRec(person);

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

	people.seekp(recordOffset(recnum), ios::beg);
    people.write(reinterpret_cast<char*>(&person), sizeof(person));
	
	people.seekg(recordOffset(recnum), ios::beg);
    people.read(reinterpret_cast<char*>(&person), sizeof(person));
	
	cout << "\nHere is record " << recnum << ":\n";
	showRec(person);

	recnum = 1;
	while (recnum <= maxRec)
	{
		people.seekg(recordOffset(recnum), ios::beg);
		people.read(reinterpret_cast<char*>(&person), sizeof(person));
		cout << "\nHere is record " << recnum << ":\n";
		showRec(person);
		recnum++;
	}

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
	return sizeof(Info) * (recNum -1);
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
}
