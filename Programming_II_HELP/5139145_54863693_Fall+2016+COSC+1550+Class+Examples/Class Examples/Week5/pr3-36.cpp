// This program demonstrates a string object's length member function.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string town;
	char city[10];

//	cout << "Where do you live? ";
//	//cin  >> town >> city;
//	getline(cin, town);  // C++ string entry
////	cin.getline(city, 10); // C string entry
//	cout << "Your town's name has " << town.length() ;// C++ string
//	cout << " characters\n";
	//cout << "Your city's name has " << strlen(city) ;// C stirng
	//cout << " characters\n";

	int number;
	cout << "Enter a number:";
	cin >> number;
	cin.ignore();  // need to ignore the CR between cin and getline
	cout << "Where do you live? ";
	getline(cin, town);  // C++ string entry
	cout << "Enter a number:";
	cin >> number;
	cout << "Where do you live? ";
	getline(cin, town);  // C++ string entry

	return 0;
}
