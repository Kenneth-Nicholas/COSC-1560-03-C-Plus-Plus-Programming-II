//  Written  C++ Programmer
//  Chapter 12
//  Assignment 9:  Password Verifier

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

//Function Prototype
bool validPassword(char *);
bool isSpecial(char);


int main()
{
	char string[80];

	cout << "Enter a password: ";
	cin.getline(string, 80);
	if (!validPassword(string))
   		cout << "The password is not valid.\n";
	else
   		cout << "The password is valid.\n";
	return 0;
}

//****************************
// validate a password       *
//****************************
bool validPassword(char *str)  
{
	bool result = true;
	bool hasUpper = false, 
		hasLower = false, 
		hasDigit = false;
	bool isLongEnough = true, 
		hasSpecial = false, 
		hasIncorrect = false;

	if (strlen(str) < 6)
	{
		isLongEnough =false;
	}
	while (*str != 0)
	{
		if (isupper(*str))
      		hasUpper = true;
		else if (islower(*str))
      		hasLower = true;
		else if (isdigit(*str))
      		hasDigit = true;
		else if (isSpecial(*str))
      		hasSpecial = true;
		else
			hasIncorrect = true;
	   str++;
        }

       if (!hasUpper || !hasLower || !hasDigit ||
		   !hasSpecial || !isLongEnough || hasIncorrect)
       {
          cout << "The password must have:\n";
			 if (!isLongEnough)
	    		cout << "\tat least 6 characters.\n";
			 if (!hasUpper)
				cout << "\tat least one uppercase character.\n";
			 if (!hasLower)
				cout << "\tat least one lowercase character.\n";
			 if (!hasDigit)
				cout << "\tat least one numeric digit\n";
			 if (!hasSpecial)
				cout << "\tat least one special character\n";
			 if (hasIncorrect)
				 cout << "\tonly valid password characters\n";
          result = false;
       }
       return result;
}

bool isSpecial(char c)
{
	bool result = false;
	if (c == '~' || c == '!' || 
	    c == '@' || c == '#' || 
        c == '$' || c == '%' ||
        c == '&' || c == '*' ||
        c == '(' || c == ')')
		result = true;
	return result;
}

