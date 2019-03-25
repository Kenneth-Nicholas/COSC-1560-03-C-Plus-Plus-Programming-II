//*******************************************************************************************************
//
//        File:              snack_driver.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #6: Snack
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Oct 11, 2017
//
//
//        This program...
//
//        Files required:
//    			   1.      snack_driver.cpp	   - main .cpp file
//				   2.      snack.cpp	       - snack class .cpp file
//                 3.      snack.h	           - header file containing state class definition
//				   4.      a6.txt		       - text file of output
//                 5.      snacks.txt          - text file of input
//
//
//*******************************************************************************************************

#include "snack.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

//*******************************************************************************************************

void readData(Snack &snack, ifstream &inputFile);
void loadArray(Snack snack, Snack snackArray[], const int SIZE, int &current);
void displayMenu(Snack snackArray[], const int SIZE, ofstream &outputFile, bool &continueProgram, string choice, int stringToInt, int location);

void writeData(Snack snackArray[], const int SIZE, ofstream &outputFile);

void displayAllFruits(Snack snackArray[], const int SIZE, int location);
void displayAllVegetables(Snack snackArray[], const int SIZE, int location);
void displayAllProcessedFoods();
void displayTheHighestCalorieFood();
void displayTheLowestCalorieFood();
void displayASpecificFoodByName();

//*******************************************************************************************************

int main()
{
	bool continueProgram = false;

	const int SIZE = 40;

	int stringToInt = 0,
		location = 0,
		current = 0;

	string choice;

	Snack snack,
		  snackArray[SIZE];

	ifstream inputFile;
	inputFile.open("snack_data.txt", ios::in);

	ofstream outputFile;
	outputFile.open("a6.txt", ios::app);

	cout << "Welcome to the Snack Information application" << endl;

	for (int i = 0, current = 0; i < SIZE; i++)
	{
		readData(snack, inputFile);
		loadArray(snack, snackArray, SIZE, current);
	}

	writeData(snackArray, SIZE, outputFile);

	inputFile.close();
	
	do
	{
		displayMenu(snackArray, SIZE, outputFile, continueProgram, choice, stringToInt, location);
		int current = 0;
	} 
	while (continueProgram == true);

	outputFile.close();

	return 0;
}

//*******************************************************************************************************

void readData(Snack &snack, ifstream &inputFile)
{
	char charHolder;
	double doubleHolder;
	int intHolder;
	string stringHolder;
	
	getline(inputFile, stringHolder);
	snack.setSnkName(stringHolder);

	inputFile >> charHolder;
	snack.setSnkType(charHolder);

	inputFile >> doubleHolder;
	snack.setSnkSize(doubleHolder);

	inputFile >> doubleHolder;
	snack.setSnkPrice(doubleHolder);

	inputFile >> intHolder;
	snack.setSnkCalories(intHolder);

	inputFile.ignore();
}

//*******************************************************************************************************

void loadArray(Snack snack, Snack snackArray[], const int SIZE, int &current)
{
	snackArray[current] = snack;

	current++;
}

//*******************************************************************************************************

void displayMenu(Snack snackArray[], const int SIZE, ofstream &outputFile,
	             bool &continueProgram, string choice, int stringToInt, int location)
{
		cout << endl
			 << "Please enter a selection from the following options: "
			 << "(e.g., enter \"1\" to display all fruits)" << endl
		     << endl;
		cout << "1. Display all Fruits" << endl
			 << "2. Display all Vegetables" << endl
			 << "3. Display all Procesed Snacks" << endl
			 << "4. Display the Lowest Calorie Snack" << endl
			 << "5. Display the Highest Calorie Snack" << endl
		   	 << "6. Display a Specific Food by Name" << endl
			 << "7. Quit" << endl
			 << endl;

		cin >> choice;

		stringstream converter(choice);										   //prevent infinite loop
																			   //from char entered as int
		converter >> stringToInt;											   //for switch statement
																			   //get input as string
		switch (stringToInt)												   //convert to int
		{
		case 1:																   //fruits
			displayAllFruits(snackArray, SIZE, location);
			continueProgram = true;
			break;

		case 2:																   //vegetables
			displayAllVegetables(snackArray, SIZE, location);
			continueProgram = true;
			break;

		case 3:																   //processed snacks
			continueProgram = true;
			break;

		case 4:																   //lowest calorie food
			continueProgram = true;
			break;

		case 5:																   //highest calorie food
			continueProgram = true;
			break;
	
		case 6:																   //specific food by name
			continueProgram = true;
			break;
	
		case 7:																   //quit
			cout << endl;
			continueProgram = false;
			break;

		default:															   //default
			cout << endl
				 << "Invalid selection." << endl;
			continueProgram = true;
			break;
		}
}

//*******************************************************************************************************

void displayAllFruits(Snack snackArray[], const int SIZE, int location)
{
	Snack fruitHolder(snackArray[location]);

	for (int i = 0; i < SIZE; i++)
	{
		char fVorP = fruitHolder.getSnkType();

		if (fVorP == 'F')
		{
			cout << fruitHolder.getSnkName() << endl;
		}
		location++;
	}
}

//*******************************************************************************************************

void displayAllVegetables(Snack snackArray[], const int SIZE, int location)
{
	for (int i = 0; i < SIZE; i++)
	{
		Snack snackHolder(snackArray[location]);
		if (snackHolder.getSnkType() == 'V')
		{
			cout << snackHolder.getSnkName() << endl;
		}
		location++;
	}
}

//*******************************************************************************************************

void displayAllProcessedFoods()
{

}

//*******************************************************************************************************

void writeData(Snack snackArray[], const int SIZE, ofstream &outputFile)
{
	for (int i = 0; i < SIZE; i++)
	{
		outputFile << snackArray[i].getSnkName() << endl
			       << snackArray[i].getSnkType() << endl
			       << snackArray[i].getSnkSize() << endl
			       << snackArray[i].getSnkPrice() << endl
			       << snackArray[i].getSnkCalories() << endl
			       << endl;
	}
}