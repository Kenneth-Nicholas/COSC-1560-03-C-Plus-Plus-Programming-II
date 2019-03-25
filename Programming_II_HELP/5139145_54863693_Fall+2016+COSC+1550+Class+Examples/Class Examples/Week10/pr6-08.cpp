// This program demonstrates a function with three parameters.

#include <iostream>
using namespace std;

// Function prototype
int showSum(int, int, int);
float calcAvg(int, int);

int main()
{
	int value1, value2, value3, sum;
	float average;
	void displayResults(float, int);

	cout << "Enter three integers and I will display ";
	cout << "their sum: ";
	cin  >> value1 >> value2 >> value3;
	sum = showSum(value1, value2, value3);	   // Call showSum with 3 arguments.
	average = calcAvg(sum, 3);	   // Call calcAvg with 3 arguments.
	displayResults(average, sum);
	return 0;
}

//************************************************************
// Definition of function showSum                            *
// It uses three integer parameters. Their sum is displayed. *
//************************************************************
int showSum(int num1, int num2, int num3)
{
//	cout << (num1 + num2 + num3) << endl;
	return (num1 + num2 + num3);
}

float calcAvg(int sum, int num)
{
	float avg = static_cast<float> (sum) / num;
	return avg;
}

void displayResults(float avg, int sum)
{
	cout << "The sum is: " << sum << endl;
	cout << "The average is: " << avg << endl;
}