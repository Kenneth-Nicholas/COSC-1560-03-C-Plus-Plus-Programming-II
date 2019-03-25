// Paul Biolchini
// COSC 1550.07
// Strin Example
// Using toupper, tolower

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char yOrN;

	cout << "Are you ready to start? (Y/N): ";
	cin >> yOrN;
	if(toupper(yOrN) == 'Y')
		cout << "OK, Let\'s go!\n";
	else if(toupper(yOrN) == 'N')
	{
		cout << "Sorry.\n";
		cout << "Are you ready yet? (Y/N): ";
		cin >> yOrN;
		if(tolower(yOrN) == 'y')
			cout << "At last!\n";
		else if(tolower(yOrN) == 'n')
			cout << "Then I quit.\n";
	}
	else
	{
		cout << "Bad Entry\n";
	}

	return 0;
}