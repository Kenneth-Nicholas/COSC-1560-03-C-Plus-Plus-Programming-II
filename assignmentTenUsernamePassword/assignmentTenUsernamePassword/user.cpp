//*******************************************************************************************************
//
//        File:              user.cpp
//
//        Student:           Kenneth Nicholas
//
//        Assignment:        Assignment #10: Username/Password
//
//        Course Name:       Programming II
//
//        Course Number:     COSC 1560 - 03 
//
//        Due:               Dec 6, 2017
//
//
//        This program validates usernames and passwords for SignMeUp.com. Firstly,
//        it reads data from a file titled "user_data.txt" that contains information
//        entered by eight users, including the user's name, the user's desired 
//        username, and the user's desired password (which is entered twice). The
//        program then determines if each user has entered a valid username and a 
//        valid password, and outputs the results of each user's entries to a text
//        file titled "a10.txt." The validation process checks to see if the data is
//        in alignment with the username and password rules denoted by the site. 
//        The rules include the following for usernames (must be ten characters, 
//        must contain one uppercase character, must contain one digit), and the
//        following for passwords (must be eight characters, passwords must match,
//        must contain at least one digit, must contain at least one uppercase 
//        letter must contain at least one lowercase letter, must contain at least
//        one special charcter from the character set "#, $, %, &, !, ?").
//
//        Files required:
//    			   1.      user.cpp	               - main .cpp file
//				   2.      user_data.txt	       - text file of input
//                 3.      a10.txt	               - text file of output
//
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

//*******************************************************************************************************

void run();
void loadData(char user[], const int U_SIZE, char username[], char password1[], char password2[], ifstream &inFile);
void validateUsername(char username[], const int UN_SIZE, bool fail[], const int N_TESTS);
void validatePassword(char password1[], char password2[], const int P_SIZE, bool fail[], const int N_TESTS);
void outputResults(char user[], char username[], char password1[], bool fail[], const int N_TESTS, ofstream &outFile);

//*******************************************************************************************************

int main()
{
	run();

	return 0;
}
//*******************************************************************************************************

void run()
{
	const int U_SIZE = 14,
		      UN_SIZE = 11,
		      P_SIZE = 9,
		      N_TESTS = 9;
			
	char user[U_SIZE],
		 username[UN_SIZE],
		 password1[P_SIZE],
		 password2[P_SIZE];

	bool failArray[N_TESTS] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

	int inputIntHolder = 0,
		numberOfLoops = 0,
		loopNumber = 1;

	ifstream inputFile;
	inputFile.open("user_data.txt");

	inputFile >> inputIntHolder;

	ofstream outputFile;
	outputFile.open("a10.txt", ios::app);

	for (numberOfLoops = inputIntHolder; loopNumber <= numberOfLoops; loopNumber++)
	{
		loadData(user, U_SIZE, username, password1, password2, inputFile);
		validateUsername(username, UN_SIZE, failArray, N_TESTS);
		validatePassword(password1, password2, P_SIZE, failArray, N_TESTS);
		outputResults(user, username, password1, failArray, N_TESTS, outputFile);

		for (int i = 0; i < N_TESTS; i++)
		{
			failArray[i] = 1;
		}
	}

	inputFile.close();
	outputFile.close();
}

//*******************************************************************************************************

void loadData(char user[], const int U_SIZE, char username[], char password1[], char password2[], ifstream &inFile)
{
	inFile.ignore();
	inFile.getline(user, U_SIZE);
	inFile >> username;
	inFile >> password1;
	inFile >> password2;
}

//*******************************************************************************************************

void validateUsername(char username[], const int UN_SIZE, bool fail[], const int N_TESTS)
{
	int lengthOfUsername = strlen(username);

	int numberOfUppercase = 0,
		numberOfDigits = 0;

	if (lengthOfUsername == (UN_SIZE - 1))
	{
		fail[0] = 0;
	}

	for (int i = 0; i < lengthOfUsername; i++)
	{
		if (isupper(username[i]))
		{
			numberOfUppercase++;
		}
	}
	if (numberOfUppercase == 1)
	{
		fail[1] = 0;
	}

	for (int j = 0; j < lengthOfUsername; j++)
	{
		if (isdigit(username[j]))
		{
			numberOfDigits++;
		}
	}
	if (numberOfDigits == 1)
	{
		fail[2] = 0;
	}
}

//*******************************************************************************************************

void validatePassword(char password1[], char password2[], const int P_SIZE, bool fail[], const int N_TESTS)
{
	int lengthOfPassword = strlen(password1);

	if (lengthOfPassword == (P_SIZE - 1))
	{
		fail[3] = 0;
	}

	if (strcmp(password1, password2) == 0)
	{
		fail[4] = 0;
	}

	for (int i = 0; i < lengthOfPassword; i++)
	{
		if (isdigit(password1[i]))
		{
			fail[5] = 0;
		}
	}

	for (int j = 0; j < lengthOfPassword; j++)
	{
		if (isupper(password1[j]))
		{
			fail[6] = 0;
		}
	}

	for (int k = 0; k < lengthOfPassword; k++)
	{
		if (islower(password1[k]))
		{
			fail[7] = 0;
		}
	}

	for (int l = 0; l < lengthOfPassword; l++)
	{
		if (password1[l] == '#')
		{
			fail[8] = 0;
		}
		else if (password1[l] == '$')
		{
			fail[8] = 0;
		}
		else if (password1[l] == '%')
		{
			fail[8] = 0;
		}
		else if (password1[l] == '&')
		{
			fail[8] = 0;
		}
		else if (password1[l] == '!')
		{
			fail[8] = 0;
		}
		else if (password1[l] == '?')
		{
			fail[8] = 0;
		}
	}
}

