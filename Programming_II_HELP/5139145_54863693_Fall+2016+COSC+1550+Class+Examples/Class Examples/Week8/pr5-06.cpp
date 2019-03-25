// This program averages a set of test scores for multiple
// students. It lets the user specify how many.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numStudents, count;

	cout << "This program will give you the average of three\n";
	cout << "test scores per student.\n";
	cout << "How many students do you have test scores for? ";
	cin  >> numStudents;
	cout << "Enter the scores for each of the students.\n";
	cout << fixed << showpoint << setprecision(2);

	count = 1;                     // Initialize the loop control variable
	while (count <= numStudents)
	{	
		int score1, score2, score3;
		double average;
		cout << "\nStudent " << count << ": ";
		cin  >> score1 >> score2 >> score3;
		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << "\n";
		count++;                   // Increment the loop control variable
	}
	return 0;
}
