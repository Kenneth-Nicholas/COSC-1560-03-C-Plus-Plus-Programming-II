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
	fstream ofile("temp.txt", ios::out);
	while (!file.eof() && lines < 10)
	{
//		file.getline(inputLine, 81);  // '\n'  assumed
//		file.getline(inputLine, 81, '\n');
		file.getline(inputLine, 81, '$');
		lines++;
		cout << inputLine << endl;
		ofile << inputLine << endl;
		//ofile << inputLine << '~';
        }

	if (lines < 9 && lines > 0)
   	cout << "\nThe entire file has been displayed.\n";
	file.close();
	ofile.close();
	return 0;
}

