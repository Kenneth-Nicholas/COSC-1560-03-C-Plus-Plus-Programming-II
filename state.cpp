//*******************************************************************************************************
//
//        File:              state.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #3: States
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
//        state's population, and the state's nickname. The program also outputs this data to both the 
//        console, and a text file titled "a3.txt" in an easy to read format.
//
//        Other files required:
//				   1.      a3.txt	- text file of output
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

void outputData(class State s);

//*******************************************************************************************************

int main()
{
	State s1,
		  s2,
		  s3,
		  s4,
		  s5;

	s1.setStateName("California");
	s1.setStateAbbr("CA");
	s1.setStateCapitol("Sacramento");
	s1.setStateStatehood("Sept. 9, 1850");
	s1.setStateNickname("Golden State");
	s1.setStatePopulation(37253956);

	s2.setStateName("Missouri");
	s2.setStateAbbr("MO");
	s2.setStateCapitol("Jefferson City");
	s2.setStateStatehood("Aug. 10, 1821");
	s2.setStateNickname("Show Me State");
	s2.setStatePopulation(5988927);

	s3.setStateName("Wyoming");
	s3.setStateAbbr("WY");
	s3.setStateCapitol("Cheyenne");
	s3.setStateStatehood("July 10, 1890");
	s3.setStateNickname("Equality State");
	s3.setStatePopulation(563626);

	s4.setStateName("Maine");
	s4.setStateAbbr("ME");
	s4.setStateCapitol("Augusta");
	s4.setStateStatehood("March 15, 1820");
	s4.setStateNickname("Pine Tree State");
	s4.setStatePopulation(1328361);

	s5.setStateName("Georgia");
	s5.setStateAbbr("GA");
	s5.setStateCapitol("Atlanta");
	s5.setStateStatehood("Jan. 2, 1788");
	s5.setStateNickname("Peach State");
	s5.setStatePopulation(9687653);

	ofstream outputFile;
	outputFile.open("a3.txt", ios::app);

	outputFile << "PROGRAM RESULTS:" << endl
		       << endl;

	cout << "PROGRAM RESULTS:" << endl
		 << endl;

	outputData(s1);
	outputData(s2);
	outputData(s3);
	outputData(s4);
	outputData(s5);

	outputFile.close();

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

void outputData(State s)
{
	ofstream outputFile;
	outputFile.open("a3.txt", ios:: app);

	outputFile << "       Name:      " << s.getStateName() << endl
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

	outputFile.close();
}

//*******************************************************************************************************
// 
// PROGRAM RESULTS:
//
//        Name:      California
//        Abbr.:     CA
//        Capitol:   Sacramento
//        Statehood: Sept. 9, 1850
//        Population:37253956
//        Nickname:  Golden State
//
//        Name:      Missouri
//        Abbr.:     MO
//        Capitol:   Jefferson City
//        Statehood: Aug. 10, 1821
//        Population:5988927
//        Nickname:  Show Me State
// 
//        Name:      Wyoming
//        Abbr.:     WY
//        Capitol:   Cheyenne
//        Statehood: July 10, 1890
//        Population:563626
//        Nickname:  Equality State
// 
//        Name:      Maine
//        Abbr.:     ME
//        Capitol:   Augusta
//        Statehood: March 15, 1820
//        Population:1328361
//        Nickname:  Pine Tree State
//
//        Name:      Georgia
//        Abbr.:     GA
//        Capitol:   Atlanta
//        Statehood: Jan. 2, 1788
//        Population:9687653
//        Nickname:  Peach State
//
// Press any key to continue . . .
//
//*******************************************************************************************************