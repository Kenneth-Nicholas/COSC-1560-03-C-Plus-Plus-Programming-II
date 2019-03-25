#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream outFile; //declare an output file stream
	outFile.open("test.txt", ios::out | ios::app); //each time you run the program and make changes to it, it appends the file

	outFile << "Hello World!" << endl;
	outFile << "Hello World!" << endl;
	outFile << "Hello World!" << endl;
	outFile << "Hello World!" << endl;

	outFile.close();

	return 0;
}
// fstream means you can open a file for sending out or reading from
// if you declare ofstream, you can only send output to a file
// ifstream is only for reading from files

// ios::out used with fstream, ios:app used to keep what is added to the text file everytime you rebuild and run a program.

//