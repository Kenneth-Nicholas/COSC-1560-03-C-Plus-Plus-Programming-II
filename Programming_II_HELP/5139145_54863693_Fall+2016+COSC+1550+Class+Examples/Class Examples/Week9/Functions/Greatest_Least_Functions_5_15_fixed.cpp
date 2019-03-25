// Paul Biolchini
// COSC 1550 
// Chapter 5, Problem 15
// Homework 8 Assignment 2
// The Greatest and Least of These
// This program finds the greatest and smallest value in a set of numbers

#include <iostream>
using namespace std;

int greater(int,int);
int lesser(int,int);

int main()
{
	int num,                  // holds each number input by the user 
		 greatest,             // largest value
		 least;                // smallest value

	cout << "Enter a whole number (-99 to quit): ";
	cin  >> num;	           // request/collect initial integer

	greatest = least = num;	  // initialize both variables to first number
	while (num != -99)   	  // test for number -99 to quit
	{
   		cout << "Enter another whole number (-99 to quit): ";	
		cin  >> num;	        // request/collect another integer
		if (num != -99)	     // if program has not received -99 to quit
		{	                    // compare integers for max and min
			greatest = greater(num,greatest);
			least = lesser(num,least);
		}
	}
	// Display results
	// don't ever print out -99 
	//even if it is the only number entered
	if (greatest != -99)  
	{
		cout << "\nThe greatest number you entered is " << greatest << ".\n";
		cout << "The least number you entered is " << least << ".\n\n";
	}
	return 0;
}

// function greater
//
// this function returns the bigger of two numbers
int greater(int currentNumber, int biggestNumber)
{
	if (currentNumber > biggestNumber)
		biggestNumber = currentNumber;
	return biggestNumber;
}


// function lesser
//
// this function returns the bigger of two numbers
int lesser(int currentNumber, int smallerNumber)
{

	if (currentNumber < smallerNumber)
    	smallerNumber = currentNumber;
	return smallerNumber;
}

