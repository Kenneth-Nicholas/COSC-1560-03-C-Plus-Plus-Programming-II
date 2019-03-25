// If example - Grades
// Chapter 4 
// COSC 1550
// Example 1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score1 = 70, score2 = 85, score3 = 90;
	float avg;
	 
	avg = (score1 + score2 + score3)/3.0;
	
	cout << setprecision(1) << fixed;
	cout << "Your average is: " << avg << endl;
	if (avg >= 95.)
	{
		cout << "You get an A for the course!\n";
	}
	else if(avg >= 90.)
	{
		cout <<  "You get an A- for the course.\n";
	}
	else if(avg >= 80.)
	{
		cout <<  "You get an B for the course.\n";
	}
	else if(avg >= 70.)
	{
		cout <<  "You get an C for the course.\n";
	}
	else if(avg >= 60.)
	{
		cout <<  "You get an D for the course.\n";
	}
	else
	{
		cout <<  "You get an F for the course.\n";
	}
	return 0;
}