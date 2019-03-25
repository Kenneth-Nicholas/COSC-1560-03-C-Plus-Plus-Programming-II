// Chapter 11, Programming Challenge 10: Search Function for the Speakersí Bureau Program
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Constants for array size
const int NUM_SPEAKERS = 20;

// Declaration of the Speaker structure
struct Speaker
{
   string name;  // Speaker's name
   string phone; // Speaker's telephone number
   string topic; // Speaker's speaking topic
   double fee;   // Speaker's fee for speaking
};

// Function prototypes
void getInfo(Speaker &);
void showInfo(Speaker);
void showSearch(Speaker [], string, int);

int main()
{
   int maxSpeaker = 0, choice, spk;
   int count;
   string search;
   Speaker list[NUM_SPEAKERS];

   do
   {
      cout << "\n1. Enter new speaker information\n";
      cout << "2. Change speaker information\n";
      cout << "3. Display all speaker information\n";
      cout << "4. Search for a speaker\n";
      cout << "5. Exit the program\n\n";
      cout << "Enter your choice: ";
      cin >> choice;


      // Validate the menu choice.
      while (choice < 1 || choice > 5)
      {
         cout << "Please Enter 1, 2, 3, 4, or 5.\n";
         cin >> choice;
      }

      // Process the user's choice.
      switch (choice)
      {
         // Enter new speaker information
         case 1:  
            cin.ignore();
            getInfo(list[maxSpeaker]);
            cout << "You have entered information for speaker ";
            cout << "number " << maxSpeaker << endl;
            maxSpeaker++;
            break;

         // Change speaker information
         case 2:  
            cout << "Speaker number: ";
            cin >> spk;
            
            // Validate input
            while (spk < 0 || spk >= maxSpeaker)
            {
               cout << "ERROR: Invalid Speaker Number\n";
               cin >> spk;
            }

            cin.ignore();
            showInfo(list[spk]);
            getInfo(list[spk]);
            break;

         // Display speaker information
         case 3:  
            cin.ignore();
            for (count = 0; count < maxSpeaker; count++)
            {
               showInfo(list[count]);
               cout << "Press enter to continue...";
               cin.ignore();
            }

         // Search for a speaker
         case 4: 
            cin.ignore();
            cout << "Enter part of the speaker name: ";
            getline(cin, search);
            showSearch(list, search, maxSpeaker);
      }
   } while (choice != 5);

   return 0;
}

//*******************************************************
// Function getInfo                                     *
// This function gets the speaker info from the user,   *
// validates it, and stores it in the reference         *
// parameter s.                                         *
//*******************************************************
void getInfo(Speaker &s)
{
   // Get the speaker's name.
   cout << "\nSpeaker name: ";   
   getline(cin, s.name);
   while (s.name.empty())
   {
      cout << "Please enter a name: ";
      getline(cin, s.name);
   }
   
   // Get the speaker's telephone number.
   cout << "Telephone: ";
   getline(cin, s.phone);
   while (s.phone.empty())
   {
      cout << "Please enter a telephone number: ";
      getline(cin, s.phone);
   }

   // Get the speaker's speaking topic.
   cout << "Speaking topic: ";
   getline(cin, s.topic);
   while (s.topic.empty())
   {
      cout << "Please enter a speaking topic: ";
      getline(cin, s.topic);
   }

   // Get the speaker's fee.
   cout << "Fee required: ";
   cin >> s.fee;
   while (s.fee < 0)
   {
      cout << "Please enter a value of 0 or greater: ";
      cin >> s.fee;
   }
   cin.ignore();
}

//*******************************************************
// Function showInfo                                    *
// This function displays the data stored in the        *
// parameter s.                                         *
//*******************************************************
void showInfo(Speaker s)
{
   cout << fixed << showpoint << setprecision(2);
   cout << "Speaker name: " << s.name << endl;
   cout << "Telephone: " << s.phone << endl;
   cout << "Speaking Topic: " << s.topic << endl;
   cout << "Required Fee: $" << s.fee << endl;
}
//*******************************************************
// Function showSearch                                  *
// The parameter s is an array of Speaker structures to *
// be searched. The parameter lookUp contains the       *
// string to search for. The paramater max indicates the*
// number of elements to search. If the string is found *
// in any of the array's elements, the members of the   *
// element are displayed.                               *
//*******************************************************
void showSearch(Speaker s[], string lookUp, int max)
{
   bool found = false;

   for (int count = 0; count < max; count++)
    {
      if (s[count].name == lookUp)
      {
         found = true;
		 showInfo(s[count]);
      }
   }
   
   if (!found)
		cout << "\nRecord not found\n";

    cout << "Press enter to continue...";
    cin.ignore();
}