//*******************************************************************************************************

void outputResults(char user[], char username[], char password1[], bool fail[], const int N_TESTS, ofstream &outFile)
{
	string fail_text[9] = { "Username is less than 10 chars in length",
		                    "Username does not contain 1 uppercase character",
		                    "Username does not contain 1 digit",
		                    "Password is less than 8 characters in length",
		                    "Passwords do not match",
		                    "Password does not contain 1 digit",
		                    "Password does not contain one uppercase character",
		                    "Password does not contain 1 lowercase character",
		                    "Password does not contain 1 special character" };

	string usernameStatus = "Invalid",
		   passwordStatus = "Invalid";

	if (fail[0] == 0)
	{
		if (fail[1] == 0)
		{
			if (fail[2] == 0)
			{
				usernameStatus = "Valid";
			}
		}
	}

	if (fail[3] == 0)
	{
		if (fail[4] == 0)
		{
			if (fail[5] == 0)
			{
				if (fail[6] == 0)
				{
					if (fail[7] == 0)
					{
						if (fail[8] == 0)
						{
							passwordStatus = "Valid";
						}
					}
				}
			}
		}
	}

	outFile << "User:       " << user << endl
		    << "Username:   " << username << endl
		    << "Status:     " << usernameStatus << endl;

	cout << "User:       " << user << endl
		 << "Username:   " << username << endl
		 << "Status:     " << usernameStatus << endl;

	if (usernameStatus == "Invalid")
	{
		outFile << "Reason(s):  " << endl;

		cout << "Reason(s):  " << endl;

		if (fail[0] == 1)
		{
			outFile << fail_text[0] << endl;

			cout << fail_text[0] << endl;
		}
		if (fail[1] == 1)
		{
			outFile << fail_text[1] << endl;

			cout << fail_text[1] << endl;
		}
		if (fail[2] == 1)
		{
			outFile << fail_text[2] << endl;

			cout << fail_text[2] << endl;
		}
	}

	outFile << "Password:   " << password1 << endl
		    << "Status:     " << passwordStatus << endl;

	cout << "Password:   " << password1 << endl
		 << "Status:     " << passwordStatus << endl;

	if (passwordStatus == "Invalid")
	{
		outFile << "Reason(s):  " << endl;

		cout << "Reason(s):  " << endl;

		if (fail[3] == 1)
		{
			outFile << fail_text[3] << endl;

			cout << fail_text[3] << endl;
		}
		if (fail[4] == 1)
		{
			outFile << fail_text[4] << endl;

			cout << fail_text[4] << endl;
		}
		if (fail[5] == 1)
		{
			outFile << fail_text[5] << endl;

			cout << fail_text[5] << endl;
		}
		if (fail[6] == 1)
		{
			outFile << fail_text[6] << endl;

			cout << fail_text[6] << endl;
		}
		if (fail[7] == 1)
		{
			outFile << fail_text[7] << endl;

			cout << fail_text[7] << endl;
		}
		if (fail[8] == 1)
		{
			outFile << fail_text[8] << endl;

			cout << fail_text[8] << endl;
		}

	}
	outFile << endl;

	cout << endl;
}

//*******************************************************************************************************
//
// User:       Linda Carlson
// Username:   lindac45
// Status:     Invalid
// Reason(s):
// Username is less than 10 chars in length
// Username does not contain 1 uppercase character
// Username does not contain 1 digit
// Password:   N9r%ZCVD
// Status:     Valid
//
// User:       Phil Collins
// Username:   bigDeal100
// Status:     Invalid
// Reason(s):
// Username does not contain 1 digit
// Password:   9Pu$kmXF
// Status:     Valid
//
// User:       Katie Lewis
// Username:   kattttie1
// Status:     Invalid
// Reason(s):
// Username is less than 10 chars in length
// Username does not contain 1 uppercase character
// Password:   NnYhdG9
// Status:     Invalid
// Reason(s):
// Password is less than 8 characters in length
// Password does not contain 1 special character
//
// User:       Ben Williams
// Username:   gentleBen1
// Status:     Valid
// Password:   JRRY_XKQ
// Status:     Invalid
// Reason(s):
// Password does not contain 1 digit
// Password does not contain 1 lowercase character
// Password does not contain 1 special character
//
// User:       Jason Hill
// Username:   h1llSter00
// Status:     Invalid
// Reason(s):
// Username does not contain 1 digit
// Password:   &d88uQ2$
// Status:     Valid
//
// User:       Peter Piper
// Username:   TheP1per
// Status:     Invalid
// Reason(s):
// Username is less than 10 chars in length
// Username does not contain 1 uppercase character
// Password:   1234567
// Status:     Invalid
// Reason(s):
// Password is less than 8 characters in length
// Password does not contain one uppercase character
// Password does not contain 1 lowercase character
// Password does not contain 1 special character
// 
// User:       Colleen Wells
// Username:   Wellwish19
// Status:     Invalid
// Reason(s):
// Username does not contain 1 digit
// Password:   qrcSfwsh
// Status:     Invalid
// Reason(s):
// Password does not contain 1 digit
// Password does not contain 1 special character
//
// User:       John Howard
// Username:   JazzMAN99
// Status:     Invalid
// Reason(s):
// Username is less than 10 chars in length
// Username does not contain 1 uppercase character
// Username does not contain 1 digit
// Password:   WHAnr%F7
// Status:     Valid
// 
// Press any key to continue . . .
//
//*******************************************************************************************************