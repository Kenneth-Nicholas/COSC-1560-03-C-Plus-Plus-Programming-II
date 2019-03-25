//*******************************************************************************************************

#ifndef STATE_H
#define STATE_H

//*******************************************************************************************************

#include <string>

using namespace std;

//*******************************************************************************************************

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

//*******************************************************************************************************

#endif

//*******************************************************************************************************