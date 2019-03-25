// If example - Grades
// Chapter 4 
// COSC 1550
// Example 1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//	int score1 = 70, score2 = 85, score3 = 90;
	int score1, score2, score3;
	float avg;
	bool errFlag = false;

	cout << "Enter a number between 0 and 100: ";
	cin >> score1;

//	if (score1 >= 0 && score1 <= 100)
	if (score1 < 0 || score1 > 100)
	{
		cout << "You entered a number outside the specified range.\n";
		errFlag = true;
	}
	cout << "Enter a number between 0 and 100: ";
	cin >> score2;
	if (score2 < 0 || score2 > 100)
	{
		cout << "You entered a number outside the specified range.\n";
		errFlag = true;
	}
	cout << "Enter a number between 0 and 100: ";
	cin >> score3;
	if (score3 < 0 || score3 > 100)
	{
		cout << "You entered a number outside the specified range.\n";
		errFlag = true;
	}

	if(!errFlag)
	{

		avg = (score1 + score2 + score3)/3.0;
		
		cout << setprecision(1) << fixed;
		cout << "Your average is: " << avg << endl;
		if (avg >= 95.)
		{
			cout << "You get an A for the course!\n";
		}
		else if(avg >= 90. && avg < 95.)
		{
			cout <<  "You get an A- for the course.\n";
		}
		else if(avg >= 80. && avg < 90.)
		{
			cout <<  "You get an B for the course.\n";
		}
		else if(avg >= 70. && avg < 80.)
		{
			cout <<  "You get an C for the course.\n";
		}
		else if(avg >= 60. && avg < 70.)
		{
			cout <<  "You get an D for the course.\n";
		}
		else
		{
			cout <<  "You get an F for the course.\n";
		}
	}
	else
		cout << "One of the numbers you entered was outside the specified range.\n";
	return 0;
}