// ask user for filename
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char fileName[81];
	int one,two,three,four;
	char five[31];
	fstream file;

	//cout << "Please enter the name of the file you wish to open: ";
	//cin.getline(fileName, 81);

	//file.open(fileName, ios::in);
	//file.open("C:\\Documents and Settings\\User\\My Documents\\Visual Studio 2008\\Projects\\Week13\\Week13\\second.txt", ios::in);
	file.open("second.txt", ios::in);
	file >> one >> two >> three >> four;
	file.ignore();
	file.getline(five, 31);
	file.close();
	cout << one << " " << two << " " << three << " " << four << " " << five << endl;
	return 0;
}