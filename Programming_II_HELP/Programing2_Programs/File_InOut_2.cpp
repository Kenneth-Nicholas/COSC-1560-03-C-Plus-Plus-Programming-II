// ask user for filename
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char fileInName[81]; /// , fileOutName[81];
	int one,two,three,four;
	char five[31];
	fstream file;
	cout << "Please enter the name of the file you wish to open for input: ";
	cin.getline(fileInName, 81);
	file.open(fileInName, ios::in|ios::out|ios::app);
	if(!file)
	{
		cout << fileInName << " failed to open.\n";
		exit(EXIT_FAILURE);
	}
	while(!file.eof())
	{
	file >> one >> two >> three >> four;
	file.ignore();
	file.getline(five, 31);
	//file.close();
	cout << one << " " << two << " " << three << " " << four << " " << five <<  endl;
	}
	// ask for output file name

	//cout << "Please enter the name of the file you wish to open for output: ";
	//cin.getline(fileOutName, 81);
	//file.open(fileOutName, ios::out|ios::app);
	//if(!file)
	//{
	//	cout << fileOutName << " failed to open.\n";
	//	exit(EXIT_FAILURE);
	//}
	//Add one to all numbers!
	one++;
	two++;
	three++;
	four++;
	file << one << endl;
	file << two << endl;
	file << three << endl;
	file << four << endl;
	file << five << endl;
	file.close();
	cout << one << " " << two << " " << three << " " << four << " " << five << endl;
	return 0;
}