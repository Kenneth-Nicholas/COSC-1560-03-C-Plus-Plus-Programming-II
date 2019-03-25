// Paul Biolchini
// COSC 1560 ADT Example 1

#include <iostream>
#include <string>
using namespace std;

struct Name
{
	string fn;
	string ln;
	int age;
};

int main()
{
	Name me;
	cout << "Enter your first name: ";
	getline(cin, me.fn);
	cout << "Enter your last name: ";
	getline(cin, me.ln);
	cout << "Enter your age: ";
	cin >> me.age;

	cout << me.fn << " " << me.ln << " is " << me.age << " years old\n";

	cout << "The Name ADT takes " << sizeof(Name) << " bytes of memory.\n";
	cout << "The variable \"me\" takes " << sizeof(me) << " bytes of memory.\n";

	cout << "First Name is: " << sizeof(me.fn) << " bytes long\n";
	cout << "Last Name is: " << sizeof(me.ln) << " bytes long\n";
	cout << "age is: " << sizeof(me.age) << " bytes long\n";
	cout << "The variable \"me\" takes " << sizeof(me) << " bytes of memory.\n";


	return 0;
}