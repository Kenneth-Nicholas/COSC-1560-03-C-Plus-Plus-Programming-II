// COSC 1550
// Files and Loops

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int num = 0;
	int ctr = 0;
	int number = 0;
	int total = 0;
	ifstream inFile;
	ofstream outFile;

	outFile.open("loopFile.txt");
	while (num != -99)
	{
		cout << "Enter a number to add to the file: ";
		cin >> num;
		if (num != -99)
			outFile << num << " ";
	}
	outFile.close();

	inFile.open("loopFile.txt");
	if(!inFile)
		cout << "The file did not open.\n";
	else
	{
		inFile >> number;
		//cout << number << endl;
		while(!inFile.eof())
		{
			ctr++;
			cout << number << endl;
			total += number;
			inFile >> number;
		}
	}
	inFile.close();
	cout << "The total of the numbers stored in the file is " << total << endl;
	cout << "The average of the numbers stored in the file is " << total/ctr << endl;
	return 0;
}