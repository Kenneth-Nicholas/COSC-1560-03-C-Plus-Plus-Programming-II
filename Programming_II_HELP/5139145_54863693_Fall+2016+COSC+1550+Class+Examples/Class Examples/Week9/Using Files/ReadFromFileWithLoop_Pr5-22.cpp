// This program reads data from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inputFile;
   int number;

   // Open the file.
   inputFile.open("ListOfNumbers.txt");


   // Read the numbers from the file and
   // display them.
   int count = 0;
   
 
   while (inputFile >> number)
   {
	  cout << number << endl;
	  count++;
   }

   // Close the file.
   inputFile.close();
   cout << count << " numbers were read from the file.\n";
   return 0;
}