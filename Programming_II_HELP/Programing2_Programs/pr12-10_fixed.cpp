// This program demonstrates the strcmp and atoi functions.

#include <iostream>
#include <cstring> // For strcmp
#include <cstdlib> // For atoi
#include <cctype>  // For isdigit
using namespace std;

bool isValidNumber(char *);

int main()
{
	char input[20];
	int total = 0, count = 0;
	float average;

	cout << "This program will average a series of numbers.\n";
	cout << "Enter the first number or Q to quit: ";
	cin.getline(input, 20);
	while ((strcmp(input, "Q") != 0)&&(strcmp(input, "q") != 0))
	{
		if (isValidNumber(input))
		{
			count++;  // Keep track of how many numbers are entered.
			total += atoi(input);  // Keep a running total.
		}
		cout << "Enter the next number or Q to quit: ";
		cin.getline(input, 20);
	}
	if (count != 0)
	{
		average = float(total) / count;
		cout << "You entered  " << count << " valid numbers." << endl;
		cout << "average: " << average << endl;
	}
	return 0;
}
 bool isValidNumber(char *str)
 {
	 bool valid = true;
	 int len = strlen(str);
	 if(len != 0)
	 {
		 while(*str != 0)
		 {
			if (!isdigit(*str))
				valid = false;
			str++;
		 }
	 }
	 else
			valid = false;  // only a carriage return entered.

	 return valid;
 }