// This program illustrates how a string can be processed as an array
// of individual characters. It reads in a string, then counts the 
// number of vowels in the string. It uses the toupper function to 
// uppercase each letter in the string and the string class member 
// function length() to determine how many characters are in the string.
#include <iostream>
#include <string>        // Needed to use string objects
#include <cctype>        // Needed for the toupper function
using namespace std;

int main()
{
	char ch;
	int vowelCount = 0;
//	string sentence;
	char sentence[81];
	
	cout << "Enter any sentence you wish and I will \n"
		  << "tell you how many vowels are in it.\n";
//	getline(cin, sentence);
	cin.getline(sentence,81);
    cout << sentence << endl;                      

//	for (int pos = 0; pos < sentence.length(); pos++)
	for (int pos = 0; pos < sentence[pos] != '\0'; pos++)
//	for (int pos = 0; pos < pos < 81; pos++)  // BAD !!!!
	{	
		// Uppercase a copy of the next character and assign it to ch
      ch = toupper(sentence[pos]);   

	  // If the character is a vowel, increment vowelCount                            
		switch(ch)
		{	case 'A': 
		    case 'E': 
			case 'I': 
			case 'O': 
			case 'U': vowelCount++;
		}
	}
	cout << "There are " << vowelCount << " vowels in the sentence.\n";
	return 0;
}
