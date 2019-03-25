// Paul Biolchini
// COSC 1550.07
// Week 4 Example
// Basic cin demonstration

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;
	int num1;
    int num2;
	char letter;
	string name;  // c++ string - requires <string> library to be included
	char myName[20];  // c-string

	//cout << "Please enter an integer number: ";
	//cin >> number;

	//cout << "Please enter a floating point number: ";
	//cin >> num1;

	cout << "Please enter three numbers: ";
	cin >> number >> num1 >> num2;

	cout << "Please enter a letter: ";
	cin >> letter;

	 cin.ignore();
	cout << "Please enter your name: ";
	//cin >> myName;
	cin.getline(myName, 20);
	//cin.ignore();
	cout << "Please enter your name: ";
	//cin >> name;
    getline(cin, name);
     


	cout << "\nYou entered a: " << number 
		<< " and a: " << num1
		<< " and a: " << num2
		<< " and a: " << letter
		<<" and : " << myName 
		<< " and : " << name  
		<< endl;
	return 0;
}