//*******************************************************************************************************
//
//        File:              baby.h
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

#ifndef BABY_H
#define BABY_H

//*******************************************************************************************************

#include <string>

using namespace std;

//*******************************************************************************************************

class Baby
{
private:

	int yearOfBirth,
		countOfBabies,
		rankOfName;

	string genderOfBaby,
		   ethnicityOfBaby,
		   nameOfBaby;
	
public:

	Baby::Baby();
	Baby::~Baby();

	void setYearOfBirth(int birthYear);
	void setGenderOfBaby(string babyGender);
	void setEthnicityOfBaby(string babyEthnicity);
	void setNameOfBaby(string babyName);
	void setCountOfBabies(int babyCount);
	void setRankOfName(int nameRank);

	int getYearOfBirth();
	string getGenderOfBaby();
	string getEthnicityOfBaby();
	string getNameOfBaby();
	int getCountOfBabies();
	int getRankOfName();

};

//*******************************************************************************************************

#endif

//*******************************************************************************************************