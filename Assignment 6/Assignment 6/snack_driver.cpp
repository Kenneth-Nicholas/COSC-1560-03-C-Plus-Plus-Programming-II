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
//        This program reads data regarding snacks from file and stores the data in an array; It greets
//        the user, displays a menu, and asks the user to make a selection from the menu. Once the user
//        makes a selection, the program then displays the results corresponding to the user's input. 
//        In addition, the program also prints these results into a separate .txt file titled "a6.txt."
//        The program continues running until the user makes a selection from the menu to quit. 
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

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "snack.h"

using namespace std;

//*******************************************************************************************************

void readData(Snack &s, ifstream &inFile);
void loadArray(Snack s, Snack snackArray[], int SIZE, int &current);
void displayMenu(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, ofstream &outFile, 
	bool &continueProgram, string choice, string foodName, int stringToInt, int location, bool found);
void displayAllFruits(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, 
	ofstream &outFile, int location);
void displayAllVegetables(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, 
	ofstream &outFile, int location);
void displayAllProcessedFoods(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, 
	ofstream &outFile, int location);
void displayTheLowestCalorieFood(Snack snackArray[], Snack snackHolder, const int SIZE, 
	ofstream &outFile, int location);
void displayTheHighestCalorieFood(Snack snackArray[], Snack snackHolder, const int SIZE, 
	ofstream &outFile, int location);
void displayASpecificFoodByName(Snack snackArray[], Snack snackHolder, const int SIZE, 
	ofstream &outFile, int location, string foodName, bool found);
void quitProgram(ofstream &outFile);


//*******************************************************************************************************

int main()
{
	bool continueProgram = false,
		 found = false;

	char fVOrP = 'Z';

	const int SIZE = 40;

	int current = 0,
		location = 0,
		stringToInt = 0;

	string choice,
		   foodName;

	Snack s,
		  snackHolder,
		  snackArray[SIZE];

	ifstream inputFile;
	inputFile.open("snack_data.txt", ios::in);

	ofstream outputFile;
	outputFile.open("a6.txt", ios::app);

	cout << "Welcome to the Snack Information application" << endl;

	outputFile << "Welcome to the Snack Information application" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		readData(s, inputFile);
		loadArray(s, snackArray, SIZE, current);
	}

	inputFile.close();

	do
	{
		displayMenu(snackArray, snackHolder, fVOrP, SIZE, outputFile, continueProgram, choice, 
			foodName, stringToInt, location, found);
		int current = 0;
	} 
	while (continueProgram == true);

	outputFile.close();

	return 0;
}

//*******************************************************************************************************

void readData(Snack &s, ifstream &inFile)
{
	char charHolder;
	double doubleHolder;
	string stringHolder;
	int intHolder;

	getline(inFile, stringHolder);
	s.setSnkName(stringHolder);

	inFile >> charHolder;
	s.setSnkType(charHolder);

	inFile >> doubleHolder;
	s.setSnkSize(doubleHolder);

	inFile >> doubleHolder;
	s.setSnkPrice(doubleHolder);

	inFile >> intHolder;
	s.setSnkCalories(intHolder);

	getline(inFile, stringHolder);
}

//*******************************************************************************************************

void loadArray(Snack s, Snack snackArray[], int SIZE, int &current)
{
	snackArray[current].setSnkName(s.getSnkName());
	snackArray[current].setSnkType(s.getSnkType());
	snackArray[current].setSnkSize(s.getSnkSize());
	snackArray[current].setSnkPrice(s.getSnkPrice());
	snackArray[current].setSnkCalories(s.getSnkCalories());

	current++;
}

//*******************************************************************************************************

void displayMenu(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, ofstream &outFile,
	bool &continueProgram, string choice, string foodName, int stringToInt, int location, bool found)
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

	outFile << endl
		    << "Please enter a selection from the following options: "
		    << "(e.g., enter \"1\" to display all fruits)" << endl
		    << endl;
	outFile << "1. Display all Fruits" << endl
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
		displayAllFruits(snackArray, snackHolder, fVOrP, SIZE, outFile, location);

		continueProgram = true;

		break;

	case 2:																   //vegetables
		displayAllVegetables(snackArray, snackHolder, fVOrP, SIZE, outFile,location);

		continueProgram = true;

		break;

	case 3:																   //processed snacks
		displayAllProcessedFoods(snackArray, snackHolder, fVOrP, SIZE, outFile, location);

		continueProgram = true;

		break;

	case 4:																   //lowest calorie food
		displayTheLowestCalorieFood(snackArray, snackHolder, SIZE, outFile, location);

		continueProgram = true;

		break;

	case 5:																   //highest calorie food
		displayTheHighestCalorieFood(snackArray, snackHolder, SIZE, outFile, location);

		continueProgram = true;

		break;

	case 6:																   //specific food by name
		displayASpecificFoodByName(snackArray, snackHolder, SIZE, outFile, location, foodName, found);

		continueProgram = true;

		break;

	case 7:																   //quit
		cout << endl;

		continueProgram = false;

		quitProgram(outFile);

		break;

	default:															   //default
		cout << endl
			 << "Invalid selection." << endl;

		outFile << endl
			    << "Invalid selection." << endl;

		continueProgram = true;

		break;
	}
}

