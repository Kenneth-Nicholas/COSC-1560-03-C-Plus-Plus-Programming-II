// This program cycles through a character array, displaying
// each element until a null terminator is encountered.
#include <iostream>
using namespace std;
void displayLine(char []);
void displayLineAgain(char*);

int main()
{
	char line[80];
	int count = 0;
	//for (int i = 0; i<80;i++)
	//{
	//	line[i] = 0;
	//}
	cout << "Enter a sentence of no more than 79 characters:\n";
	cin.getline(line, 80);
	cout << "The sentence you entered is:\n";
	while (line[count] != '\0')
	{
		cout << line[count];
		count++;
	}
	cout << endl;

	displayLine(line);
	displayLineAgain(line);
	displayLine(line);
	return 0;
}

void displayLine(char * l)
{
	for(int i = 0; *(l+i) != '\0'; i++)
	{
		cout << *(l+i);
	}
	cout << endl;
}

void displayLineAgain(char * l)
{
//	for(int i = 0; *l != '\0'; i++)
//	for(int i = 0; *l != 0; i++)
	while(*l)
	{
		cout << *l++;
		displayLine(l);  // Starts string an new pointer location
	}
	cout << endl;
	displayLine(l);  // pointer is at \0 (space)
	cout << endl;
}
