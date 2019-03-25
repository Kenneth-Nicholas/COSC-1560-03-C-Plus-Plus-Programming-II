// Chapter 7 - Assignment 8, Heading
// This program implements and tests a Heading class that stores
// heading information and produces headings in different formats.

#include <iostream>
#include "heading.h"
using namespace std;


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
