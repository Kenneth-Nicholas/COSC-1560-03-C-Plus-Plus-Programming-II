//*******************************************************************************************************
//
//        File:              baby_driver.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #11: Baby Names
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Dec 18, 2017
//
//
//        This program reads data from an external text file and loads it into an 
//        array of pointers to "Baby" objects. Once data is loaded into the array
//        from file, the data is reported to the console. The program then answers
//        a series of ten questions which are recorded in both the console and in 
//        an output data file titled "a11.txt"; It answers these questions by 
//        using logic to sift through all the data.
//
//        Files required:
//    			   1.      baby_driver.cpp	       - main .cpp file
//				   2.      baby.h	               - header file of baby class
//                 3.      baby.cpp	               - baby class
//                 4.      baby_names_v2.txt       - input .txt data file
//                 5.      a11.txt                 - output of results in .txt file
//
//
//*******************************************************************************************************

#include "baby.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//*******************************************************************************************************

void loadData(Baby* babyArray[], int SIZE);
void outputResults(Baby* babyArray[], int SIZE);

//*******************************************************************************************************

int main()
{
	const int SIZE = 8073;

	Baby* babyArray[SIZE];

	loadData(babyArray, SIZE);

	outputResults(babyArray, SIZE);

	delete[] babyArray;

	return 0;
}

//*******************************************************************************************************

void loadData(Baby* babyArray[], int SIZE)
{
	int intHolder;

	string stringHolder;
	
	ifstream inputFile;
	inputFile.open("baby_names_v2.txt");
	
	for (int i = 0; i < SIZE; i++)
	{
		babyArray[i] = new Baby;

		inputFile >> intHolder;
		babyArray[i]->setYearOfBirth(intHolder);

		inputFile >> stringHolder;
		babyArray[i]->setGenderOfBaby(stringHolder);

		inputFile.ignore();

		getline(inputFile, stringHolder, '\t');
		babyArray[i]->setEthnicityOfBaby(stringHolder);

		inputFile >> stringHolder;
		babyArray[i]->setNameOfBaby(stringHolder);

		inputFile >> intHolder;
		babyArray[i]->setCountOfBabies(intHolder);

		inputFile >> intHolder;
		babyArray[i]->setRankOfName(intHolder);
	}

	inputFile.close();
}

//*******************************************************************************************************

