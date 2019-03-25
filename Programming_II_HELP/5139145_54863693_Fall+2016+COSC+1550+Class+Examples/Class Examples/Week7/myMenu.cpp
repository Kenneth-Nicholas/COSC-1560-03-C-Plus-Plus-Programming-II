// PAul Biolchini
// COSC 1550
// Menu Example Using switch

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int choice;
	string dataEntered;

	cout << "1. Enter you name.\n";
	cout << "2. Enter your major.\n";
	cout << "3. Enter you home state.\n";
	cout << "4. Enter your dog\'s name.\n";
	cout << "5. Quit.\n";
	cin >> choice;

	switch(choice)
	{
	case 1:
		cin.ignore();  // don't forget the cin.ignore() between a cin and a getline
		cout << "Please enter your name:";
		getline(cin , dataEntered);
		break;
	case 2:
		cin.ignore();
		cout << "Please enter your major:";
		getline(cin , dataEntered);
		break;
	case 3:
		cin.ignore();
		cout << "Please enter your home state:";
		getline(cin , dataEntered);
		break;
	case 4:
		cin.ignore();
		cout << "Please enter your dog\'s name:";
		getline(cin , dataEntered);
		break;
	case 5:
		dataEntered = "Quit";
		break;
	default:
		dataEntered = "Junk";
	}
	cout << "You entered: " << dataEntered << endl;
	return 0;
}