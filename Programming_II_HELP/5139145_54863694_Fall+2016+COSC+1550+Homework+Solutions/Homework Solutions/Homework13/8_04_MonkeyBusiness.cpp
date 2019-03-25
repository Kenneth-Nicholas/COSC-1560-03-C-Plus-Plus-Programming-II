	// Chapter 8 - Assignment 4, Monkey Business
// This program stores data on monkey food consumption in a
// 2-dimensional array. This array is passed to functions that 
// find total, least, and greatest food consumption. 

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int NUM_MONKEYS = 3;    
const int NUM_DAYS = 5;
// Function prototypes

void   getData(double[][NUM_DAYS]);
double findGroupTotal(double[][NUM_DAYS]);
double findGroupAverage(double[][NUM_DAYS]);
double findOneTotal (double[][NUM_DAYS], int);
double findLeastTotal(double[][NUM_DAYS], int &);
double findGreatestTotal(double[][NUM_DAYS], int &);

int main()
{
	double food[NUM_MONKEYS][NUM_DAYS];
	int monkey = 0; 
	double amount;
   
   getData(food); 
   cout << fixed << setprecision(1);
   cout << "\n\nAverage amount of food eaten per day by the "
        << "entire family of monkeys = "
        << findGroupAverage(food) << " pounds. \n\n";
      
   amount = findLeastTotal(food, monkey); 
   cout << "Least amount of food eaten during the week by any one monkey = "
        << amount << " pounds by monkey " << monkey+1 <<". \n\n"; 
   amount = findGreatestTotal(food, monkey);     
   cout << "Greatest amount of food eaten during the week by any one monkey = "
        << amount << " pounds by monkey " << monkey+1 <<". \n"; 
    
   return 0;
}

/*****************************************************
 *                   getData                         *
 * Fills the array with data.                        *
 *****************************************************/
void   getData(double food[][NUM_DAYS])
{
   for (int monkey = 0; monkey < NUM_MONKEYS; monkey++)
   {  cout << "\nEnter pounds of food eaten by monkey #"
           << (monkey+1) << " on \n";
      for (int day = 0; day < NUM_DAYS; day++)
      {  cout << "day " << (day+1) << ": ";
         cin  >> food[monkey][day];
         while (food[monkey][day] < 0.0)
         {  cout << "food eaten cannot be less than 0. Please re-enter\n";
            cout << "day " << (day+1) << ": ";
            cin  >> food[monkey][day];
         }
      }
   }
}

/*****************************************************
 *                  findGroupTotal                   *
 * Returns the total of all values in the array.     *
 *****************************************************/
double findGroupTotal(double food[][NUM_DAYS])
{
  double total = 0.0;
     
   for (int monkey = 0; monkey < NUM_MONKEYS; monkey++)
   {   for (int day = 0; day < NUM_DAYS; day++)
         total += food[monkey][day];
   }
   return total;
}


/*****************************************************
 *                    findOneTotal                   *
 * Finds and returns the amount of food eaten during *
 * the week by one particular monkey. It does this by*
 * totaling and returning the values in the one row  *
 * of the array representing the desired monkey.     *
 *****************************************************/
double findOneTotal (double food[][NUM_DAYS], int thisMonkey)
{
   double total = 0.0;
   
   for (int day = 0; day < NUM_DAYS; day++)
      total += food[thisMonkey][day];
   
   return total;
}
   
/*****************************************************
 *                   findLeastTotal                  *
 * Finds and returns the smallest row total.         *
 *****************************************************/  
double findLeastTotal (double food[][NUM_DAYS], int & monk)
{
   double thisMonkeyTotal;
   double leastTotal;
   
   
    // Set leastTotal to the first monkey's total food consumption
   leastTotal= findOneTotal(food, 0);
   monk = 0;
   
   // Check if any other monkey consumed less food
   for (int thisMonkey = 1; thisMonkey < NUM_MONKEYS; thisMonkey++)
   {  
		thisMonkeyTotal = findOneTotal(food, thisMonkey);
		if (thisMonkeyTotal < leastTotal)
		{
			leastTotal = thisMonkeyTotal;
			monk = thisMonkey;
		}
   }
   return leastTotal;
}

/*****************************************************
 *                findGreatestTotal                  *
 * Finds and returns the largest row total.          *
 *****************************************************/  
double findGreatestTotal (double food[][NUM_DAYS], int & monk)
{
   double thisMonkeyTotal;
   double greatestTotal;
   
   // Set greatestTotal to the first monkey's total food consumption
   greatestTotal= findOneTotal(food, 0);
   monk = 0;
   
   // Check if any other monkey consumed more food
   for (int thisMonkey = 1; thisMonkey < NUM_MONKEYS; thisMonkey++)
   {  
	   thisMonkeyTotal = findOneTotal(food, thisMonkey);
		if (thisMonkeyTotal > greatestTotal)
		{
			greatestTotal = thisMonkeyTotal;
	  		monk = thisMonkey;
		}
   }
   return greatestTotal;
}

double findGroupAverage(double food[][NUM_DAYS])
{
	return findGroupTotal(food) / NUM_DAYS;
}
