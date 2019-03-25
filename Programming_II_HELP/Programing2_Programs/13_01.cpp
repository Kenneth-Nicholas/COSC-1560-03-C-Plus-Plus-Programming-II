//  Written by C++ programmer
//  Chapter 13
//  Assignment 1:  Head Program

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	char name[81], inputLine[81];
	int lines = 0;

	cout << "Enter the file name: ";
	cin.getline(name, 81);
	file.open(name, ios::in);
	if (!file)
	{
   		cout << "Error opening " << name << endl;
		return 0;
	}
	while (!file.eof() && lines < 10)
	{
		file.getline(inputLine, 81); 
		lines++;
		cout << inputLine << endl;
    }

	if (lines < 9 && lines > 0)
   	cout << "\nThe entire file has been displayed.\n";
	file.close();
	return 0;
}

