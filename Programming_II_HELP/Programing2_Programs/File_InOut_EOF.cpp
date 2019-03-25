// ask user for filename
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char fileInName[81], fileOutName[81];
	int one;
	fstream file,ofile;
	cout << "Please enter the name of the file you wish to open: ";
	cin.getline(fileInName, 81);
	file.open(fileInName, ios::in);
	if(!file)
	{
		cout << fileInName << " failed to open.";
		exit(EXIT_FAILURE);
	}
	cout << "Please enter the name of the file you wish to open: ";
	cin.getline(fileOutName, 81);
	ofile.open(fileOutName, ios::out|ios::app);
	if(!ofile)
	{
		cout << fileOutName << " failed to open.";
		exit(EXIT_FAILURE);
	}


//	while(!file.eof())
	while(!file.fail())
	{
		if (file.bad())
		{
			file.clear();  // clear bad data flag
		}
		file >> one;
		cout << one << " -:- ";
 		one++;
		ofile << one << endl;
		cout << one << endl;
	}
	file.close();
	ofile.close();

	return 0;
}