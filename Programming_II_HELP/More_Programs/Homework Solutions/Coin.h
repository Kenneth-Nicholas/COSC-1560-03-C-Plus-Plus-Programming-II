// Specification file for the Coin class
#ifndef COIN_H
#define COIN_H
#include <string>
using namespace std;

class Coin
{
private:
   string sideUp;   // The side facing up

public:
   Coin();              // Constructor
   void toss();         // Simulates tossing of the coin
   string getSideUp();  // Returns the side facing up
};
#endif