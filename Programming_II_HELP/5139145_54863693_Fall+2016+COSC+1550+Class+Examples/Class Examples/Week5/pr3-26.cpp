// This program uses cin >> to read a word into a C-string.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int SIZE = 12;
    char name[SIZE];
	cout << "Please enter your first name." << endl;
	cin  >> setw(SIZE) >> name;
	cout << "Hello, " << name << endl;

	cin.ignore(16);  // assuming I entered 26 characters and a CR above.
	cin.getline(name, SIZE);
	cout << "Hello, " << name << endl;

	return 0;
}
