//  Written  C++ Programmer
//  Chapter 12
//  Assignment 9:  Password Verifier

#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

//Function Prototype
bool validPassword(const char *);
bool isSpecial(char);
void displayBadCharacters(string);


int main()
{
	string password;

	cout << "Enter a password: ";
	getline(cin, password);
	if (!validPassword(password.data()))
   		cout << "The password is not valid.\n";
	else
   		cout << "The password is valid.\n";
	return 0;
}

//****************************
// validate a password       *
//****************************
bool validPassword(const char *str)  
{
	bool result = true;
	bool hasUpper = false, 
		hasLower = false, 
		hasDigit = false;
	bool isLongEnough = true, 
		hasSpecial = false, 
		hasIncorrect = false;
	string badCharacters = "";

	if (strlen(str) < 6)
	{
		isLongEnough =false;
	}
	while (*str)
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
		{
			hasIncorrect = true;
			badCharacters += *str;
		}
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
			 {
				 cout << "\tonly valid password characters. These are not allowed:  ";
				 displayBadCharacters(badCharacters);
			 }
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

void displayBadCharacters(string bc)
{
	for(int i = 0; i < bc.length(); i++)
		cout << bc.at(i);
	cout << endl;;

}