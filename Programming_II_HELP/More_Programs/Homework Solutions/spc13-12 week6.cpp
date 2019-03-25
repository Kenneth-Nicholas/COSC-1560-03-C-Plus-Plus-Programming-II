// Chapter 13, Programming Challenge 12: Coin Toss Simulator
#include <iostream>
#include "Coin.h"

int main()
{
   // Variables
   int heads = 0; // To hold the number of times heads is facing up
   int tails = 0; // To hold the number of times tails is facing up

   // Create an instance of the Coin class.
   Coin coin;

   // Display the side that is initially facing up.
   cout << "The side initially facing up is: ";
   cout << coin.getSideUp() << endl;
   cout << "Now tossing the coin 20 times...\n";

   // Toss the coin 20 times.
   for (int i = 0; i < 20; i++)
   {
      // Toss the coin.
      coin.toss();

      // Display the side facing up.
      cout << coin.getSideUp() << endl;

      // Determine if "heads" is facing up.
      if (coin.getSideUp() == "heads")
      {
         // If so, increment the heads counter variable.
         heads++;
      }
      else
      {
         // If not, increment the tails counter variable.
         tails++;
      }
   }

   // Display the number of times heads was facing up.
   cout << "Heads was facing up " << heads << " times.\n";

   // Display the number of times tails was facing up.
   cout << "Tails was facing up " << tails << " times.\n";
   return 0;
}