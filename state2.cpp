//*******************************************************************************************************
//
//        File:              state2.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #4: States2
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Sept 20, 2017
//
//
//        This program uses a class in order to represent US states; Each instance of the class
//        represents one US State. More specifically, each instance of the class contains the following
//        data: the state's name, abbreviation, Capitol, the date the state was granted statehood, the 
//        state's population, and the state's nickname. The program reads this data from a file
//        and then echos the data to an output file titled "a4.txt" in an easy to read format.
//
//        Other files required:
//    			   2.      state.txt - text file of input
//				   1.      a4.txt	- text file of output
//
//*******************************************************************************************************

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class State
{
	private:
		string name,
			   abbr,
			   capitol,
		 	   statehood,
			   nickname;
		int population;

	public:
		void setStateName(string nameOf);
		void setStateAbbr(string abbrOf);
		void setStateCapitol(string capitolOf);
		void setStateStatehood(string statehoodOf);
		void setStateNickname(string nicknameOf);
		void setStatePopulation(int populationOf);

		string getStateName();
		string getStateAbbr();
		string getStateCapitol();
		string getStateStatehood();
		string getStateNickname();
		int getStatePopulation();

	State();
};

State::State()
{
	name = "",
	abbr = "",
	capitol = "",
	statehood = "",
	nickname = "";
	population = 0;
};

//*******************************************************************************************************

void outputData(class State s, fstream &outFile);
void readData(State &s, fstream &inFile);

//*******************************************************************************************************

int main()
{
	State s1;

	fstream inputFile;
	inputFile.open("state.txt", ios::in);

	fstream outputFile;
	outputFile.open("a4.txt", ios::out);

	outputFile << "PROGRAM RESULTS:" << endl
		<< endl;

	cout << "PROGRAM RESULTS:" << endl
		<< endl;

	for (int i = 0; i < 21; i++)
	{
		readData(s1, inputFile);
		outputData(s1, outputFile);
	}

	outputFile.close();
	inputFile.close();
                  
	return 0;
}

//*******************************************************************************************************

void State::setStateName(string nameOf)
{
	name = nameOf;
}

//*******************************************************************************************************

void State::setStateAbbr(string abbrOf)
{
	abbr = abbrOf;
}

//*******************************************************************************************************

void State::setStateCapitol(string capitolOf)
{
	capitol = capitolOf;
}

//*******************************************************************************************************

void State::setStateStatehood(string statehoodOf)
{
	statehood = statehoodOf;
}

//*******************************************************************************************************

void State::setStateNickname(string nicknameOf)
{
	nickname = nicknameOf;
}

//*******************************************************************************************************

void State::setStatePopulation(int populationOf)
{
	population = populationOf;
}

//*******************************************************************************************************

string State::getStateName()
{
	return name;
}

//*******************************************************************************************************

string State::getStateAbbr()
{
	return abbr;
}

//*******************************************************************************************************

string State::getStateCapitol()
{
	return capitol;
}

//*******************************************************************************************************

string State::getStateStatehood()
{
	return statehood;
}

//*******************************************************************************************************

string State::getStateNickname()
{
	return nickname;
}

//*******************************************************************************************************

int State::getStatePopulation()
{
	return population;
}

//*******************************************************************************************************

void outputData(State s, fstream &outFile)
{
	outFile << "       Name:      " << s.getStateName() << endl
		    << "       Abbr.:     " << s.getStateAbbr() << endl
		    << "       Capitol:   " << s.getStateCapitol() << endl
		    << "       Statehood: " << s.getStateStatehood() << endl
	        << "       Population:" << s.getStatePopulation() << endl
			<< "       Nickname:  " << s.getStateNickname() << endl
		    << endl;

	cout << "       Name:      " << s.getStateName() << endl
		 << "       Abbr.:     " << s.getStateAbbr() << endl
		 << "       Capitol:   " << s.getStateCapitol() << endl
		 << "       Statehood: " << s.getStateStatehood() << endl
		 << "       Population:" << s.getStatePopulation() << endl
		 << "       Nickname:  " << s.getStateNickname() << endl
		 << endl;
}

//*******************************************************************************************************

void readData(State &s, fstream &inFile)
{
	string stringHolder;
	int intHolder;

	getline(inFile, stringHolder);
	s.setStateName(stringHolder);
	getline(inFile, stringHolder);
	s.setStateAbbr(stringHolder);
	getline(inFile, stringHolder);
	s.setStateCapitol(stringHolder);
	getline(inFile, stringHolder);
	s.setStateStatehood(stringHolder);
	inFile >> intHolder;
	s.setStatePopulation(intHolder);
	getline(inFile, stringHolder);
	getline(inFile, stringHolder);
	s.setStateNickname(stringHolder);
}

