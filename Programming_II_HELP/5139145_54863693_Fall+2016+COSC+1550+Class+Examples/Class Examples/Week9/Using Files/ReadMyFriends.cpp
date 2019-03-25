// This program reads data from a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ifstream inputFile;
   string name;

   inputFile.open("MyFriends.txt");
   if (inputFile)
   {
	   cout << "Reading data from the file.\n";
  
	   getline (inputFile, name);      // Read name 1 from the file
	   cout << name << endl;   // Display name 1
  
	   getline (inputFile, name);     // Read name 2 from the file
	   cout << name << endl;   // Display name 2
  
	   getline (inputFile, name);      // Read name 3 from the file
	   cout << name << endl;   // Display name 3

	   inputFile.close();      // Close the file
   }
   else
   {
	   cout << "The file could not be opened!\n";
   }
   return 0;
} 