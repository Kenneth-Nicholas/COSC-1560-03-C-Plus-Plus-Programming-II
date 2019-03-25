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

void getDivisionData(Division [], int );
void DisplayDivisionData(const Division [], int);

int main()
{
   // Create structure variables for each division.
  // Make an array of the corporations divisions.
   const int SIZE = 4;
   Division divisions[SIZE];

   // Store the names of the divisions.
   divisions[0].name = "East";
   divisions[1].name = "West";
   divisions[2].name = "North";
   divisions[3].name = "South";

   //Get sales data for each division
   getDivisionData(divisions, SIZE);
   cout << endl;

   // Display Totals and Averages
   DisplayDivisionData(divisions, SIZE);
   
   return 0;
}

void getDivisionData(Division div[], int Size)
{
	//Get sales data for each division
	
	for (int i = 0; i < Size; i++)
	{
		cout << "Enter the quarterly sales for the " << div[i].name << " Divison:\n";
		cout << "\tFirst quarter: ";
		cin >> div[i].quarter1;
		cout << "\tSecond quarter: ";
		cin >> div[i].quarter2;
		cout << "\tThird quarter: ";
		cin >> div[i].quarter3;
		cout << "\tFourth quarter: ";
		cin >> div[i].quarter4;

		// Calculate the annual sales for the division.
		div[i].annualSales = div[i].quarter1 +
			div[i].quarter2 + div[i].quarter3 + div[i].quarter4;

		// Calculate the average sales for the division.
		div[i].averageQtrSales = div[i].annualSales / 4.0;
	}
}

void DisplayDivisionData(const Division div[], int Size)
{   // Display Totals and Averages
	cout << setprecision(2) << fixed << showpoint;
	cout << "Total Annual Sales:\n";
	for (int i = 0; i < Size; i++)
	{
		cout << "\t" << div[i].name << " Division: $" << div[i].annualSales << endl;
	}
	cout << "Average Quarterly Sales:\n";
	for (int i = 0; i < Size; i++)
	{
		cout << "\t" << div[i].name << " Division: $" << div[i].averageQtrSales << endl;
	}

}

//// Results
//// Enter the quarterly sales for the East Divison :
//// First quarter : 111
//// Second quarter : 222
//// Third quarter : 333
//// Fourth quarter : 444
//// Enter the quarterly sales for the West Divison :
//// First quarter : 112
//// Second quarter : 223
//// Third quarter : 334
//// Fourth quarter : 445
//// Enter the quarterly sales for the North Divison :
//// First quarter : 443
//// Second quarter : 332
//// Third quarter : 221
//// Fourth quarter : 110
//// Enter the quarterly sales for the South Divison :
//// First quarter : 123
//// Second quarter : 234
//// Third quarter : 345
//// Fourth quarter : 456
////
//// Total Annual Sales :
//// East Division : $1110.00
//// West Division : $1114.00
//// North Division : $1106.00
//// South Division : $1158.00
//// Average Quarterly Sales :
//// East Division : $277.50
//// West Division : $278.50
//// North Division : $276.50
//// South Division : $289.50
//// Press any key to continue . . .