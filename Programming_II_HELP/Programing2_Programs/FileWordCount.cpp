//  Written by C++ Programmer
//  Chapter 12
//  Assignment 3: Word Counter

#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>

using namespace std;

//Function prototype
int countFileWords(fstream &);
int wordCount(char *);

int main()
{
	fstream file;
	char name[81];
	int totalWords;

	cout << "Enter the file name: ";
	cin.getline(name, 81);
	file.open(name, ios::in);
	if (!file)
	{
		cout << "Error opening " << name << endl;
		exit(0);
	}
	totalWords = countFileWords(file);
	file.close();
	cout << "\nThe number of words in the file is: "
		<< totalWords << endl << endl;


	return 0;
}

int countFileWords(fstream & file)
{
	char inputLine[132];
	int words = 0;

	while (!file.eof())
	{
		file.getline(inputLine, 132);
		cout << inputLine << endl;
		words += wordCount(inputLine);
	}
	return words;
}

//********************************************
// Counts the numbers of words in a C-string *
//********************************************
int wordCount(char *str)
{
	int numWords = 0;

	//	while (*str != '\0')
	while (*str != '\0')
	{
		// Skip any leading spaces
		//		while (*str != '\0' && (*str == ' '))
		while (*str != '\0' && !isalnum(*str))
			str++;

		if (*str != '\0' && isalnum(*str))
			//if (*str != '\0' && isalpha(*str))
			numWords++;

		// Skip over the next word
		//            while (*str != '\0' && !(*str == ' '))
		while (*str != '\0' && (isalnum(*str) || *str == '-' || *str == '\'' || *str == '/'))  // still doesn't handle  test--test
			str++;
	}
	return numWords;
}
