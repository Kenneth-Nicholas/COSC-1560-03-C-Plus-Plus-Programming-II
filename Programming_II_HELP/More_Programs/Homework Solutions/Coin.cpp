// Implememtation file for the Coin class
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
#include "Coin.h"

//*******************************************************
// The constructor randomly determines the side of the  *
// coin that is facing up ("heads" or "tails") and      *
// initializes the sideUp member variable accordingly.  *
//*******************************************************
Coin::Coin()
{
   // Get the system time.
   unsigned seed = time(0);

   // Seed the random number generator.
   srand(seed);

   // Call the toss function to set the
   // initial state of sideUp.
   toss();
}

//*******************************************************
// The toss member function simulates the tossing of    *
// the coin. It randomly determines the side of the     *
// coin that is facing up ("heads" or "tails") and      *
// sets the sideUp member variable accordingly.         *
//*******************************************************
void Coin::toss()
{
   // Constants for the minimum and maximum values
   const int MIN = 0;   // Minimum value
   const int MAX = 1;   // Maximum value

   // Get a random value between MIN and MAX.
   int value = (rand() % (MAX - MIN + 1)) + MIN;

   // Determine the side that is facing up.
   if (value == MIN)
   {
      sideUp = "heads";
   }
   else
   {
      sideUp = "tails";
   }
}

//*******************************************************
// The getSideUp member function returns the value of   *
// the sideUp member variable.                          *
//*******************************************************
string Coin::getSideUp()
{
   return sideUp;
}