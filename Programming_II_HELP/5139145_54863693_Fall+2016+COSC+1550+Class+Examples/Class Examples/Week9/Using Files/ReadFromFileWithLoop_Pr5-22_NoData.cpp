// This program reads data from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inputFile;
   int number;

   // Open the file.
//   inputFile.open("ListOfNumbers.txt");
   inputFile.open("List.txt");

   // Read the numbers from the file and
   // display them.
   int count = 0;
   inputFile >> number;
   while (!inputFile.eof())
//   while (inputFile >> number)
   {
	  cout << number << endl;
	  count++;
	  inputFile >> number;
   }

   // Close the file.
   inputFile.close();
   cout << count << " numbers were read from the file.\n";
   return 0;
}