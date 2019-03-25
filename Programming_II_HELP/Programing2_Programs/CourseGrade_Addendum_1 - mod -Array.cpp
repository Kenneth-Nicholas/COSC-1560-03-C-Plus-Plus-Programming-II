// Paul Biolchini
// COSC 1560
// Addendum Problem 1
// Homework 3, Assignment 2
// Course Grade
 
#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;		//Student Name
	string idNum;		//Student ID Number
	int numTests;  // number of tests
	int testScore[4];	//Array of test score
	float average;		//Average Test Score
	char grade;			//Course Grade
	Student() {numTests = 4;}
};


// Function prototypes
void getStudentInfo(Student &);
int getTestScore(int);
void calcAverage(Student &);
void calcGrade(Student &);
void showInfo(Student);

int main()
{

//	Student s1 = {"Paul","12345", 4, 98, 78, 87, 92 /* ,0, ' '*/};
	Student s1;

	getStudentInfo(s1);
	calcAverage(s1);
	calcGrade(s1);
	showInfo(s1);
	return 0;
}



//*****************************************************
// Function calcGrade                                 *
// This function calculates the student's average and	*
// grade.															*
//*****************************************************

void calcGrade(Student &s)
{
	// Assign a letter grade.
	if (s.average >= 91)
		s.grade = 'A';
	else if (s.average >= 81)
		s.grade = 'B';
	else if (s.average >= 71)
		s.grade = 'C';
	else if (s.average >= 61)
		s.grade = 'D';
	else
		s.grade = 'F';
}
//*****************************************************
// Function calcAverage                                 *
// This function calculates the student's average.															*
//*****************************************************

void calcAverage(Student &s)
{
	int total = 0;
	for(int i = 0; i < s.numTests; i++)
		total += s.testScore[i];

	// Calculate the average score.
	s.average = static_cast<float>(total) / s.numTests;
}

//*****************************************************
// Function showInfo                                  *
// This function displays all of the data in the      *
// student record.							          *
//*****************************************************

void showInfo(Student s)
{
	cout << "\nStudent name: " << s.name << endl;
	cout << "ID number:    " << s.idNum << endl;
	for(int i = 0; i < s.numTests; i++)
		cout << "Test Score " << i+1 << ": " << s.testScore[i] << endl;
	cout << "Average test score: " << s.average << endl;
	cout << "Grade: " << s.grade << endl;
}

void getStudentInfo(Student & s)
{
	cout << "Enter the student's name: ";
	getline (cin, s.name);
	while (s.name.length() == 0)
	{
		cout << "Enter the student's name: ";
		getline (cin, s.name);
	}
	cout << "Enter the student's Id number: ";
	getline (cin, s.idNum);
	while(s.idNum.length() == 0)
	{
		cout << "Enter the student's Id number: ";
		getline (cin, s.idNum);
	}
	for(int i = 0; i < s.numTests; i++)
		s.testScore[i] = getTestScore(i+1);

	cin.ignore();
}

int getTestScore(int testNum)
{
	int score;
	cout << "Enter the score for test " << testNum << "  ";
	cin >> score;
	while (score < 0 || score > 100)
	{
		cout << "Enter a number between 0 and 100 for the test score.\n";
		cin >> score;
	}
	return score;
}