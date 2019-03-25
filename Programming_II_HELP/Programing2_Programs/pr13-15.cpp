// This program demonstrates reading from one file and writing
// to a second file.
#include <iostream>
#include <fstream>
#include <cctype> // Needed for the toupper function
using namespace std;

int main()
{

        const int LENGTH = 81;
	ifstream inFile;
	ofstream outFile("out.txt");
	char fileName[LENGTH], ch, ch2;

	cout << "Enter a file name: ";
	cin >> fileName;
	inFile.open(fileName);
	if (!inFile)
	{
		cout << "Cannot open " << fileName << endl;
		return 0;
	}
	inFile.get(ch);			// Get a character from file 1
	while (!inFile.fail())		// Test for end of file
	{
		ch2 = toupper(ch);	// Convert to uppercase
		outFile.put(ch2);	      // Write to file 2.
		inFile.get(ch);		// Get another character from file 1
	}
	inFile.close();
	outFile.close();
	cout << "File conversion done.\n";
      return 0;
}


