// PAul Biolchini
// COSC 1550
// Menu Example Using switch

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char choice;
	string dataEntered;

	cout << "A. Enter you name.\n";
	cout << "B. Enter your major.\n";
	cout << "C. Enter you home state.\n";
	cout << "D. Enter your dog\'s name.\n";
	cout << "Q. Quit.\n";
	cout << "Your Entry: ";
	cin >> choice;

	switch(choice)
	{
	case 'A':
	case 'a':
		cin.ignore();  // don't forget the cin.ignore() between a cin and a getline
		cout << "Please enter your name:";
		getline(cin , dataEntered);
		break;
	case 'B':
	case 'b':
		cin.ignore();
		cout << "Please enter your major:";
		getline(cin , dataEntered);
		break;
	case 'C':
	case 'c':
		cin.ignore();
		cout << "Please enter your home state:";
		getline(cin , dataEntered);
		break;
	case 'D':
	case 'd':
		cin.ignore();
		cout << "Please enter your dog\'s name:";
		getline(cin , dataEntered);
		break;
	case 'Q':
	case 'q':
		dataEntered = "Quit";
		break;
	default:
		dataEntered = "Junk";
	}
	cout << "You entered: " << dataEntered << endl;
	return 0;
}