//*******************************************************************************************************
//
//        File:              scores.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #8: Test Scores
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               November 15, 2017
//
//
//        This program reads in student test scores in sets consisting of ten tests
//        that a specific student has taken. It sorts the test scores from lowest 
//        score to highest score for each student, calculates the average of that
//        particular student's ten scores, then writes the student's ten test 
//        scores, and average test score to file. It also displays this information
//        on the console.
//
//        Files required:
//    			   1.      scores.cpp	       - main .cpp file
//				   2.      stu_scores.txt	   - text file of input
//                 3.      a8.txt              - text file of output
//
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

//*******************************************************************************************************

void run();
void loadNumberOfStudents(int &numberOfStudents, ifstream &inFile);
void outputTitle(ofstream &outFile);
void loadData(int scores[], const int SIZE, ifstream &inFile);
void sortArray(int scores[], const int SIZE, bool swap, int temp);
double calcAverage(int scores[], const int SIZE, double average);
void outputScores(int scores[], const int SIZE, int numberOfStudents, int &currentStudent, double average, ofstream &outFile);

//*******************************************************************************************************

int main()
{
	run();

	return 0;
}

//*******************************************************************************************************

void run()
{
	const int SIZE = 10;

	int scores[SIZE];

	int numberOfStudents,
		currentStudent = 1,
		temp = 0;

	double average = 0;

	bool swap = true;
	
	ifstream inputFile;
	inputFile.open("stu_scores.txt");

	ofstream outputFile;
	outputFile.open("a8.txt", ios::app);

	loadNumberOfStudents(numberOfStudents, inputFile);

	outputTitle(outputFile);

	for (int i = 0; i < numberOfStudents; i++)
	{
		loadData(scores, SIZE, inputFile);

		sortArray(scores, SIZE, swap, temp);

		average = calcAverage(scores, SIZE, average);

		outputScores(scores, SIZE, numberOfStudents, currentStudent, average, outputFile);
	}
	inputFile.close();

	outputFile.close();
}

//*******************************************************************************************************

void loadNumberOfStudents(int &numberOfStudents, ifstream &inFile)
{
	inFile >> numberOfStudents;
}

//*******************************************************************************************************

void outputTitle(ofstream &outFile)
{
	cout << "STUDENT TEST SCORES" << endl
		 << "*****************************************" << endl;
	
	outFile << "STUDENT TEST SCORES" << endl
		    << "*****************************************" << endl;
}

void loadData(int scores[], const int SIZE, ifstream &inFile)
{
	for (int i = 0; i < SIZE; i++)
	{
		inFile >> *(scores + i);
	}
}

//*******************************************************************************************************

void sortArray(int scores[], const int SIZE, bool swap, int temp)
{
	do
	{
		swap = false;

		for (int i = 0; i < (SIZE - 1); i++)
		{
			if (*(scores + i) > *(scores + i + 1))
			{
				temp = *(scores + i);
				*(scores + i) = *(scores + i + 1);
				*(scores + i + 1) = temp;
				swap = true;
			}
		}

	} while (swap);
}

//*******************************************************************************************************

double calcAverage(int scores[], const int SIZE, double average)
{
	average = 0;

	for (int i = 0; i < SIZE; i++)
	{
		average += *(scores + i);
	}

	average /= SIZE;

	return average;
}

//*******************************************************************************************************

void outputScores(int scores[], const int SIZE, int numberOfStudents, int &currentStudent, double average, ofstream &outFile)
{
	cout << "Student " << currentStudent << ":" << endl;
	
	outFile << "Student " << currentStudent << ":" << endl;

	for (int j = 0; j < SIZE; j++)
	{
		cout << *(scores + j) << " ";

		outFile << *(scores + j) << " ";
	}

	cout << endl
		 << "Average Score: " << average << endl
		 << endl;

	outFile << endl
			<< "Average Score: " << average << endl
			<< endl;

	currentStudent++;
}

//*******************************************************************************************************
//
// STUDENT TEST SCORES
// *****************************************
// Student 1:
// 77 79 82 83 84 87 88 89 90 97
// Average Score : 85.6
//
// Student 2 :
// 75 76 80 84 85 88 88 89 90 91
// Average Score : 84.6
//
// Student 3 :
// 73 89 91 92 96 98 99 99 100 100
// Average Score : 93.7
//
// Student 4 :
// 70 78 79 80 85 86 89 90 98 99
// Average Score : 85.4
//
// Student 5 :
// 82 88 89 90 97 97 98 99 99 100
// Average Score : 93.9
//
// Student 6 :
// 65 67 67 77 80 81 87 88 99 100
// Average Score : 81.1
//
//*******************************************************************************************************