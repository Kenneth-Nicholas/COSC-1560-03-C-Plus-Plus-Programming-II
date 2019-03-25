// Chapter 11, Programming Challenge 6: Soccer Scores
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


// Declaration of the Player structure
struct Player
{
   string name;		 // Player's name
   int number;       // Player's number
   int points;       // Points scored by the player
};

// Function prototypes
void getPlayerInfo(Player &);
void showInfo(Player);
int  getTotalPoints(Player [], int);
void showHighest(Player [], int);

//***********************************************
// Function main                                *
//***********************************************

int main()
{
	// Constant for the number of players
	const int NUM_PLAYERS = 12;

	// Array of Player structures
    Player team[NUM_PLAYERS];
   
   // Loop counter
   int index;

   // Get each player's info.
   for (index = 0; index < NUM_PLAYERS; index++)
   {
      cout << "\nPLAYER #" << (index + 1) << "\n";
      cout << "---------\n";
      getPlayerInfo(team[index]);
      cin.ignore();
   }

   // Display the table headings.
   cout << setw(20) << left << "\nNAME";
   cout << setw(10) << "NUMBER";
   cout << setw(10) << "POINTS SCORED\n";

   // Display the team info.
   for (index = 0; index < NUM_PLAYERS; index++)
      showInfo(team[index]);
   
   // Display total points
   cout << "TOTAL POINTS: "
        << getTotalPoints(team, NUM_PLAYERS)
        << endl;
        
   // Display the player scoring the most points.
   showHighest(team, NUM_PLAYERS);
   
   return 0;
}

//***********************************************
// Function getPlayer                           *
// This function accepts a reference to a Player*
// structure variable. The user is asked to     *
// enter the player's name, number, and the     *
// number of points scored. This data is stored *
// in the reference parameter.                  *
//***********************************************
void getPlayerInfo(Player &p)
{
   cout << "Player name: ";
   getline(cin, p.name);
   cout << "Player's number: ";
   cin >> p.number;
   cout << "Points scored: ";
   cin >> p.points;
}

//***********************************************
// Function showInfo                            *
// This function displays the data in the Player*
// structure variable passed into the parameter.*
//***********************************************

void showInfo(Player p)
{
   cout << setw(20) << p.name;
   cout << setw(10) << p.number;
   cout << setw(10) << p.points << endl;
}

//***********************************************
// Function getTotalPoints                      *
// This function accepts an array of Player     *
// structure variables as its argument. The     *
// function calciulates and returns the total   *
// of all the players points in the array.      *
//***********************************************
int getTotalPoints(Player p[], int size)
{
   int total = 0;
   for (int index = 0; index < size; index++)
      total += p[index].points;
      
   return total;
}

//***********************************************
// Function showHighest                         *
// This function accepts an array of Player     *
// structure variables. It displays the name    *
// of the player who scored the most points.    *
//***********************************************
void showHighest(Player p[], int size)
{
   int highest = 0, highPoints = p[0].points;

   for (int index = 1; index < size; index++)
   {
      if (p[index].points > highPoints)
      {
         highest = index;
         highPoints = p[index].points;
      }
   }
   cout << "The player who scored the most points is: ";
   cout << p[highest].name << " player number " << p[highest].number << " scored " << p[highest].points << " points.\n";
}