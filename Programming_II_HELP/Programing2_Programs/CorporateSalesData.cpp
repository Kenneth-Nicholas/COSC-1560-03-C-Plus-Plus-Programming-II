// Chapter 11, Programming Challenge 3: Corporate Sales Data
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Declaration of the Division structure.
struct Division
{
   string name;            // Division name
   double quarter1;        // First quarter sales
   double quarter2;        // Second quarter sales
   double quarter3;        // Third quarter sales
   double quarter4;        // Fourth quarter sales
   double annualSales;     // Annual sales
   double averageQtrSales; // Average quarterly sales
};

int main()
{
   // Create structure variables for each division.
   Division east, west, north, south;

   // Store the names of the divisions.
   east.name = "East";
   west.name = "West";
   north.name = "North";
   south.name = "South";

   //Get sales data for East division
   cout << "Enter the quarterly sales for the East Divison:\n";
   cout << "\tFirst quarter: ";
   cin >> east.quarter1;
   cout << "\tSecond quarter: ";
   cin >> east.quarter2;
   cout << "\tThird quarter: ";
   cin >> east.quarter3;
   cout << "\tFourth quarter: ";
   cin >> east.quarter4;
   
   // Calculate the annual sales for the division.
   east.annualSales = east.quarter1 + 
            east.quarter2 + east.quarter3 + east.quarter4;
   
   // Calculate the average sales for the division.
   east.averageQtrSales = east.annualSales / 4.0;

   //Get sales data for West division
   cout << "Enter the quarterly sales for the West Divison:\n";
   cout << "\tFirst quarter: ";
   cin >> west.quarter1;
   cout << "\tsecond quarter: ";
   cin >> west.quarter2;
   cout << "\tThird quarter: ";
   cin >> west.quarter3;
   cout << "\tFourth quarter: ";
   cin >> west.quarter4;
   
   // Calculate the annual sales for the division.
   west.annualSales = west.quarter1 + west.quarter2 + 
        west.quarter3 + west.quarter4;

   // Calculate the average sales for the division.
   west.averageQtrSales = west.annualSales / 4;

   //Get sales data for North division
   cout << "Enter the quarterly sales for the North Divison:\n";
   cout << "\tFirst quarter: ";
   cin >> north.quarter1;
   cout << "\tsecond quarter: ";
   cin >> north.quarter2;
   cout << "\tThird quarter: ";
   cin >> north.quarter3;
   cout << "\tFourth quarter: ";
   cin >> north.quarter4;

   // Calculate the annual sales for the division.
   north.annualSales = north.quarter1 + north.quarter2 + 
       north.quarter3 + north.quarter4;

   // Calculate the average sales for the division.
   north.averageQtrSales = north.annualSales / 4;

   //Get sales data for South division
   cout << "Enter the quarterly sales for the South Divison:\n";
   cout << "\tFirst quarter: ";
   cin >> south.quarter1;
   cout << "\tsecond quarter: ";
   cin >> south.quarter2;
   cout << "\tThird quarter: ";
   cin >> south.quarter3;
   cout << "\tFourth quarter: ";
   cin >> south.quarter4;

   // Calculate the annual sales for the division.
   south.annualSales = south.quarter1 + south.quarter2 + 
         south.quarter3 + south.quarter4;

   // Calculate the average sales for the division.
   south.averageQtrSales = south.annualSales / 4;

   // Display Totals and Averages
   cout << setprecision(2) << fixed << showpoint;
   cout << "Total Annual Sales:\n";
   cout << "\tEast Division: $" << east.annualSales << endl;
   cout << "\tWest Division: $" << west.annualSales << endl;
   cout << "\tNorth Division: $" << north.annualSales << endl;
   cout << "\tSouth Division: $" << south.annualSales << endl;
   cout << "Average Quarterly Sales:\n";
   cout << "\tEast Division: $" << east.averageQtrSales << endl;
   cout << "\tWest Division: $" << west.averageQtrSales << endl;
   cout << "\tNorth Division: $" << north.averageQtrSales << endl;
   cout << "\tSouth Division: $" << south.averageQtrSales << endl;
   
   return 0;
}