void outputResults(Baby* babyArray[], int SIZE)
{
	char camString[] = "CAM";
	
	int femaleNamesBeginningWithSInTwentyThirteen = 0,
		maleNamesBeginningWithYInTwentyEleven = 0,
		femalesNamedGenesisTwentyEleven = 0,
		femalesNamedGenesisTwentyTwelve = 0,
		femalesNamedGenesisTwentyThirteen = 0,
		femalesNamedGenesisTwentyFourteen = 0,
		femalesNamedGenesisTwentyElevenToTwentyFourteen = 0,
		asianAndPacificIslanderMaleNamesInTwentyEleven = 0,
		maleNamesContainingCAMForTwentyFourteen = 0,
		maleBabiesInTwentyThirteen = 0,
		hispanicBabiesTwentyTwelve = 0,
		hispanicBabiesTwentyThirteen = 0,
		femaleHispanicRankHolder = SIZE,
		maleHispanicRankHolder = SIZE,
		femaleHispanicCountHolder = 0,
		maleHispanicCountHolder = SIZE,
		maleBlackCountHolder = SIZE,
		femaleBlackCountHolder = SIZE,
		elevenFCountHolder = 0,
		elevenMCountHolder = 0,
		twelveFCountHolder = 0,
		twelveMCountHolder = 0,
		thirteenFCountHolder = 0,
		thirteenMCountHolder = 0,
		fourteenFCountHolder = 0,
		fourteenMCountHolder = 0;

	string femaleHispanicTopRankNameHolder = "",
		   maleHispanicTopRankNameHolder = "",
		   maleBlackRankNameHolder = "",
		   femaleBlackRankNameHolder = "",
		   elevenFNameHolder = "",
		   elevenMNameHolder = "",
		   twelveFNameHolder = "",
		   twelveMNameHolder = "",
		   thirteenFNameHolder = "",
		   thirteenMNameHolder = "",
		   fourteenFNameHolder = "",
		   fourteenMNameHolder = "";

	ofstream outputFile;
	outputFile.open("a11.txt", ios::app);

	for (int i = 0; i < SIZE; i++)
	{
		if (babyArray[i]->getYearOfBirth() == 2013)
		{
			if (babyArray[i]->getGenderOfBaby() == "FEMALE")
			{
				if (babyArray[i]->getNameOfBaby().at(0) == 'S')
				{
					femaleNamesBeginningWithSInTwentyThirteen++;
				}
			}
		}
	}

	outputFile << "1. How many Female names began with the letter 'S' in the year 2013?" 
		       << endl << endl
		       << femaleNamesBeginningWithSInTwentyThirteen 
			   << " Female names begane with the letter 'S' in 2013." << endl
		       << endl << endl;

	cout << "1. How many Female names began with the letter 'S' in the year 2013?" 
		 << endl << endl
		 << femaleNamesBeginningWithSInTwentyThirteen
		 << " Female names begane with the letter 'S' in 2013." << endl
		 << endl << endl;
	
	for (int j = 0; j < SIZE; j++)
	{
		if (babyArray[j]->getYearOfBirth() == 2011)
		{
			if (babyArray[j]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[j]->getNameOfBaby().at(0) == 'Y')
				{
					maleNamesBeginningWithYInTwentyEleven++;
				}
			}
		}
	}

	outputFile << "2. How many Male names began with the letter 'Y' in the year 2011?" 
		       << endl << endl
		       << maleNamesBeginningWithYInTwentyEleven
		       << " Male names begane with the letter 'Y' in 2011." << endl
		       << endl << endl;

	cout << "2. How many Male names began with the letter 'Y' in the year 2011?" 
		 << endl << endl
		 << maleNamesBeginningWithYInTwentyEleven
		 << " Male names begane with the letter 'Y' in 2011." << endl
		 << endl << endl;

	for (int k = 0; k < SIZE; k++)
	{
		if (babyArray[k]->getYearOfBirth() == 2011)
		{
			if (babyArray[k]->getGenderOfBaby() == "FEMALE")
			{
				if ((babyArray[k]->getNameOfBaby() == "GENESIS"))
				{
					femalesNamedGenesisTwentyEleven++;
				}
			}
		}
		else if (babyArray[k]->getYearOfBirth() == 2012)
		{
			if (babyArray[k]->getGenderOfBaby() == "FEMALE")
			{
				if ((babyArray[k]->getNameOfBaby() == "GENESIS"))
				{
					femalesNamedGenesisTwentyTwelve++;
				}
			}
		}
		else if (babyArray[k]->getYearOfBirth() == 2013)
		{
			if (babyArray[k]->getGenderOfBaby() == "FEMALE")
			{
				if ((babyArray[k]->getNameOfBaby() == "GENESIS"))
				{
					femalesNamedGenesisTwentyThirteen++;
				}
			}
		}
		else if (babyArray[k]->getYearOfBirth() == 2014)
		{
			if (babyArray[k]->getGenderOfBaby() == "FEMALE")
			{
				if ((babyArray[k]->getNameOfBaby() == "GENESIS"))
				{
					femalesNamedGenesisTwentyFourteen++;
				}
			}
		}
	}

	femalesNamedGenesisTwentyElevenToTwentyFourteen += femalesNamedGenesisTwentyEleven;
	femalesNamedGenesisTwentyElevenToTwentyFourteen += femalesNamedGenesisTwentyTwelve;
	femalesNamedGenesisTwentyElevenToTwentyFourteen += femalesNamedGenesisTwentyThirteen;
	femalesNamedGenesisTwentyElevenToTwentyFourteen += femalesNamedGenesisTwentyFourteen;

	outputFile << "3. How many Female babies were named Genesis in the years 2011 - 2014?" 
		       << endl << endl
		       << femalesNamedGenesisTwentyEleven 
			   << " Female babies were named Genesis in 2011." << endl
		       << femalesNamedGenesisTwentyTwelve
			   << " Female babies were named Genesis in 2012." << endl
			   << femalesNamedGenesisTwentyThirteen
			   << " Female babies were named Genesis in 2013." << endl
			   << femalesNamedGenesisTwentyFourteen
			   << " Female babies were named Genesis in 2014." << endl
			   << femalesNamedGenesisTwentyElevenToTwentyFourteen
			   << " Female babies were named Genesis in the years 2011 - 2014." << endl
		       << endl << endl;

	cout << "3. How many Female babies were named Genesis in the years 2011 - 2014?" 
		 << endl << endl
		 << femalesNamedGenesisTwentyEleven
		 << " Female babies were named Genesis in 2011." << endl
		 << femalesNamedGenesisTwentyTwelve
		 << " Female babies were named Genesis in 2012." << endl
		 << femalesNamedGenesisTwentyThirteen
		 << " Female babies were named Genesis in 2013." << endl
		 << femalesNamedGenesisTwentyFourteen
		 << " Female babies were named Genesis in 2014." << endl
		 << femalesNamedGenesisTwentyElevenToTwentyFourteen
		 << " Female babies were named Genesis in the years 2011 - 2014." << endl
		 << endl << endl;

	for (int l = 0; l < SIZE; l++)
	{
		if (babyArray[l]->getYearOfBirth() == 2011)
		{
			if (babyArray[l]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[l]->getEthnicityOfBaby() == "ASIAN AND PACIFIC ISLANDER")
				{
					asianAndPacificIslanderMaleNamesInTwentyEleven++;
				}
			}
		}
	}

	outputFile << "4. How many Asian and Pacific Islander Male names were recorded for 2011?" 
		       << endl << endl
		       << asianAndPacificIslanderMaleNamesInTwentyEleven
		       << " Asian and Pacific Islander Male names were recorded for 2011." << endl
		       << endl << endl;
	
	cout << "4. How many Asian and Pacific Islander Male names were recorded for 2011?" 
		 << endl << endl
		 << asianAndPacificIslanderMaleNamesInTwentyEleven
		 << " Asian and Pacific Islander Male names were recorded for 2011." << endl
		 << endl << endl;

	outputFile << "5. How many Male names contained the letters \"CAM\" for the year 2014?" 
		       << endl << endl
		       << "The following Male names contained the letters \"CAM\" for the year 2014." 
			   << endl
			   << "(Ethnicity, and the number of babies is also displayed to clarify duplicate names)"
			   << endl << endl;

	cout << "5. How many Male names contained the letters \"CAM\" for the year 2014?" 
		 << endl << endl
		 << "The following Male names contained the letters \"CAM\" for the year 2014." 
		 << endl
		 << "(Ethnicity, and the number of babies is also displayed to clarify duplicate names)"
		 << endl << endl;

	for (int m = 0; m < SIZE; m++)
	{
		if (babyArray[m]->getYearOfBirth() == 2014)
		{
			if (babyArray[m]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[m]->getNameOfBaby().find(camString) != std::string::npos) // npos = return value for not found
				{
					std::cout << babyArray[m]->getNameOfBaby() 
						      << endl << babyArray[m]->getEthnicityOfBaby()
						      << endl << babyArray[m]->getCountOfBabies()
						      << endl << endl;

					outputFile << babyArray[m]->getNameOfBaby() 
						       << endl << babyArray[m]->getEthnicityOfBaby()
						       << endl << babyArray[m]->getCountOfBabies()
						       << endl <<endl;

					maleNamesContainingCAMForTwentyFourteen++;
				}
			}
		}
	}

	outputFile << endl
		       << "Altogether, " << maleNamesContainingCAMForTwentyFourteen 
		       << " Male names contained the letters \"CAM\" for the year 2014." << endl
		       << endl << endl;

	cout << endl
		 << "Altogether, " << maleNamesContainingCAMForTwentyFourteen
		 << " Male names contained the letters \"CAM\" for the year 2014." << endl
		 << endl << endl;

	for (int n = 0; n < SIZE; n++)
	{
		if (babyArray[n]->getYearOfBirth() == 2013)
		{
			if (babyArray[n]->getGenderOfBaby() == "MALE")
			{
				maleBabiesInTwentyThirteen += babyArray[n]->getCountOfBabies();
			}
		}
	}

	outputFile << "6. How many Male babies were recorded for 2013?" 
		       << endl << endl
		       << maleBabiesInTwentyThirteen
		       << " Male babies were recorded for 2013." << endl
		       << endl << endl;

	cout << "6. How many Male babies were recorded for 2013?" 
		 << endl << endl
		 << maleBabiesInTwentyThirteen
		 << " Male babies were recorded for 2013." << endl
		 << endl << endl;

	for (int o = 0; o < SIZE; o++)
	{
		if (babyArray[o]->getYearOfBirth() == 2012)
		{
			if (babyArray[o]->getEthnicityOfBaby() == "HISPANIC")
			{
				hispanicBabiesTwentyTwelve += babyArray[o]->getCountOfBabies();
			}
		}
		else if (babyArray[o]->getYearOfBirth() == 2013)
		{
			if (babyArray[o]->getEthnicityOfBaby() == "HISPANIC")
			{
				hispanicBabiesTwentyThirteen += babyArray[o]->getCountOfBabies();
			}
		}
	}

	outputFile << "7. Which year had more Hispanic babies? 2012 or 2013?" 
		       << endl << endl;

	cout << "7. Which year had more Hispanic babies? 2012 or 2013?" 
		 << endl << endl;
	
	if (hispanicBabiesTwentyTwelve > hispanicBabiesTwentyThirteen)
	{
		outputFile << "2012 had more Hispanic babies, a total of "
			       << hispanicBabiesTwentyTwelve << " were born in 2012."
			       << endl << "While only " << hispanicBabiesTwentyThirteen
			       << " Hispanic babies were born in 2013." << endl
			       << endl << endl;

		cout << "2012 had more Hispanic babies, a total of "
			<< hispanicBabiesTwentyTwelve << " were born in 2012."
			<< endl << "While only " << hispanicBabiesTwentyThirteen
			<< " Hispanic babies were born in 2013." << endl
			<< endl << endl;
	}
	else if (hispanicBabiesTwentyThirteen > hispanicBabiesTwentyTwelve)
	{
		outputFile << "2013 had more Hispanic babies, a total of "
			       << hispanicBabiesTwentyThirteen << " were born in 2013."
			       << endl << "While only " << hispanicBabiesTwentyTwelve
			       << " Hispanic babies were born in 2012." << endl
			       << endl << endl;

		cout << "2013 had more Hispanic babies, a total of "
			 << hispanicBabiesTwentyThirteen << " were born in 2013."
			 << endl << "While only " << hispanicBabiesTwentyTwelve
			 << " Hispanic babies were born in 2012." << endl
			 << endl << endl;
	}
	else
	{
		outputFile << "During the years 2012 and 2013, the same number of Hispanic babies were born."
			       << endl << "A total of " << hispanicBabiesTwentyTwelve
			       << " Hispanic babies were born in 2012." << endl
			       << "While a total of " << hispanicBabiesTwentyThirteen
			       << " Hispanic babies were born in 2013." << endl
			       << endl << endl;

		cout << "During the years 2012 and 2013, the same number of Hispanic babies were born."
			 << endl << "A total of " << hispanicBabiesTwentyTwelve
			 << " Hispanic babies were born in 2012." << endl
			 << "While a total of " << hispanicBabiesTwentyThirteen
			 << " Hispanic babies were born in 2013." << endl
			 << endl << endl;
	}

	for (int p = 0; p < SIZE; p++)
	{
		if (babyArray[p]->getYearOfBirth() == 2011)
		{
			if (babyArray[p]->getGenderOfBaby() == "FEMALE")
			{
				if (babyArray[p]->getEthnicityOfBaby() == "HISPANIC")
				{
					if (babyArray[p]->getRankOfName() < femaleHispanicRankHolder)
					{
						femaleHispanicRankHolder = babyArray[p]->getRankOfName();

						femaleHispanicTopRankNameHolder = babyArray[p]->getNameOfBaby();

						femaleHispanicCountHolder = babyArray[p]->getCountOfBabies();
					}
				}
			}
			else if (babyArray[p]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[p]->getEthnicityOfBaby() == "HISPANIC")
				{
					if (babyArray[p]->getRankOfName() < maleHispanicRankHolder)
					{
						maleHispanicRankHolder = babyArray[p]->getRankOfName();

						maleHispanicTopRankNameHolder = babyArray[p]->getNameOfBaby();

						maleHispanicCountHolder = babyArray[p]->getCountOfBabies();
					}
				}
			}
		}
	}

	outputFile << "8. What was the most popular Hispanic Male and Female name for 2011?"
		       << endl << endl << "The most popular Hispanic Male name for 2011 was "
			   << maleHispanicTopRankNameHolder << "." << endl
			   << "The name " << maleHispanicTopRankNameHolder << " was ranked number "
			   << maleHispanicRankHolder << " on the list of most popular Hispanic Male names in 2011."
			   << endl << "A total of " << maleHispanicCountHolder << " babies were named "
			   << maleHispanicTopRankNameHolder << " in the year 2011." << endl
			   << endl << "The most popular Hispanic Female name for 2011 was "
			   << femaleHispanicTopRankNameHolder << "." << endl
			   << "The name " << femaleHispanicTopRankNameHolder << " was ranked number "
			   << femaleHispanicRankHolder << " on the list of most popular Hispanic Female names in 2011."
			   << endl << "A total of " << femaleHispanicCountHolder << " babies were named "
			   << femaleHispanicTopRankNameHolder << " in the year 2011." << endl
		       << endl << endl;

	cout << "8. What was the most popular Hispanic Male and Female name for 2011?"
		 << endl << endl << "The most popular Hispanic Male name for 2011 was "
		 << maleHispanicTopRankNameHolder << "." << endl
		 << "The name " << maleHispanicTopRankNameHolder << " was ranked number "
		 << maleHispanicRankHolder << " on the list of most popular Hispanic Male names in 2011."
		 << endl << "A total of " << maleHispanicCountHolder << " babies were named "
		 << maleHispanicTopRankNameHolder << " in the year 2011." << endl
		 << endl << "The most popular Hispanic Female name for 2011 was "
		 << femaleHispanicTopRankNameHolder << "." << endl
		 << "The name " << femaleHispanicTopRankNameHolder << " was ranked number "
		 << femaleHispanicRankHolder << " on the list of most popular Hispanic Female names in 2011."
		 << endl << "A total of " << femaleHispanicCountHolder << " babies were named "
		 << femaleHispanicTopRankNameHolder << " in the year 2011." << endl
		 << endl << endl;

	for (int q = 0; q < SIZE; q++)
	{
		if (babyArray[q]->getYearOfBirth() == 2012)
		{
			if (babyArray[q]->getGenderOfBaby() == "FEMALE")
			{
				if (babyArray[q]->getEthnicityOfBaby() == "BLACK NON HISPANIC")
				{
					if (babyArray[q]->getCountOfBabies() < femaleBlackCountHolder)
					{
						femaleBlackCountHolder = babyArray[q]->getCountOfBabies();

						femaleBlackRankNameHolder = babyArray[q]->getNameOfBaby();
					}
				}
			}
			else if (babyArray[q]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[q]->getEthnicityOfBaby() == "BLACK NON HISPANIC")
				{
					if (babyArray[q]->getCountOfBabies() < maleBlackCountHolder)
					{
						maleBlackCountHolder = babyArray[q]->getCountOfBabies();

						maleBlackRankNameHolder = babyArray[q]->getNameOfBaby();
					}
				}
			}
		}
	}

	outputFile << "9. What was the least popular Black Non Hispanic Male and Female name for 2012?"
		       << endl << endl << "The least popular Black Non Hispanic Male name for 2012 was "
		       << maleBlackRankNameHolder << "." << endl
		       << "Only " << maleBlackCountHolder << " Black Non Hispanic Males were named "
		       << maleBlackRankNameHolder << " in the year 2012." << endl << endl
		       << "The least popular Black Non Hispanic Female name for 2012 was "
		       << femaleBlackRankNameHolder << "." << endl
		       << "Only " << femaleBlackCountHolder << " Black Non Hispanic Females were named "
		       << femaleBlackRankNameHolder << " in the year 2012." << endl
		       << endl << endl;

	cout << "9. What was the least popular Black Non Hispanic Male and Female name for 2012?"
		<< endl << endl << "The least popular Black Non Hispanic Male name for 2012 was "
		<< maleBlackRankNameHolder << "." << endl
		<< "Only " << maleBlackCountHolder << " Black Non Hispanic Males were named "
		<< maleBlackRankNameHolder << " in the year 2012." << endl << endl
		<< "The least popular Black Non Hispanic Female name for 2012 was "
		<< femaleBlackRankNameHolder << "." << endl
		<< "Only " << femaleBlackCountHolder << " Black Non Hispanic Females were named "
		<< femaleBlackRankNameHolder << " in the year 2012." << endl
		<< endl << endl;

	for (int r = 0; r < SIZE; r++)
	{
		if (babyArray[r]->getYearOfBirth() == 2011)
		{
			if (babyArray[r]->getGenderOfBaby() == "FEMALE")
			{
				if (babyArray[r]->getCountOfBabies() > elevenFCountHolder)
				{
					elevenFCountHolder = babyArray[r]->getCountOfBabies();

					elevenFNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
			else if (babyArray[r]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[r]->getCountOfBabies() > elevenMCountHolder)
				{
					elevenMCountHolder = babyArray[r]->getCountOfBabies();

					elevenMNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
		}
		else if (babyArray[r]->getYearOfBirth() == 2012)
		{
			if (babyArray[r]->getGenderOfBaby() == "FEMALE")
			{
				if (babyArray[r]->getCountOfBabies() > twelveFCountHolder)
				{
					twelveFCountHolder = babyArray[r]->getCountOfBabies();

					twelveFNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
			else if (babyArray[r]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[r]->getCountOfBabies() > twelveMCountHolder)
				{
					twelveMCountHolder = babyArray[r]->getCountOfBabies();

					twelveMNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
		}
		else if (babyArray[r]->getYearOfBirth() == 2013)
		{
			if (babyArray[r]->getGenderOfBaby() == "FEMALE")
			{
				if (babyArray[r]->getCountOfBabies() > thirteenFCountHolder)
				{
					thirteenFCountHolder = babyArray[r]->getCountOfBabies();

					thirteenFNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
			else if (babyArray[r]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[r]->getCountOfBabies() > thirteenMCountHolder)
				{
					thirteenMCountHolder = babyArray[r]->getCountOfBabies();

					thirteenMNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
		}
		else if (babyArray[r]->getYearOfBirth() == 2014)
		{
			if (babyArray[r]->getGenderOfBaby() == "FEMALE")
			{
				if (babyArray[r]->getCountOfBabies() > fourteenFCountHolder)
				{
					fourteenFCountHolder = babyArray[r]->getCountOfBabies();

					fourteenFNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
			else if (babyArray[r]->getGenderOfBaby() == "MALE")
			{
				if (babyArray[r]->getCountOfBabies() > fourteenMCountHolder)
				{
					fourteenMCountHolder = babyArray[r]->getCountOfBabies();

					fourteenMNameHolder = babyArray[r]->getNameOfBaby();
				}
			}
		}
	}

	outputFile << "10. What was the most Male and Female name for "
		       << "each individual year from the year 2011 to the year 2014?"
		       << endl << endl
		       << "In 2011, the most popular Male name was "
	           << elevenMNameHolder << "." << endl
		       << "A total of " << elevenMCountHolder << " Male babies"
		       << " were named " << elevenMNameHolder << " in the year 2011."
		       << endl << endl
		       << "In 2011, the most popular Female name was "
		       << elevenFNameHolder << "." << endl
		       << "A total of " << elevenFCountHolder << " Female babies"
		       << " were named " << elevenFNameHolder << " in the year 2011."
		       << endl << endl
		       << "In 2012, the most popular Male name was "
		       << twelveMNameHolder << "." << endl
		       << "A total of " << twelveMCountHolder << " Male babies"
		       << " were named " << twelveMNameHolder << " in the year 2012."
		       << endl << endl
		       << "In 2012, the most popular Female name was "
		       << twelveFNameHolder << "." << endl
		       << "A total of " << twelveFCountHolder << " Female babies"
		       << " were named " << twelveFNameHolder << " in the year 2012."
		       << endl << endl
		       << "In 2013, the most popular Male name was "
		       << thirteenMNameHolder << "." << endl
		       << "A total of " << thirteenMCountHolder << " Male babies"
		       << " were named " << thirteenMNameHolder << " in the year 2013."
		       << endl << endl
		       << "In 2013, the most popular female name was "
		       << thirteenFNameHolder << "." << endl
		       << "A total of " << thirteenFCountHolder << " Female babies"
		       << " were named " << thirteenFNameHolder << " in the year 2013."
		       << endl << endl
		       << "In 2014, the most popular Male name was "
		       << fourteenMNameHolder << "." << endl
		       << "A total of " << fourteenMCountHolder << " Male babies"
		       << " were named " << fourteenMNameHolder << " in the year 2014."
		       << endl << endl
		       << "In 2014, the most popular Female name was "
		       << fourteenFNameHolder << "." << endl
		       << "A total of " << fourteenFCountHolder << " Female babies"
		       << " were named " << fourteenFNameHolder << " in the year 2014."
		       << endl << endl;

	cout << "10. What was the most Male and Female name for "
		 << "each individual year from the year 2011 to the year 2014?"
		 << endl << endl
		 << "In 2011, the most popular Male name was "
		 << elevenMNameHolder << "." << endl
		 << "A total of " << elevenMCountHolder << " Male babies"
		 << " were named " << elevenMNameHolder << " in the year 2011."
		 << endl << endl
		 << "In 2011, the most popular Female name was "
		 << elevenFNameHolder << "." << endl
		 << "A total of " << elevenFCountHolder << " Female babies"
		 << " were named " << elevenFNameHolder << " in the year 2011."
		 << endl << endl
		 << "In 2012, the most popular Male name was "
		 << twelveMNameHolder << "." << endl
		 << "A total of " << twelveMCountHolder << " Male babies"
		 << " were named " << twelveMNameHolder << " in the year 2012."
		 << endl << endl
		 << "In 2012, the most popular Female name was "
		 << twelveFNameHolder << "." << endl
		 << "A total of " << twelveFCountHolder << " Female babies"
		 << " were named " << twelveFNameHolder << " in the year 2012."
		 << endl << endl
		 << "In 2013, the most popular Male name was "
		 << thirteenMNameHolder << "." << endl
		 << "A total of " << thirteenMCountHolder << " Male babies"
		 << " were named " << thirteenMNameHolder << " in the year 2013."
		 << endl << endl
		 << "In 2013, the most popular female name was "
		 << thirteenFNameHolder << "." << endl
		 << "A total of " << thirteenFCountHolder << " Female babies"
		 << " were named " << thirteenFNameHolder << " in the year 2013."
		 << endl << endl
		 << "In 2014, the most popular Male name was "
		 << fourteenMNameHolder << "." << endl
		 << "A total of " << fourteenMCountHolder << " Male babies"
		 << " were named " << fourteenMNameHolder << " in the year 2014."
		 << endl << endl
		 << "In 2014, the most popular Female name was "
		 << fourteenFNameHolder << "." << endl
		 << "A total of " << fourteenFCountHolder << " Female babies"
		 << " were named " << fourteenFNameHolder << " in the year 2014."
		 << endl << endl;

	outputFile.close();
}

//*******************************************************************************************************
//
// 1. How many Female names began with the letter 'S' in the year 2013 ?
//
// 99 Female names begane with the letter 'S' in 2013.
//
//
// 2. How many Male names began with the letter 'Y' in the year 2011 ?
// 
// 26 Male names begane with the letter 'Y' in 2011.
//
//
// 3. How many Female babies were named Genesis in the years 2011 - 2014 ?
//
// 2 Female babies were named Genesis in 2011.
// 2 Female babies were named Genesis in 2012.
// 2 Female babies were named Genesis in 2013.
// 2 Female babies were named Genesis in 2014.
// 8 Female babies were named Genesis in the years 2011 - 2014.
//
//
// 4. How many Asian and Pacific Islander Male names were recorded for 2011 ?
//
// 151 Asian and Pacific Islander Male names were recorded for 2011.
//
//
// 5. How many Male names contained the letters "CAM" for the year 2014 ?
//
// The following Male names contained the letters "CAM" for the year 2014.
// (Ethnicity, and number of babies is displayed to clarify duplicate name entries)
//
// CAMERON
// ASIAN AND PACIFIC ISLANDER
// 11
// 
// CAMERON
// BLACK NON HISPANIC
// 38
//
// CAMERON
// HISPANIC
// 19
//
// CAMERON
// WHITE NON HISPANIC
// 24
//
//
// Altogether, 4 Male names contained the letters "CAM" for the year 2014.
//
//
// 6. How many Male babies were recorded for 2013 ?
//
// 38996 Male babies were recorded for 2013.
//
//
// 7. Which year had more Hispanic babies ? 2012 or 2013 ?
//
// 2012 had more Hispanic babies, a total of 23547 were born in 2012.
// While only 23067 Hispanic babies were born in 2013.
//
//
// 8. What was the most popular Hispanic Male and Female name for 2011 ?
//
// The most popular Hispanic Male name for 2011 was JAYDEN.
// The name JAYDEN was ranked number 1 on the list of most popular Hispanic Male names in 2011.
// A total of 426 babies were named JAYDEN in the year 2011.
// 
// The most popular Hispanic Female name for 2011 was ISABELLA.
// The name ISABELLA was ranked number 1 on the list of most popular Hispanic Female names in 2011.
// A total of 331 babies were named ISABELLA in the year 2011.
// 
//
// 9. What was the least popular Black Non Hispanic Male and Female name for 2012 ?
//
// The least popular Black Non Hispanic Male name for 2012 was ABDOUL.
// Only 10 Black Non Hispanic Males were named ABDOUL in the year 2012.
//
// The least popular Black Non Hispanic Female name for 2012 was AMBER.
// Only 10 Black Non Hispanic Females were named AMBER in the year 2012.
//
//
// 10. What was the most Male and Female name for each individual year from the year 2011 to the year 2014 ?
//
// In 2011, the most popular Male name was JAYDEN.
// A total of 426 Male babies were named JAYDEN in the year 2011.
// 
// In 2011, the most popular Female name was ISABELLA.
// A total of 331 Female babies were named ISABELLA in the year 2011.
//
// In 2012, the most popular Male name was JAYDEN.
// A total of 364 Male babies were named JAYDEN in the year 2012.
//
// In 2012, the most popular Female name was ISABELLA.
// A total of 327 Female babies were named ISABELLA in the year 2012.
//
// In 2013, the most popular Male name was JAYDEN.
// A total of 352 Male babies were named JAYDEN in the year 2013.
//
// In 2013, the most popular female name was ISABELLA.
// A total of 326 Female babies were named ISABELLA in the year 2013.
// 
// In 2014, the most popular Male name was LIAM.
// A total of 312 Male babies were named LIAM in the year 2014.
// 
// In 2014, the most popular Female name was ISABELLA.
// A total of 331 Female babies were named ISABELLA in the year 2014.
//
//
//
//*******************************************************************************************************