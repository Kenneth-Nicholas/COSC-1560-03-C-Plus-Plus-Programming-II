//	This program averages 3 test scores.
// It illustrates what happens when the assignment operator (=)
// is used instead of the equal-to relational operator (==)
// in an if test.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score1, score2, score3;
	double average;

	cout << "Enter 3 test scores and I will average them: ";
	cin  >> score1 >> score2 >> score3;

	average = (score1 + score2 + score3) / 3.0;

	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;

	//if (average = 100)        // Error. This assigns 100 to average. 
	//{                         
 //     cout << "Congratulations! ";
 //     cout << "That's a perfect score!\n";
 //   }
	//else if( average > 95)
	//{                         
 //     cout << "Congratulations! ";
 //     cout << "That's an A!\n";
 //   }

	if( average > 95)
	{                         
		cout << "Congratulations! ";
  		if (average = 100)        // Error. This assigns 100 to average. 
		{                         
		      cout << "That's a perfect score!\n";
		}
		else
			cout << "That's an A!\n";
		cout << "Good Job!\n";
	 }


	return 0;
}
