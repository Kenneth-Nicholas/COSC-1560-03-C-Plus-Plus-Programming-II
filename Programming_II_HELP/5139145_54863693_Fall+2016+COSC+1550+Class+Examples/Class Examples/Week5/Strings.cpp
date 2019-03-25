// This program demonstrates a string object's length member function.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string town;
	char city[10];

	cout << "Where do you live? ";
	cin  >> town >> city;
	cout << "Your town's name has " << town.length() ;// C++ string
	cout << " characters\n";
	cout << "Your city's name has " << strlen(city) ;// C stirng
	cout << " characters\n";

	town = "St. Louis";	//C++ String assignment
	strcpy(city,"St. Louis"); // C Sting assignment
	cout << "Your town's name has " << town.length() ;// C++ string
	cout << " characters\n";
	cout << "Your city's name has " << strlen(city) ;// C stirng
	cout << " characters\n";

	return 0;
}
