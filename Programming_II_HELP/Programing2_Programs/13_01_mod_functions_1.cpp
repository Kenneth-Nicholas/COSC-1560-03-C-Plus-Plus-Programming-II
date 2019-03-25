//  Written by C++ programmer
//  Chapter 13
//  Assignment 1:  Head Program

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void displayHead(fstream &);

int main()
{
	fstream file;
	char name[81];

	cout << "Enter the file name: ";
	cin.getline(name, 81);
	file.open(name, ios::in);
	if (!file)
	{
   		cout << "Error opening " << name << endl;
		exit( 0);
	}

	displayHead(file);
	file.close();
	return 0;
}

 void displayHead(fstream & file)
 {
	char inputLine[81];
	int lines = 0;

	while (!file.eof() && lines < 10)
	{
		file.getline(inputLine, 81);
		lines++;
		cout << inputLine << endl;
        }

	if (lines < 9 && lines > 0)
   	cout << "\nThe entire file has been displayed.\n";

 }
