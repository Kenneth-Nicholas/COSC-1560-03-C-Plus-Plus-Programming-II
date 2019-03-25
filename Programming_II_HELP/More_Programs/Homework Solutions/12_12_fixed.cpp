
//  Written  C++ Programmer
//  Chapter 12
//  Assignment 9:  Password Verifier

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

//Function Prototype
bool validPassword(char *);

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
bool validPassword(char * str)  
{
	bool hasUpper = false, 
		hasLower = false, 
		hasDigit = false, 
		hasBad = false;

	if (strlen(str) < 6 )
	{
   		cout << "The password must be at least 6 characters long.\n";
		return false;
	}
	while (*str != 0)
	{
   		if (isupper(*str))
			hasUpper = true;
		else if (islower(*str))
      		hasLower = true;
		else if (isdigit(*str))
      		hasDigit = true;
		else
			hasBad = true;
	   str++;
   }

    if (!hasUpper || !hasLower || !hasDigit || hasBad)
    {
        cout << "The password must have:\n";
			if (!hasUpper)
			cout << "\tat least one uppercase character.\n";
			if (!hasLower)
			cout << "\tat least one lowercase character.\n";
			if (!hasDigit)
			cout << "\tat least one numeric digit\n";
			if(hasBad)
				cout << "\tonly valid characters\n";
        return false;
    }
    return true;
}


