// ask user for filename
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;



int main()
{
	char fileInName[81], fileOutName[81];
	char five[81];
	fstream file, ofile;
	cout << "Please enter the name of the file you wish to open: ";
	cin.getline(fileInName, 81);
	//strcat(fileInName, ".txt");

	file.open(fileInName, ios::in);
	if(!file.fail())
	{
		cout << fileInName << " failed to open\n.";
		exit(EXIT_FAILURE);
	}


	while(!file.eof())
	{
		file.getline(five,31);
		cout << five << endl;
		system("PAUSE");
	}
	file.close();

	return 0;
}

