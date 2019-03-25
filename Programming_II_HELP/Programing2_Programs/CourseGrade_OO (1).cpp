// COSC 1560
// Paul Biolchini
// Addendum Problem 1
// Homework 3, Assignment 2

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;		//Student Name
	string idNum;		//Student ID Number
	int testScore[4];		//Score for all Tests
	float average;		//Average Test Score
	char grade;			//Course Grade
	void assignGrade();
public:
//	Student();
	Student(string, string, int,int,int,int);
	void calcGrade();
	void getStudentInfo();
	void showInfo();
};

//Student::Student()
//{
//	name = "Dummy";
//	idNum = "00000";
//	testScore[0] = 0;
//	testScore[1] = 0;
//	testScore[2] = 0;
//	testScore[3] = 0;
//	average = 0.0;
//	grade = 'Z';
//}

Student::Student(string n = "Jimmy", string id = "0000", 
				 int s1 = 0,int s2 = 0,int s3 = 0,int s4 = 0)
{
	name = n;
	idNum = id;
	testScore[0] = s1;
	testScore[1] = s2;
	testScore[2] = s3;
	testScore[3] = s4;
	average = 0.0;
	grade = 'Z';
}


void Student::calcGrade()
{
	int total = 0;
	for(int i = 0; i < 4; i++)
		total += testScore[i];

	// Calculate the average score.
	average = static_cast<float>(total) / 4;
	// Assign a letter grade.
	assignGrade();
}

void Student::assignGrade()
{
	// Assign a letter grade.
	if (average >= 91)
		grade = 'A';
	else if (average >= 81 && average <= 90)
		grade = 'B';
	else if (average >= 71 && average <= 80)
		grade = 'C';
	else if (average >= 61 && average <= 70)
		grade = 'D';
	else
		grade = 'F';
}

void Student::getStudentInfo()
{
	cout << "Enter the student's name: ";
	getline (cin, name);
	while (name.length() == 0)
	{
		cout << "Enter the student's name: ";
		getline (cin, name);
	}
	cout << "Enter the student's Id number: ";
	getline (cin, idNum);
	while(idNum.length() == 0)
	{
		cout << "Enter the student's Id number: ";
		getline (cin, idNum);
	}
	for(int i = 0; i < 4; i++)
	{
		cout << "Enter the score for test " << i+1 << ": ";
		cin >> testScore[i];
		while (testScore[i] < 0 || testScore[i] > 100)
		{
			cout << "Enter a number between 0 and 100 for the test score.\n";
			cin >> testScore[i];
		}
	}
	cin.ignore();
}

void Student::showInfo()
{
	cout << "\nStudent name: " << name << endl;
	cout << "ID number:    " << idNum << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Test Score " << i + 1 << ": " << testScore[i] << endl;
	}
	cout << "Average test score: " << average << endl;
	cout << "Grade: " << grade << endl;
}

// Function prototypes

int main()
{
	const int size = 10;
//	Student s1("Paul","12345", 98, 78, 87, 92 /* ,0, ' '*/);
	Student s[size] = {
					Student("Paul","12345", 98, 78, 87, 92),
					Student(),
					Student("Sam","123456", 94, 77, 77, 92 ),
					Student("Waldo","12347", 96, 73, 97, 92)};
					//Student()};
	
	//Student s[size];
	//for(int i = 0; i < size; i++)
	//{
	//	s[i].showInfo();
	//}
	for(int i = 0; i < size; i++)
	{
		//s[i].getStudentInfo();
		s[i].calcGrade();
		s[i].showInfo();
	}
	return 0; 
}



//*****************************************************
// Function calcGrade                                 *
// This function calculates the student's average and	*
// grade.															*
//*****************************************************


//*****************************************************
// Function showInfo                                  *
// This function displays all of the data in the      *
// student record.							          *
//*****************************************************



