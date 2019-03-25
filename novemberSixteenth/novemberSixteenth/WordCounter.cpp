#include <iostream>
#include <cstring>

using namespace std;

void wordCount(char* data);

int main()
{
	char data[200];

	cout << "Please enter a sentence: ";
	cin.getline(data, 200);

	wordCount(data);

	return 0;
}

void wordCount()
{
	int len;
	int numWords;
	int numSpaces = 0;

	len = strlen(data);

	//Every good boy does fine

	for (int i = 0; i < len; i++)
	{
		if (isspace(data[i]))
		{
			numSpaces++;
		}
	}

	numWords = (numSpaces + 1);

	cout << "The sentence: " << endl;
	cout << data << endl;
	cout << "Contains " << numWords << " words." << endl;
}