//*******************************************************************************************************
//
//        File:              substrings.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #9: Substrings
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               November 22, 2017
//
//
//        This program checks to see if a string exists in another string (if a 
//        string is a subset of another string). All input data comes from 
//        "string_data.txt," and it checks strings in sets of two at a time. If the
//        first string that is read in on each occasion is a substring of the second
//        string read in at that time, a pointer is assigned the memory location of
//        where the substring begins and is output to file and console, including
//        the entirety of the c-string beyond the memory location assigned to the 
//        pointer. If the first string is not a substring of the second, "NULL" is
//        output to file and console. The program stops when it reaches the end of
//        the input file provided. 
//
//        Files required:
//    			   1.      substrings.cpp	       - main .cpp file
//				   2.      string_data.txt	       - text file of input
//                 3.      a9.txt                  - text file of output
//
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

//*******************************************************************************************************

void run();

//*******************************************************************************************************

int main()
{
	run();

	return 0;
}

//*******************************************************************************************************

void run()
{
	const int SEARCHSIZE = 25,
		      LINEOFTEXTSIZE = 75;

	char searchString[SEARCHSIZE],
		 lineOfText[LINEOFTEXTSIZE];

	char* searchPtr = nullptr;

	ifstream inputFile;
	inputFile.open("string_data.txt");

	ofstream outputFile;
	outputFile.open("a9.txt", ios::app);

	cout << "PROGRAM RESULTS" << endl << endl;
	outputFile << "PROGRAM RESULTS" << endl << endl;

	if (!inputFile)
	{
		cout << "Error opening file." << endl;
		outputFile << "Error opening file." << endl;
	}
	else
	{
		while (!inputFile.eof())
		{
			inputFile.getline(searchString, SEARCHSIZE);
			inputFile.getline(lineOfText, LINEOFTEXTSIZE);

			searchPtr = strstr(lineOfText, searchString);

			if (searchPtr == nullptr)
			{
				cout << "NULL" << endl;
				outputFile << "NULL" << endl;
			}
			else
			{
				cout << searchPtr << endl;
				outputFile << searchPtr << endl;
			}
		}
	}
	inputFile.close();

	outputFile.close();
}

//*******************************************************************************************************
// 
// PROGRAM RESULTS
//
// webster university
// NULL
// it's funny all the time
// come to those who wait
// NULL
// now, night
// ther word for thesaurus?
// NULL
// city is just really organized lightning
// just a person who won't eat anything that can have kids
// briefcase is like a hotdog wearing earrings
// ; a wishbone and a backbone
// Press any key to continue . . .
// 
//*******************************************************************************************************