// COSC 1550
// Paul Biolchini
// Output data to a file

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int n1 = 10, n2 = 3, n3 = 12345;
	ofstream ofile;
	ofile.open("myData.txt");
	ofile << setw(10) << n1 << endl;
	ofile << setw(10) << n2 << endl;
	ofile << setw(10) << n3 << endl;
	ofile.close();


	return 0;
}