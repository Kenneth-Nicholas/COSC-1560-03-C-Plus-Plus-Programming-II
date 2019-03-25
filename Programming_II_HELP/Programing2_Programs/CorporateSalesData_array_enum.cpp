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

enum DIVISIONS { East, West, North, South};

void getDivisionData(Division &);
void DisplayDivisionData(Division []);

int main()
{
   // Create structure variables for each division.
  // Make an array of the corporations divisions.
   const int SIZE = 4;
   Division divisions[SIZE];

   // Store the names of the divisions.
   divisions[East].name = "East";
   divisions[West].name = "West";
   divisions[North].name = "North";
   divisions[South].name = "South";

   //Get sales data for each division
   getDivisionData(divisions[East]);
   getDivisionData(divisions[West]);
   getDivisionData(divisions[North]);
   getDivisionData(divisions[South]);
   cout << endl;

   // Display Totals and Averages
   DisplayDivisionData(divisions);
   
   return 0;
}

void getDivisionData(Division & div)
{
	//Get sales data for each division
	cout << "Enter the quarterly sales for the " << div.name << " Divison:\n";
	cout << "\tFirst quarter: ";
	cin >> div.quarter1;
	cout << "\tSecond quarter: ";
	cin >> div.quarter2;
	cout << "\tThird quarter: ";
	cin >> div.quarter3;
	cout << "\tFourth quarter: ";
	cin >> div.quarter4;

	// Calculate the annual sales for the division.
	div.annualSales = div.quarter1 +
		div.quarter2 + div.quarter3 + div.quarter4;

	// Calculate the average sales for the division.
	div.averageQtrSales = div.annualSales / 4.0;

}

void DisplayDivisionData(Division div[])
{   // Display Totals and Averages
	cout << setprecision(2) << fixed << showpoint;
	cout << "Total Annual Sales:\n";
	cout << "\tEast Division: $" << div[East].annualSales << endl;
	cout << "\tWest Division: $" << div[West].annualSales << endl;
	cout << "\tNorth Division: $" << div[North].annualSales << endl;
	cout << "\tSouth Division: $" << div[South].annualSales << endl;
	cout << "Average Quarterly Sales:\n";
	cout << "\tEast Division: $" << div[East].averageQtrSales << endl;
	cout << "\tWest Division: $" << div[West].averageQtrSales << endl;
	cout << "\tNorth Division: $" << div[North].averageQtrSales << endl;
	cout << "\tSouth Division: $" << div[South].averageQtrSales << endl;

}

/*
Results:

Enter the quarterly sales for the East Divison:
First quarter: 111
Second quarter: 222
Third quarter: 333
Fourth quarter: 444
Enter the quarterly sales for the West Divison:
First quarter: 112
Second quarter: 223
Third quarter: 334
Fourth quarter: 445
Enter the quarterly sales for the North Divison:
First quarter: 443
Second quarter: 332
Third quarter: 221
Fourth quarter: 110
Enter the quarterly sales for the South Divison:
First quarter: 123
Second quarter: 234
Third quarter: 345
Fourth quarter: 456

Total Annual Sales:
East Division: $1110.00
West Division: $1114.00
North Division: $1106.00
South Division: $1158.00
Average Quarterly Sales:
East Division: $277.50
West Division: $278.50
North Division: $276.50
South Division: $289.50
Press any key to continue . . .
*/