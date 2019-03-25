// Paul Biolchini
// COSC 1550
// Homework 10, Assignment 1
// Chapter 6, Problem 7, Lowest Score Drop

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	const int size = 6;
	const int nameSize = 26;
	char name[nameSize];
	int test[size] = {0};    //  user input test scores
	int sum = 0;
	double avg;
	
	cout << "Please enter your name: ";
	cin.getline(name, nameSize);
	cout << "Welcome " << name << " to the test grading system.\n\n";

//	for(int i = 0; name[i] != '\0'; i++)
	for(int i = 0; name[i] != 0; i++)
//	for(int i = 0; i < nameSize; i++)  // prints all 26 characters not just name
		cout << name[i] << " ";
	cout << endl;

	for(int i = 0; i < size; i++)
		cout << test[i] << " ";
	cout << endl;

	for(int i = 0; i < size;i++)
	{
		cout << "Enter the value for test " << i+1 << ": ";
		cin >> test[i];
		while(test[i] < 0 || test[i] > 100)
		{
			cout << "Enter the value between 0 and 100 for test " << i+1 << ": ";
			cin >> test[i];
		}
	}

	for(int i = 0; i < size; i++)
		cout << test[i] << " ";
	cout << endl;


	// Call calcAverage function to calculate and display the average
	for(int i = 0; i < size; i++)
	{
		sum += test[i];
	}

	int lowest = test[0];
	for(int i = 1; i < size; i++)
	{
		if(test[i] < lowest)
			lowest = test[i];
	}

	sum -= lowest;

	avg = static_cast<double>(sum)/(size-1);

	cout << "The test average for " << name << " is " 
	    << avg << endl << endl;

	//cout << endl << test << endl;
	return 0;

}	// end of function main

