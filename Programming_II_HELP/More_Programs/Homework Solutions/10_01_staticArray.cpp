//  Written by C++ Programmer
//  Chapter 10
//  Assignment 1:  Test Averaging

#include <iostream>
#include <iomanip>
using namespace std;

void sort(float *, int);  
float average(float *, int);
void getTestData(float *, int);

int main()
{
	const int numElements = 4;
	float grades[numElements];
	float avg = 0.0;
	
	getTestData(grades, numElements);

	sort(grades, numElements);
	avg = average(grades, numElements);
	cout << "\nThe test scores, and their average, are: " << endl << endl;
	cout << "\n score" << endl;
	cout << " -----" << endl;
	for (int j = 0; j < numElements; j++)
	{
	  cout << "\n" << fixed << setprecision(2) << setw(6) << *(grades+j);
	}
	cout << "\n\nAverage score:  " << setprecision(2)<< fixed << avg << endl << endl;
	return 0;
}

void getTestData( float * score, int elems)
{
	for (int i = 0; i < elems; i++)  // get scores
    {
		cout << "Enter a test score:  ";
//        cin >> score[i];
        cin >> *(score+i);
        while (*(score+i) < 0)  // no negative scores
//        while (score[i] < 0)  // no negative scores
        {
			cout << "score cannot be negative" << endl;
            cout << "Enter another number:  ";
           cin >> *(score+i);
//          cin >> score[i];
		}
	}
}




/***************************************************
* sorts an array score of size elems               *
****************************************************/

void sort(float* score, int elems)
{
	int startScan, minIndex; 
	float minValue;

	for (startScan = 0; startScan < (elems - 1); startScan++)
	{
		minIndex = startScan;
//		minValue = score[startScan];
		minValue = *(score+startScan);
		for(int index = startScan + 1; index < elems; index++)
		{
			if (*(score+index) < minValue)
			{
//				minValue = score[index];
				minValue = *(score+index);
				minIndex = index;
			}
		}
		*(score+minIndex) = *(score+startScan);
		*(score+startScan) = minValue;
	}
}

/*****************************************************
* computes average of entries in an array score      *
* with numScores entries                             *
******************************************************/
float average(float* score, int numScores)
{
	float total = 0;
	for (int k = 0; k < numScores; k++)
	{
//		total += score[k];
		total += *(score+k);
	}
	return (total / numScores);
}