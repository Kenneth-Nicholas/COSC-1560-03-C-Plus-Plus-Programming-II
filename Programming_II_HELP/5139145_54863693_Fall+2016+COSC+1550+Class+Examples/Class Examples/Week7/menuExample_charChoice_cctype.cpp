// Paul Biolchini
// COSC 1550
// Class 6 Example
// Simple menu statement


#include <iostream>
#include <cctype>
using namespace std;

int main()
{

	char choice;

	cout << "a. Enter an \'a\' to calculate area\n";
	cout << "b. Enter a  \'b\' to calculate circumference\n";
	cout << "c. Enter a  \'c\' to do nothing\n";
	cout << "q. Enter a  \'q\' to quit\n";

	cin >> choice;
//	if (toupper(choice) == 'A')
	if (tolower(choice) == 'a')
	{
		cout << "You entered an \'" << choice << "\'\n";
	}
	else if (toupper(choice) == 'B')
	{
		cout << "You entered an \'" << choice << "\'\n";
	}
	else if (toupper(choice) == 'C')
	{
		cout << "You entered an \'" << choice << "\'\n";
	}
	else
	{
		cout << "You entered an \'" << choice << "\'\n";
		cout << "You Quit!\n";
	}
	cout << endl;
	return 0;
}