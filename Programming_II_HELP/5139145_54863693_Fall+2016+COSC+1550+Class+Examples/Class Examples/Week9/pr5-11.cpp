// This program averages 3 test scores. It repeats as
// many times as the user wishes.

#include <iostream>
using namespace std;

int main()
{
	int score1, score2, score3;
	double average;
	char again;

	do
	{	
		system("cls");
		score1 = score2 = score3 = 0;
		cout << "Enter 3 scores and I will average them.\n";
// use a do-while loop for data entry
		do
		{
			cout << "Enter the first score: ";
			cin  >> score1;
			if( score1 < 0 || score1 > 100)
				cout << "Please enter a number between 0 and 100.\n";
		}
		while( score1 < 0 || score1 > 100);

		do
		{
			cout << "Enter the second score: ";
			cin  >> score2;
			if( score2 < 0 || score2 > 100)
				cout << "Please enter a number between 0 and 100.\n";
		}
		while( score2 < 0 || score2 > 100);

// use a while loop for data entry
		cout << "Enter the third score: ";
		cin  >> score3;
		while( score3 < 0 || score3 > 100)
		{
			cout << "Please enter a number between 0 and 100.\n";
			cout << "Enter the third score: ";
			cin  >> score3;
		}

		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << ".\n";

		cout << "Do you want to average another set? (Y/N) ";
		cin  >> again;
	} 
	while (again == 'Y' || again == 'y');
	return 0;
}
