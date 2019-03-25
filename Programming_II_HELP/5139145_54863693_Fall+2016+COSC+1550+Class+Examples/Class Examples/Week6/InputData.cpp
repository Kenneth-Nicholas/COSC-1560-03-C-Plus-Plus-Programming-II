// COSC 1550
// Paul Biolchini
// Input data from a file

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int n1, n2, n3;
	ifstream ifile;
	ifile.open("myData.txt");
	ifile >> n1 >> n2 >> n3;
	ifile.close();
	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;


	return 0;
}