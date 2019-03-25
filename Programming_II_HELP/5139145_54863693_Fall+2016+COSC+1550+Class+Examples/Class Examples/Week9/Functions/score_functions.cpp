// This program averages 3 test scores. It repeats as
// many times as the user wishes.

#include <iostream>
using namespace std;

// declare function prototypes
int getScore();
double avg(int ,int , int );
void displayAverage(double );

int main()
{
	int score1, score2, score3;
	double average;
	char again;

	do
	{	
		cout << "Enter 3 scores and I will average them.\n";
		score1 = getScore();
		score2 = getScore();
		score3 = getScore();

//		average = (score1 + score2 + score3) / 3.0;
		average = avg(score1, score2, score3);

//		cout << "The average is " << average << ".\n";
		//displayAverage(average);

		cout << "Do you want to average another set? (Y/N) ";
		cin  >> again;
	} while (again == 'Y' || again == 'y');
	return 0;
}

int getScore()
{
	int score;
	cout << "Enter a score between 0 and 100: ";
		cin  >> score;
		while( score < 0 || score > 100)
		{
			cout << "Please enter a number between 0 and 100.\n";
			cout << "Enter the score: ";
			cin  >> score;
		}
		return score;
}

double avg(int s1,int s2, int s3)
{
	double average = (s1 + s2+ s3)/3.0;
	displayAverage(average);
	return average;
}

void displayAverage(double average)
{
	cout << "The average is " << average << ".\n";
}