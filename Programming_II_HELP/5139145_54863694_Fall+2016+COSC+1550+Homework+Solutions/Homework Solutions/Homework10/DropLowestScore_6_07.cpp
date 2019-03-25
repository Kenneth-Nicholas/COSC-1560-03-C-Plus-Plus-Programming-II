// Paul Biolchini
// COSC 1550
// Homework 10, Assignment 1
// Chapter 6, Problem 7, Lowest Score Drop

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int getScores();	
double calcAverage(int, int, int, int, int);			
int  findLowest(int, int, int, int, int);			

int main()
{
	int test1, test2, test3, test4, test5;    // 5 user input test scores
	double avg;

	// Call getScores function to read values into the 5 test variables.
	test1 = getScores();
	test2 = getScores();
	test3 = getScores();
	test4 = getScores();
	test5 = getScores();

	// Call calcAverage function to calculate and display the average
	avg = calcAverage(test1, test2, test3, test4, test5);
	cout << "\nAfter dropping the lowest test score, " << 
		findLowest(test1, test2,test3,test4,test5) 
		<< ", the test average is " 
	    << avg << endl << endl;

	return 0;

}	// end of function main

//***************************************************
// getScores function                               *
// This function prompts the user to enter 5 scores *
// which are stored in the reference paramters.     *
//***************************************************

int getScores()
{
	int score;
	static int num = 1;
	cout << "Enter test score " << num << ": ";
	cin  >> score;
	while (score < 0 || score > 100)  // Check that the score 1 is within range
	{
		cout << "Score must be in the range 0 - 100. "
			<< "Please re-enter score " << num << ": ";
		cin  >> score;
	}
	num++;
	return score;
}	// End of getScores function

//***************************************************
// calcAverage function                             *
// This function displays the average of the scores *
// passed as arguments, after dropping the lowest   *
// score.                                           *
//***************************************************
 
double calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	int   sum,                    // To hold the sum of the 4 highest scores.
	      lowScore;               // To hold the low score that will be dropped.
	double average;

	// Call function findLowest, passing it the 5 scores.  When the
	// lowest score is returned, store it in the variable lowScore.
	lowScore = findLowest(s1, s2, s3, s4, s5);

	sum = s1 + s2 + s3 + s4 + s5 - lowScore;
	average = static_cast<float>(sum) / 4;     // Prevent an integer dividision.

	return average;
}	// End of calcAverage function


//*******************************************************
// findLowest function                                  *
// This function returns the lowest value of the values *
// passed as arguments.                                 *
//*******************************************************

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	int lowest = s1;

	if (s2 < lowest)
		lowest = s2;
	if (s3 < lowest)
		lowest = s3;
	if (s4 < lowest)
		lowest = s4;
	if (s5 < lowest)
		lowest = s5;
	return lowest;

}	// End of findLowest function

