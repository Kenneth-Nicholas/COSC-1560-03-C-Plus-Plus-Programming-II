// Paul Biolchini
// COSC 1560 ADT Example 1

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Name
{
	char fn[10];
	char ln[20];
	int age;
};

int main()
{
	Name me;
	cout << "Enter your first name: ";
	cin.getline(me.fn, 10);
	cout << "Enter your last name: ";
	cin.getline(me.ln, 20);
	cout << "Enter your age: ";
	cin >> me.age;

//	cout << endl << me.fn << " " << me.ln << " is " << me.age << " years old\n";

	cout << "The Name ADT takes " << sizeof(Name) << " bytes of memory.\n";
//	cout << "The variable \"me\" takes " << sizeof(me) << " bytes of memory.\n";

	cout << "First Name is: " << sizeof(me.fn) << " bytes long\n";
	cout << "Last Name is: " << sizeof(me.ln) << " bytes long\n";
	cout << "age is: " << sizeof(me.age) << " bytes long\n";
	cout << "The variable \"me\" takes " << sizeof(me) << " bytes of memory.\n";
//	system("Pause");
	return 0;
}