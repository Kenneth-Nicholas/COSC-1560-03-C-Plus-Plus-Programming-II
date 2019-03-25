// Chapter 5, Programming Challenge 24: Using Files-Numeric Processing
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Variables
	int count = 0;       // To count numbers
	double number,       // To hold a number from the file
		total = 0.0,  // Accumulator
		greatest,
		least,
		average;      // To hold the average

	// File stream object
	ifstream inFile;

	// Open the file.
	//	inFile.open("c:\\Random.txt");
	inFile.open("Random.txt");
	if (!inFile)
	{
		cout << "File not found or does not open.\n";
	}
	else
	{
		inFile >> number;
		// Read the numbers from the file.
		greatest = least = number;
		while (!inFile.eof())
		{
			// We have a number! Increment the counter.
			count++;
			if (number > greatest)
			{
				greatest = number;
			}
			if (number < least)
			{
				least = number;
			}
			// Add the number to the accumulator.
			total += number;

			inFile >> number;
		}
	}

	// Close the file.
	inFile.close();
   
	// Calculate the average of the numbers.
	if (count > 0)
	{
		average = total / count;
   
	// Display the results.
	cout << "Number of numbers: " << count << endl
		 << "Sum of the numbers: " << total << endl
		 << "Average of the numbers: " << average << endl
		 << "Largest number entered: " << greatest << endl
		 << "Smallest number entered: " << least << endl
		 << endl;
	}
	else
	{
		cout << "No numbers were found in the file.\n";
	}
	return 0;
}