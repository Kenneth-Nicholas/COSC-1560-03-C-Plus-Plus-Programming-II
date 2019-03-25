// string input example
// COSC 1550
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{	
	string myName, sentence;
	int age, size;
	cout << "Please enter your name: ";
//	cin >> myName;
	getline(cin, myName);
	cout << "Please enter your age: ";
	cin >> age;
	size = myName.length();  // find how many characters are in your name
	cout << "Your name is: " << setw(size) << myName << endl;
	cout << "You are       " << setw(size) << age << " years old\n";
	cin.ignore();   // ignore the carraige return in the keyboard buffer
	cout << "Please enter a sentence: ";
	getline(cin, sentence);
	cout << "You entered: " << sentence << endl;
	
	// CSTRING
	char yourName[20];
	char paragraph[100];
	cout << "Please enter your name: ";
	cin.getline(yourName,20);
//	cin.ignore(5);
	cout << "Your name is: " << yourName << endl;
	cout << "Please enter a sentence: ";
	cin.getline(paragraph, 100);
	cout << "You entered: " << paragraph << endl;


	return 0;
}