//*******************************************************************************************************
// 
// PROGRAM RESULTS:
//
//       Name:      Nebraska
//       Abbr.:     Ne
//       Capitol:   Omaha
//       Statehood: March 1, 1867
//       Population:1845525
//       Nickname:  Cornhusker State
//
//       Name:      California
//       Abbr.:     CA
//       Capitol:   Sacramento
//       Statehood: Sept. 9, 1850
//       Population:37253956
//       Nickname:  Golden State
//
//       Name:      Missouri
//       Abbr.:     MO
//       Capitol:   Jefferson City
//       Statehood: Aug. 10, 1821
//       Population:5988927
//       Nickname:  Show Me State
//
//       Name:      Wyoming
//       Abbr.:     WY
//       Capitol:   Cheyenne
//       Statehood: July 10, 1890
//       Population:576412
//       Nickname:  Equality State
//
//       Name:      Washington
//       Abbr.:     WA
//       Capitol:   Olympia
//       Statehood: Nov. 11, 1889
//       Population:6897012
//       Nickname:  The Evergreen State
//
//       Name:      Colorado
//       Abbr.:     CO
//       Capitol:   Denver
//       Statehood: Aug. 1, 1876
//       Population:5187582
//       Nickname:  Centennial State
//
//       Name:      Connecticut
//       Abbr.:     CT
//       Capitol:   Hartford
//       Statehood: Jan. 9, 1788
//       Population:3590347
//       Nickname:  The Constitution State
//
//       Name:      Alaska
//       Abbr.:     AK
//       Capitol:   Juneau
//       Statehood: Jan. 3, 1959
//       Population:731449
//       Nickname:  The Last Frontier
//
//       Name:      Florida
//       Abbr.:     FL
//       Capitol:   Tallahassee
//       Statehood: Mar. 3, 1845
//       Population:19317568
//       Nickname:  The Sunshine State
//
//       Name:      Virginia
//       Abbr.:     VA
//       Capitol:   Richmond
//       Statehood: June 25, 1788
//       Population:8185866
//       Nickname:  Old Dominion
//
//       Name:      Hawaii
//       Abbr.:     HI
//       Capitol:   Honolulu
//       Statehood: Aug. 21, 1959
//       Population:1392313
//       Nickname:  The Aloha State
//
//       Name:      Utah
//       Abbr.:     UT
//       Capitol:   Salt Lake City
//       Statehood: Jan. 4, 1896
//       Population:2855287
//       Nickname:  Beehive State
//
//       Name:      Minnesota
//       Abbr.:     MN
//       Capitol:   Saint Paul
//       Statehood: May 11, 1858
//       Population:5379139
//       Nickname:  Land of 10,000 Lakes
//
//       Name:      Georgia
//       Abbr.:     GE
//       Capitol:   Atlanta
//       Statehood: Jan. 2, 1788
//       Population:9919945
//       Nickname:  Peach State
//
//       Name:      Maryland
//       Abbr.:     MA
//       Capitol:   Annapolis
//       Statehood: April 28, 1788
//       Population:5928814
//       Nickname:  Old Line State
//
//       Name:      Texas
//       Abbr.:     TX
//       Capitol:   Austin
//       Statehood: December 29, 1845
//       Population:26448193
//       Nickname:  Lone Star State
//
//       Name:      Iowa
//       Abbr.:     IA
//       Capitol:   Des Moines
//       Statehood: December 28, 1846
//       Population:3090416
//       Nickname:  Hawkeye State
//
//       Name:      Idaho
//       Abbr.:     ID
//       Capitol:   Boise
//       Statehood: July 3, 1890
//       Population:1612136
//       Nickname:  Gem State
//
//       Name:      Louisiana
//       Abbr.:     LA
//       Capitol:   Baton Rouge
//       Statehood: April 30, 1812
//       Population:4625470
//       Nickname:  Pelican State
//
//       Name:      Vermont
//       Abbr.:     VT
//       Capitol:   Montpelier
//       Statehood: March 4, 1791
//       Population:626630
//       Nickname:  Green Mountain State
//
//       Name:      Alabama
//       Abbr.:     AL
//       Capitol:   Montgomery
//       Statehood: December 14, 1819
//       Population:4833722
//       Nickname:  Yellowhammer State
//
//*******************************************************************************************************