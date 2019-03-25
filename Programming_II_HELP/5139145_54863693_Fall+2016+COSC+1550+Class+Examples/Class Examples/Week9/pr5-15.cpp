// This program uses nested loops to average a set of test scores
// for a group of students. It asks the user for the number of 
// students and the number of test scores per student.

#include <iostream>
using namespace std;

int main()
{
	int numStudents,      // Number of students
		 numTests,         // Number of tests per student
		 total;            // Accumulates total score for each student
	double average;       // Average test score for each student

	cout << "This program averages test scores.\n";
	cout << "How many students are there? ";
	cin  >> numStudents;
	while(numStudents < 1)
	{
		cout << "Enter at least one student.\n";	
		cout << "How many students are there? ";
		cin  >> numStudents;
	}

	cout << "How many test scores does each student have? ";
	cin  >> numTests;
	while(numTests < 1)
	{
		cout << "Enter at least one test score.\n";	
		cout << "How many test scores does each student have? ";
		cin  >> numTests;
	}
	cout << endl;

	for (int student = 1; student <= numStudents; student++) // Outer loop
	{                                      
		total = 0;
		for (int test = 1; test <= numTests; test++)          // Inner loop
		{                                   
			int score;
			do
			{
				cout << "Enter score " << test << " for "
				  << "student " << student << ": ";
				cin  >> score; 
				if(score < 0 || score > 100)
					cout << "Enter a score between 0 and 100.\n";
			}
			while(score < 0 || score > 100);
			total += score;
		}                                                     // End of inner loop
		average = total / numTests;
		cout << "The average for student " << student;
		cout << " is " << average << ".\n\n";
	}                                                        // End of outer loop
	return 0;
}
