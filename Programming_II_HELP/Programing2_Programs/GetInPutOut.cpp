// This program asks the user for a file name. The file is
// opened and its contents are displayed on the screen.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName, ofileName;	// To hold the file name
	char ch;			// To hold a character
	fstream file, ofile;		// File stream objects

	// Get the file name
	cout << "Enter the name of the file to read: ";
	cin >> fileName;

	// Open the file.
	file.open(fileName, ios::in);

	// Get the file name
	cout << "Enter the name of the file to write: ";
	cin >> ofileName;

	// Open the file.
	ofile.open(ofileName, ios::out);


	// If the file was successfully opened, continue.
	if (file)
	{
		// Get a character from the file.
		file.get(ch);

		// While the last read opeation was
		// successful, continue.
		while (file)
		{
			if (ch == 'i')
				ch = '~';
			// Display the last character read.
			cout << ch;
			ofile.put(ch);
			// Read the next character
			file.get(ch);
		}

		// Close the file.
		file.close();
		ofile.close();
		cout << endl;
	}
	else
		cout << fileName << " could not be opened.\n";
	return 0;
}