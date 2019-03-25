// COSC 1560
// Paul BIolchini
// Structure Example
#include <iostream>
#include <string>
using namespace std;


struct Date
{
	int month;
	int day;
	int year;
};

struct Address
{
	string street1;
	string street2;
	string city;
	string state;
	string zip;
};

struct Student
{
	string name;
	Address addr;
	string phone;
	int id;
	string year;
	Date graduationDate;
	Date birthDate;
};


int main()
{
	Student me = {"Paul", "123 Fake St", "", "Webster Groves", "MO", "63119",
		"123-456-7890", 12345, "SR", 5,20,2009,6,6,1966};
	cout << me.name << endl;
	cout << me.addr.street1 << endl;
	cout << me.addr.city << endl;
	cout << me.addr.state << endl;
	cout << me.addr.zip << endl;
	cout << me.phone << endl;
	cout << me.id << endl;
	cout << me.graduationDate.month << '/' << me.graduationDate.day << "/" << me.graduationDate.year << endl;
	cout << me.birthDate.month << '/' << me.birthDate.day << "/" << me.birthDate.year << endl;
	
	cout << "\n\nEnter your name ";
	getline(cin, me.name);
	cout << "What city do you live in? ";
	getline(cin, me.addr.city);
	cout << "Enter your student id number ";
	cin >> me.id;
	

	cout << me.name << endl;
	cout << me.addr.city << endl;
	cout << me.id << endl;
	cin.ignore();

	Address here;
	cout << "Enter the state you are in: ";
	getline (cin, here.state);
	cout << "You live in " << here.state << endl;

	return 0;
}