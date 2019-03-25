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
	int test1Score;		//Score for Test 1
	int test2Score;		//Score for Test 2
	int test3Score;		//Score for Test 3
	int test4Score;		//Score for Test 4
	float average;		//Average Test Score
	char grade;			//Course Grade
};


// Function prototypes
void getStudentInfo(Student &);
int getTestScore(string);
void calcAverage(Student &);
void calcGrade(Student &);
void showInfo(Student);

int main()
{

//	Student s1 = {"Paul","12345", 98, 78, 87, 92 /* ,0, ' '*/};
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

	total = s.test1Score + s.test2Score + s.test3Score + s.test4Score;

	// Calculate the average score.
	s.average = static_cast<float>(total) / 4;
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
	cout << "Test Score " << 1 << ": " << s.test1Score << endl;
	cout << "Test Score " << 2 << ": " << s.test2Score << endl;
	cout << "Test Score " << 3 << ": " << s.test3Score << endl;
	cout << "Test Score " << 4 << ": " << s.test4Score << endl;
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
	s.test1Score = getTestScore("first");
	s.test2Score = getTestScore("second");
	s.test3Score = getTestScore("third");
	s.test4Score = getTestScore("fourth");

	cin.ignore();
}

int getTestScore(string testNum)
{
	int score;
	cout << "Enter the " << testNum << " test score: ";
	cin >> score;
	while (score < 0 || score > 100)
	{
		cout << "Enter a number between 0 and 100 for the test score.\n";
		cin >> score;
	}
	return score;
}