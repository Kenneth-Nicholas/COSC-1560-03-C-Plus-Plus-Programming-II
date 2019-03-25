// Paul Biolchini
// COSC 1550
// averageFunction.cpp

#include <iostream>

using namespace std;

// function prototypes
double getNumber();
double calcAverage(double, int);
double calcLeast(double, double);
double calcGreatest(double, double);
void displayMessage(double, double, int, double, double);

int main()
{
	double total = 0.0;
	double number,
		   least,
		   greatest;
	int count = 0;

	number = getNumber();
	least = greatest = number;

	while( number != -99)
	 {
		 if(number  != -99)
		 {
			total += number;
			count++;
			least = calcLeast(number, least);
			greatest = calcGreatest(number, greatest);
		 }
		number = getNumber();
	 }

	 double average = calcAverage(total, count);
	 displayMessage(average, total, count, least, greatest);

	 return 0;
}

// getNumber asks the user for a double.  Or a -99 to quit and 
// returns a double to the calling program
double getNumber()
{
	double num;
	cout << "Enter a number.  -99 to quit. ";
	cin >> num;
	return num;
}


// calcAverage function takes a sum of numbers and divides
//  them by the number of numbers
double calcAverage(double sum, int count)
{
	double avg = sum / count;
	return avg;
}

// displayMessage takees the average value (double), the total(double)
// and the count of numbers (int) and displays them on the screen
void displayMessage(double avg, double sum, int num, double small, double big)
{
	cout << "You entered " << num << " numbers that total "
	 << sum << " and average " << avg  << endl;
 	cout << "The smallest number entered was " << small << endl;
 	cout << "The largest number entered was " << big << endl;

}

double calcLeast(double number, double least)
{
	if(number < least)
		least = number;
	return least;
}

double calcGreatest(double number, double large)
{
	if(number > large)
		large = number;
	return large;
}
/*
Enter a number.  -99 to quit. 5
Enter a number.  -99 to quit. 6
Enter a number.  -99 to quit. 7
Enter a number.  -99 to quit. 8
Enter a number.  -99 to quit. 9
Enter a number.  -99 to quit. -99
You entered 5 numbers that total 35 and average 7

*/