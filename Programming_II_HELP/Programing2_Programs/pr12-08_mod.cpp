// This program uses the return value of strcmp to alphabetically
// sort two strings entered by the user.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

char * makeUpper(char*);
int compareUppers(char*, char *);
int main()
{
	char name1[30], name2[30];

	cout << "Enter a name (last name first): ";
	cin.getline(name1, 30);
	cout << "Enter another name: ";
	cin.getline(name2, 30);
	cout << "Here are the names sorted alphabetically:\n";
	if (compareUppers(name1, name2) < 0)
		cout << name1 << endl << name2 << endl;
	else if (compareUppers(name1, name2) > 0)
		cout << name2 << endl << name1 << endl;	
	else
		cout << "You entered the same name twice!\n";
	return 0;
}

char * makeUpper(char* str)
{
	char * s = str;
	while(*s)
	{
		*s++ = toupper(*s);
	}
	return str;
}

int compareUppers(char *n1, char *n2)
{
	int result = 0;
	int len;

	len = strlen(n1);  //find length of first name
	char * a = new char[len+1]; // create char array to hold that name
	len = strlen(n2);	
	char * b = new char[len+1]; 
	strcpy(a,n1); // copy first name to local array
	strcpy(b,n2); // copy second name to local array
	// convert local arrays to upper for comparisons.
	// names are not changed
	if (strcmp(makeUpper(a), makeUpper(b)) < 0)
		result = -1;		// first name is before second
	else if (strcmp(makeUpper(a), makeUpper(b)) > 0)
		result = 1;	       //  second name is before first.
	delete [] a;		// remove local char arrays
	delete [] b;
	return result;
}