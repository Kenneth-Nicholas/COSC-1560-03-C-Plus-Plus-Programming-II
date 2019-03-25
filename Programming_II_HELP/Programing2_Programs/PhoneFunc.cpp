// Paul Biolchini
// COSC 1560.05
// Function to determine if a phone number is correct

#include <iostream>
#include <cctype>
using namespace std;
bool isPhone(char*, char*);

int main ()
{
//	char pattern[] = "(###)###-####";
	char pattern[] = "###.###.####";
//	char pnum[]    = "(314)772-4593";
	char pnum[]    = "314.772.4593";
	if(isPhone(pnum, pattern))
			cout << "The phone number is correct.\n";
	else
			cout << "The phone number is incorrect.\n";
	return 0;
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