// COSC 1550
// Paul Biolchini
// Input data from a file

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int n1, n2, n3;
	ifstream ifile;
	string fileName;
//	char fileName[51];
	cout << "Enter the name of the file (myData.txt): ";
	//cin.getline (fileName,51);
	//ifile.open(fileName);
	getline (cin, fileName);
	ifile.open(fileName.c_str());
	if(!ifile)
		cout << "File " << fileName << " not found.\n";
	else
	{
		ifile >> n1 >> n2 >> n3;
		cout << n1 << endl; 
		cout << n2 << endl;
		cout << n3 << endl;
	}
	ifile.close();



	return 0;
}