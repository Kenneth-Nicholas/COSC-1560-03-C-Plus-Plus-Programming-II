// Paul Biolchini
// COSC 1560.05
// Function to determine if a phone number is correct

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
bool isPhone(char*, char*);
char * getPhoneNumber(char *);
char * setPhoneNumberPattern();

int main ()
{
	//char pattern[] = "(###)###-####";
	//char pnum[] = "(314)772-4593";
	char *pattern = setPhoneNumberPattern();
	char *pnum = getPhoneNumber(pattern);

	if(isPhone(pnum, pattern))
			cout << "The phone number is correct.\n";
	else
			cout << "The phone number is incorrect.\n";
	delete [] pattern;
	delete [] pnum;
	return 0;
}

char * setPhoneNumberPattern()
{
	char str[25];
	cout << "Please enter the pattern for the phone number.\n"
		<< "Type a # every place you want a number to appear.\n"
		<< "Otherwise type the character you wish to appear.\n"
		<< "e.g. type (###)###-#### for a phone number of the form: (314)968-7124\n"
		<< "There is a limit of 24 characters for any pattern\n";
	cout << "Pattern: ";
	cin.getline(str, 25);
	int len = strlen(str)+1;
	char * pat = new char[len];
	int count;
	for (count = 0; str[count] != '\0'; count ++)
		pat[count] = str[count];
	pat[count] = '\0';
	return pat;
}

char * getPhoneNumber(char *pat)
{
	int len = strlen(pat)+1;
	char *pN = new char[len];
	cout << "Please enter the phone number in the following pattern:\n"
		<< pat << "  Where the # represents a number\n";
	cin.getline (pN, len);
	return pN;
}


bool isPhone(char* phone, char* pat)
{
	bool correct = true;
	while(*phone != '\0')
	{
		if(*pat == '#' && !isdigit(*phone))
		{
				correct = false;
				break;
		}
		else if(*pat != '#' && *phone != *pat)
		{
				correct = false;
				break;
		}
		phone++;
		pat++;
	}
	return correct;
}