//*******************************************************************************************************

void displayAllFruits(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, 
	ofstream &outFile, int location)
{
	while (location < SIZE)
	{
		snackHolder = snackArray[location];

		fVOrP = snackArray[location].getSnkType();

		if (fVOrP == 'F')
		{	
			cout << endl
				 << "Name of Item:                      " << snackHolder.getSnkName() << endl
				 << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				 << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				 << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;

			outFile << endl
				    << "Name of Item:                      " << snackHolder.getSnkName() << endl
				    << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				    << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				    << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;
		}
		location++;
	}
}

//*******************************************************************************************************

void displayAllVegetables(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, 
	ofstream &outFile, int location)
{
	while (location < SIZE)
	{
		snackHolder = snackArray[location];

		fVOrP = snackArray[location].getSnkType();

		if (snackHolder.getSnkType() == 'V')
		{
			cout << endl
				 << "Name of Item:                      " << snackHolder.getSnkName() << endl
				 << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				 << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				 << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;

			outFile << endl
				    << "Name of Item:                      " << snackHolder.getSnkName() << endl
				    << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				    << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				    << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;
		}
		location++;
	}
}

//*******************************************************************************************************

void displayAllProcessedFoods(Snack snackArray[], Snack snackHolder, char fVOrP, const int SIZE, 
	ofstream &outFile,int location)
{
	while (location < SIZE)
	{
		snackHolder = snackArray[location];

		fVOrP = snackArray[location].getSnkType();

		if (snackHolder.getSnkType() == 'P')
		{
			cout << endl
				 << "Name of Item:                      " << snackHolder.getSnkName() << endl
				 << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				 << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				 << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;

			outFile << endl
				    << "Name of Item:                      " << snackHolder.getSnkName() << endl
				    << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				    << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				    << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;
		}
		location++;
	}
}

//*******************************************************************************************************

void displayTheLowestCalorieFood(Snack snackArray[], Snack snackHolder, const int SIZE, 
	ofstream &outFile, int location)
{
	snackHolder = snackArray[location];
	
	while (location < SIZE)
	{
		if (snackHolder.getSnkCalories() > snackArray[location].getSnkCalories())
		{
			snackHolder = snackArray[location];
		}
		location++;
	}
	cout << endl
		 << "Name of Item:                      " << snackHolder.getSnkName() << endl
		 << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
		 << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
		 << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;

	outFile << endl
		    << "Name of Item:                      " << snackHolder.getSnkName() << endl
		    << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
		    << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
		    << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;
}

//*******************************************************************************************************

void displayTheHighestCalorieFood(Snack snackArray[], Snack snackHolder, const int SIZE, 
	ofstream &outFile, int location)
{
	snackHolder = snackArray[location];

	while (location < SIZE)
	{
		if (snackHolder.getSnkCalories() < snackArray[location].getSnkCalories())
		{
			snackHolder = snackArray[location];
		}
		location++;
	}
	cout << endl
		 << "Name of Item:                      " << snackHolder.getSnkName() << endl
		 << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
		 << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
		 << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;

	outFile << endl
		    << "Name of Item:                      " << snackHolder.getSnkName() << endl
		    << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
		    << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
		    << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;
}

//*******************************************************************************************************

void displayASpecificFoodByName(Snack snackArray[], Snack snackHolder, const int SIZE, 
	ofstream &outFile, int location, string foodName, bool found)
{
	getline(cin, foodName);
	
	cout << endl
		 << "Please enter a specific food: ";

	outFile << endl
		    << "Please enter a specific food: ";

	getline(cin, foodName);

	snackHolder = snackArray[location];

	while (location < SIZE)
	{
		
		if (foodName == snackArray[location].getSnkName())
		{
			found = true;

			snackHolder = snackArray[location];

			cout << endl
				 << "Name of Item:                      " << snackHolder.getSnkName() << endl
				 << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				 << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				 << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;

			outFile << endl
				    << "Name of Item:                      " << snackHolder.getSnkName() << endl
				    << "Portion Size (In Ounces):          " << snackHolder.getSnkSize() << endl
				    << "Cost Per Portion:                  " << snackHolder.getSnkPrice() << endl
				    << "Calories Per Serving:              " << snackHolder.getSnkCalories() << endl;

		}
		else if ((location == (SIZE - 1)) && found == false)
		{
			cout << endl
				 << "Unable to loacte food" << endl;

			outFile << endl
				    << "Unable to loacte food" << endl;
		}
		location++;
	}

}

//*******************************************************************************************************

void quitProgram(ofstream &outFile)
{
	cout << "End of Program" << endl
		 << endl;

	outFile << "End of Program" << endl
		    << endl;
}

//*******************************************************************************************************