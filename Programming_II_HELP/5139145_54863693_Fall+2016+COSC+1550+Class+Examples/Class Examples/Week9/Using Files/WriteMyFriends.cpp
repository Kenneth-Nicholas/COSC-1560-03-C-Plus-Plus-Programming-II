// This program writes user input to a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ofstream outputFile;
   string name1, name2, name3;

   // Open an output file.
   outputFile.open("MyFriends.txt");
   if (outputFile)
   {
	   // Get the names of three friends.
	   cout << "Enter the names of three friends.\n";
	   cout << "Friend #1: ";
	   getline(cin,name1);
	   cout << "Friend #2: ";
	   getline(cin,name2);
	   cout << "Friend #3: ";
	   getline(cin,name3);

	   // Write the names to the file.
	   outputFile << name1 << endl;
	   outputFile << name2 << endl;
	   outputFile << name3 << endl;
	   cout << "The names were saved to a file.\n";

	   // Close the file
	   outputFile.close();
   }
   else
   {
	   cout << "The file could not be opened!\n";
   }
   return 0;
} 