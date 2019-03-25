//*******************************************************************************************************
//
//        File:              baby.cpp
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
#include <string>

using namespace std;

//*******************************************************************************************************

Baby::Baby()
{
	yearOfBirth = 0;
	genderOfBaby = "";
	ethnicityOfBaby = "";
	nameOfBaby = "";
	countOfBabies = 0;
	rankOfName = 0;
}

//*******************************************************************************************************

Baby::~Baby()
{
	int birthYear = 0;
	string babyGender = "";
	string babyEthnicity = "";
	string babyName = "";
	int babyCount = 0;
	int babyRank = 0;
}

//*******************************************************************************************************

void Baby::setYearOfBirth(int birthYear)
{
	yearOfBirth = birthYear;
}

//*******************************************************************************************************

void Baby::setGenderOfBaby(string babyGender)
{
	genderOfBaby = babyGender;
}

//*******************************************************************************************************

void Baby::setEthnicityOfBaby(string babyEthnicity)
{
	ethnicityOfBaby = babyEthnicity;
}

//*******************************************************************************************************

void Baby::setNameOfBaby(string babyName)
{
	nameOfBaby = babyName;
}

//*******************************************************************************************************

void Baby::setCountOfBabies(int babyCount)
{
	countOfBabies = babyCount;
}

//*******************************************************************************************************

void Baby::setRankOfName(int nameRank)
{
	rankOfName = nameRank;
}

//*******************************************************************************************************

int Baby::getYearOfBirth()
{
	return yearOfBirth;
}

//*******************************************************************************************************

string Baby::getGenderOfBaby()
{
	return genderOfBaby;
}

//*******************************************************************************************************

string Baby::getEthnicityOfBaby()
{
	return ethnicityOfBaby;
}

//*******************************************************************************************************

string Baby::getNameOfBaby()
{
	return nameOfBaby;
}

//*******************************************************************************************************

int Baby::getCountOfBabies()
{
	return countOfBabies;
}

//*******************************************************************************************************

int Baby::getRankOfName()
{
	return rankOfName;
}

//*******************************************************************************************************