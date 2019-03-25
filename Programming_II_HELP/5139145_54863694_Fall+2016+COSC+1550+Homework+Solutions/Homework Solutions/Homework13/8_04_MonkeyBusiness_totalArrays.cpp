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
void findFoodTotals (double[], double[][NUM_DAYS]);
double findLeastTotal(double[], int &);
double findGreatestTotal(double[], int &);

int main()
{
	double food[NUM_MONKEYS][NUM_DAYS];
	double totals[NUM_MONKEYS] = { 0 };
	int monkey = 0; 
	double amount;
   
   getData(food); 
   cout << fixed << setprecision(1);
   cout << "\n\nAverage amount of food eaten per day by the "
        << "entire family of monkeys = "
        << findGroupAverage(food) << " pounds. \n\n";
   findFoodTotals(totals, food);
   amount = findLeastTotal(totals, monkey); 
   cout << "Least amount of food eaten during the week by any one monkey = "
        << amount << " pounds by monkey " << monkey+1 <<". \n\n"; 
   amount = findGreatestTotal(totals, monkey);     
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
 *                    findFoodTotals                   *
 * Finds and returns the amount of food eaten during *
 * the week by one particular monkey. It does this by*
 * totaling and returning the values in the one row  *
 * of the array representing the desired monkey.     *
 *****************************************************/
void findFoodTotals(double total[], double food[][NUM_DAYS])
{
   
	for (int monkey = 0; monkey < NUM_MONKEYS; monkey++)
	   for (int day = 0; day < NUM_DAYS; day++)
		   total[monkey] += food[monkey][day];
   

}
   
/*****************************************************
 *                   findLeastTotal                  *
 * Finds and returns the smallest row total.         *
 *****************************************************/  
double findLeastTotal (double total[], int & monk)
{
   double leastTotal;
   
   // Set leastTotal to the first monkey's total food consumption
   leastTotal= total[0];
   monk = 0;
   
   // Check if any other monkey consumed less food
   for (int Monkey = 1; Monkey < NUM_MONKEYS; Monkey++)
   {  
		if (total[Monkey] < leastTotal)
		{
			leastTotal = total[Monkey];
			monk = Monkey;
		}
   }
   return leastTotal;
}

/*****************************************************
 *                findGreatestTotal                  *
 * Finds and returns the largest row total.          *
 *****************************************************/  
double findGreatestTotal (double total[], int & monk)
{
   double greatestTotal;
   
   // Set greatestTotal to the first monkey's total food consumption
   greatestTotal = total[0];
   monk = 0;
   
   // Check if any other monkey consumed more food
   for (int Monkey = 1; Monkey < NUM_MONKEYS; Monkey++)
   {  
		if (total[Monkey] > greatestTotal)
		{
			greatestTotal = total[Monkey];
	  		monk = Monkey;
		}
   }
   return greatestTotal;
}

double findGroupAverage(double food[][NUM_DAYS])
{
	return findGroupTotal(food) / NUM_DAYS;
}
