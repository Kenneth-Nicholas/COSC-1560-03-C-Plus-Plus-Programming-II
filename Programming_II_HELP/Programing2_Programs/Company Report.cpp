// Chapter 7 - Assignment 8, Heading
// This program implements and tests a Heading class that stores
// heading information and produces headings in different formats.

#include <iostream>
#include <string>
using namespace std;

class Heading
{
private:
	string company;        // Holds the company name
   string report;         // Holds the report name
public:
	// Constructor 
   Heading(string c, string r);
  
	// Set functions
   void setCompany(string c);
	void setReport(string r);
   
   // Heading display functions
	void oneLine();
	void boxed();
};

/*******************************************************
 *                    Heading                          *
 * Heading class constructor                           *
 * Uses default values if arguments are not passed to  *
 * the function.                                       *
 *******************************************************/
Heading::Heading(string c = "ABC Industries", string r = "Report")
{
	company = c;
   report = r;
}

/*******************************************************
 *                   setCompany                        *
 * Sets company name to the string passed in.          *
 *******************************************************/
void Heading::setCompany(string c)
{  
	company = c;
}

/*******************************************************
 *                   setReport                         *
 * Sets report name to the string passed in.           *
 *******************************************************/
void Heading::setReport(string r)
{  
	report = r;
}

/*******************************************************
 *                      oneLine                        *
 * Prints a one line heading.                          *
 *******************************************************/
void Heading::oneLine()
{
   int printLength = company.length() + 1 + report.length();
   int leadSpaces = (80 - printLength) / 2;
   
   for (int pos = 1; pos <= leadSpaces; pos++)
      cout << ' ';        // Print leading spaces to center the string
   cout << company << " " << report << endl << endl;
}

/*******************************************************
 *                        boxed                        *
 * Prints a two line boxed heading.                    *
 *******************************************************/
void Heading::boxed()
{
   int coLeadSpaces  = (80 - company.length()) / 2;
   int rptLeadSpaces = (80 - report.length()) / 2;
   
   cout << "                    "
        << "****************************************\n";
        
   for (int pos = 1; pos <= coLeadSpaces; pos++)   // Center the string
      cout << ' ';         
   cout << company << endl;                        // Print company name
   
   for (int pos = 1; pos <= rptLeadSpaces; pos++)  // Center the string
      cout << ' ';  
   cout << report  << endl;                        // Print report name
   
   cout << "                    "
        << "****************************************\n\n";
}

//*********************************************************

int main()
{
	Heading hdg;                    // Create a Heading object using defaults
   hdg.oneLine();                  // Display heading in one line format
    
   hdg.setCompany("Joe's Bakery"); // Call functions to set values
   hdg.setReport("Inventory");
	hdg.boxed();                    // Display revised heading in boxed format
   
	                                // Create a second Heading object with
                                   //   values passed to the constructor
   Heading hdg2("Fred's Flea Market", "Sales");    
	hdg2.boxed();                   // Display heading in boxed format

	return 0;
}
