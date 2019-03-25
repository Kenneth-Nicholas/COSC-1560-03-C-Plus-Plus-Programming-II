// fstream Example
// COSC 1550
//
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	ofstream oFile;
	ifstream iFile;
	iFile.open("MyName.txt");
	string n1,n2,n3;

	iFile >> n1;
	iFile >> n2;
	iFile >> n3;

	cout << "The names you entered were: \n";
	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	iFile.close();
	cout << "Enter a name: ";
	cin >> n1;
	cout << "Enter a name: ";
	cin >> n2;
	cout << "Enter a name: ";
	cin >> n3;
	cout << "Writng names to the disk.\n";

	oFile.open("MyName.txt");
	oFile << setw(10) << n1 << endl;
	oFile << setw(10) << n2 << endl;
	oFile << setw(10) << n3 << endl;

	oFile.close();
	cout << "Done.\n";

	return 0;

}