//*******************************************************************************************************
//
//        File:              state_driver.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #5: States3
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Oct 5, 2017
//
//
//        This program uses a class in order to represent US states; Each instance of the class
//        represents one US State. More specifically, each instance of the class contains the following
//        data: the state's name, abbreviation, Capitol, the date the state was granted statehood, the 
//        state's population, and the state's nickname. The program reads this data from a file
//        and stores it in an array of State objects; It then prompts the user to enter a state name
//        or abbreviation, and if the user enters a name or abbreviation correctly, the program displays
//        all of the data that is stored in the array for that particular state entered.
//
//        Other files required:
//    			   1.      state.cpp	- state class file
//				   2.      state.h		- header file containing state class definition
//                 3.      state.txt	- text file of input
//				   4.      a5.txt		- text file of output
//
//
//*******************************************************************************************************

#include "state.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//*******************************************************************************************************

void readData(State &state, ifstream &inFile);
void loadArray(State state, State stateArray[], int SIZE, int &current);
void promptUser(string &s);
bool searchName(State stateArray[], int SIZE, string name, int &location);
bool searchAbbr(State stateArray[], int SIZE, string abbr, int &location);
void outputResult(State stateArray[], string s, int location, bool result, ofstream &outFile);

//*******************************************************************************************************

int main()
{
	const int SIZE = 28;

	int location;

	State state,
		  stateArray[SIZE];

	string s,
		   name,
		   abbr;

	bool result;

	ifstream inputFile;
	inputFile.open("state.txt", ios::in);

	ofstream outputFile;
	outputFile.open("a5.txt", ios::app);

	for (int i = 0, current = 0; i < SIZE; i++)
	{
		readData(state, inputFile);
		loadArray(state, stateArray, SIZE, current);
	}

	for (int i = 1; i > 0; i++)
	{
		promptUser(s);

		if ((s.length() == 2) && ((s.at(0) >= 65) && (s.at(0) <= 90)) 
		   && ((s.at(1) >= 65) && (s.at(1) <= 90)))
		{
			abbr = s;
			result = searchAbbr(stateArray, SIZE, abbr, location);

		}
		else if ((s.length() >= 4) && ((s.at(0) >= 65) && (s.at(0) <= 90))
			    && ((s.at(1) >= 97) && (s.at(1) <= 122)) && ((s.at(2) >= 97) 
			    && (s.at(2) <= 122)) && ((s.at(3) >= 97) && (s.at(3) <= 122)))
		{
			name = s;
			result = searchName(stateArray, SIZE, name, location);		

		}
		else
		{
			i = -1;
		}

		outputResult(stateArray, s, location, result, outputFile);
	}

	inputFile.close();
	outputFile.close();

	return 0;
}

//*******************************************************************************************************

void readData(State &state, ifstream &inFile)
{
	string stringHolder;
	int intHolder;

	getline(inFile, stringHolder);
	state.setStateName(stringHolder);
	getline(inFile, stringHolder);
	state.setStateAbbr(stringHolder);
	getline(inFile, stringHolder);
	state.setStateCapitol(stringHolder);
	getline(inFile, stringHolder);
	state.setStateStatehood(stringHolder);
	inFile >> intHolder;
	state.setStatePopulation(intHolder);
	getline(inFile, stringHolder);
	getline(inFile, stringHolder);
	state.setStateNickname(stringHolder);
}

//*******************************************************************************************************

void loadArray(State state, State stateArray[], int SIZE, int &current)
{
	stateArray[current] = state;

	current++;
}

//*******************************************************************************************************

void promptUser(string &s)
{
	cout << "       User entered: ";

	cin >> s;
}

//*******************************************************************************************************

bool searchName(State stateArray[], int SIZE, string name, int &location)
{
	bool foundOrNot;

	for (int i = 0; i < SIZE; i++)
	{
		if (name == stateArray[i].getStateName())
		{
			location = i;
			foundOrNot = true;
			i = SIZE;
		}
		else
		{
			location = -1;
			foundOrNot = false;
		}
	}
	
	return foundOrNot;
}

//*******************************************************************************************************

bool searchAbbr(State stateArray[], int SIZE, string abbr, int &location)
{
	bool foundOrNot;

	for (int i = 0; i < SIZE; i++)
	{
		if (abbr == stateArray[i].getStateAbbr())
		{
			location = i;
			foundOrNot = true;
			i = SIZE;
		}
		else
		{
			location = -1;
			foundOrNot = false;
		}
	}

	return foundOrNot;
}

//*******************************************************************************************************

void outputResult(State stateArray[], string s, int location, bool result, ofstream &outFile)
{
	cout << "       Result:       ";

	outFile << "       User entered: " << s << endl
		    << "       Result:       ";

	if (result == 1)
	{
		cout << "Found"
			 << endl
			 << endl;

		outFile << "Found"
			    << endl
			    << endl;

		outFile << "       Name:      " << stateArray[location].getStateName() << endl
			    << "       Abbr.:     " << stateArray[location].getStateAbbr() << endl
		    	<< "       Capitol:   " << stateArray[location].getStateCapitol() << endl
			    << "       Statehood: " << stateArray[location].getStateStatehood() << endl
			    << "       Population:" << stateArray[location].getStatePopulation() << endl
			    << "       Nickname:  " << stateArray[location].getStateNickname() << endl
			    << endl;

		cout << "       Name:      " << stateArray[location].getStateName() << endl
			 << "       Abbr.:     " << stateArray[location].getStateAbbr() << endl
			 << "       Capitol:   " << stateArray[location].getStateCapitol() << endl
			 << "       Statehood: " << stateArray[location].getStateStatehood() << endl
			 << "       Population:" << stateArray[location].getStatePopulation() << endl
			 << "       Nickname:  " << stateArray[location].getStateNickname() << endl
			 << endl;
	}
	else
	{
		cout << "Not Found"
			 << endl
			 << endl;

		outFile << "Not Found"
			    << endl
			    << endl;
	}

}

//*******************************************************************************************************
//
//        User entered: Hawaii
//       Result:       Found
//
//       Name:      Hawaii
//       Abbr.:     HI
//       Capitol:   Honolulu
//       Statehood: Aug. 21, 1959
//       Population:1392313
//       Nickname:  The Aloha State
//
//       User entered: WI
//       Result:       Not Found
//
//       User entered: MO
//       Result:       Found
//
//       Name:      Missouri
//       Abbr.:     MO
//       Capitol:   Jefferson City
//       Statehood: Aug. 10, 1821
//       Population:5988927
//       Nickname:  Show Me State
//
//*******************************************************************************************************
