// Chapter 6 - Programming Challenge 7, Lowest Score Drop
// This program averages test scores after dropping the lowest score.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getScore(int, int &);	
void calcAverage(int, int, int, int, int);			
int  findLowest (int, int, int, int, int);			

int main()
{
	int test1, test2, test3, test4, test5;    // 5 user input test scores
	int numScore = 1;
	// Call getScore once for each test score to be input
	getScore(numScore++,test1);
	getScore(numScore++,test2);
	getScore(numScore++,test3);
	getScore(numScore++,test4);
	getScore(numScore  ,test5);

	// Call calcAverage to calculate and display the average
	calcAverage(test1, test2, test3, test4, test5);

	return 0;
}// end of main function

/*********************************************************************
 *                         getScore                                  *
 * This function is called by main once for each test score to be    *
 * input and validated. The score is stored in a reference parameter.*
 *********************************************************************/
void getScore(int num, int &score)
{
	cout << "Enter score " << num << " between 0 and 100: ";
	cin  >> score;
	while (score < 0 || score > 100) 
	{
		cout << "Score must be in the range 0 - 100. "
			 << "Please re-enter score: ";
		cin  >> score;
	}
}// end of function getScore

/*****************************************************************
 *                         calcAverage                           *
 * This function is called by main to find and print the average *
 * of the best 4 out of the 5 scores passed to it as arguments.  *
 *****************************************************************/
 void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	int sum,                     // Sum of the 4 highest scores
		lowScore;                // Low score that will be dropped
	double average;

	// Call function findLowest, passing it the 5 scores.  When the
	// lowest score is returned, store it in the variable lowScore.
	lowScore = findLowest(s1, s2, s3, s4, s5);

	sum = s1 + s2 + s3 + s4 + s5 - lowScore;
	average = sum / 4.0;         // Prevent an integer divide

	cout << "\nAfter dropping the lowest test score, the test average is " 
	     << average << endl;
}// end of function calcAverage

/**************************************************************
 *                          findLowest                        *
 * This function is called by calcAverage to determine which  *
 * of the 5 scores passed to it as arguments is the lowest.   *
 * The lowest score is returned.                              *
 **************************************************************/
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
}// end of function findLowest

