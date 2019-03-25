// Paul Biolchini
// COSC 1550 Fall 2004
// Find the largest Number

#include <iostream>
using namespace std;

// Function Prototypes
void displayResults(int);
int getNumber();
int findLargest(int, int, int);

int main()
{
	int num1,num2,num3,         // holds each number input by the user 
		 greatest;             // largest value

	num1 = getNumber();
	num2 = getNumber();
	num3 = getNumber();

	greatest = findLargest(num1,num2,num3);

	// Display results
	displayResults(greatest);

	//displayResults(findLargest(getNumber(),getNumber(),getNumber()));  // not recommended!!!

	return 0;
}

// Enter an integer between 0 and 10
int getNumber()
{
	static int var = 1;
	int num;
	cout << "Enter a positive number between 0 and 10: ";
	cin  >> num;	           
	while(num < 0 || num > 10)
	{
		cout << "Try again. The number you enter must be bewteen 0 and 10: ";
		cin  >> num;	          
	}
	cout << "You called this function " << var++ << " times.\n";
	return num;
}

// Find largest value among the three sent in parameter list.
int findLargest(int n1, int n2, int n3)  
{ 
	int largest = n1;
	if(n2 > largest)
		largest = n2;
	if(n3 > largest)
		largest = n3;
//  num1, num2, num3 are local o the findLArgest function.  Not the same as variables in main.
//	num1 = num2 = num3 = 0;
	return largest;
}

void displayResults(int res)
{
	cout << "\nThe largest number you entered is " << res << ".\n\n";
}