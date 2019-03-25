//Program shows how to rewind a file. It writes a text file and 
//opens it for reading, then rewinds it to the beginning and reads it
//again. 
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   char ch;
   fstream ioFile("rewind.txt", ios::out);
   long pos;

   if (!ioFile)
    {
      cout << "Error in trying to create file";
      return 0;
    }
   ioFile << "All good dogs " << endl 
          << "growl, bark, and eat." << endl;
   ioFile.close();

   //Open the file and read it.
   ioFile.open("rewind.txt", ios::in);
   if (!ioFile)
   {
     cout << "Error in trying to open file";
     return 0;
   }
   pos = ioFile.tellg();
   cout << pos << endl;
   ioFile.get(ch);
   while (!ioFile.fail())
   {
       cout.put(ch);
       ioFile.get(ch);
   pos = ioFile.tellg();
   cout << pos << endl;
   }
   cout << endl;
   //Rewind the file.  
   ioFile.clear();
   ioFile.seekg(0L, ios::beg); 
   pos = ioFile.tellg();
   cout << pos << endl;

   //Read file again.
   ioFile.get(ch);
   while (!ioFile.fail())
   {
   //pos = ioFile.tellg();
   //cout << pos << endl;
      cout.put(ch);
      ioFile.get(ch);
   }
   cout << endl;
   ioFile.close();

   return 0;
}
