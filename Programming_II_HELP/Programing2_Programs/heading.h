// Chapter 7 - Assignment 8, Header.h
// This program implements and tests a Heading class that stores
// heading information and produces headings in different formats.
#ifndef HEADING_H
#define HEADING_H


#include <string>
using namespace std;

class Heading
{
private:
	string company;        // Holds the company name
   string report;         // Holds the report name
public:
	// Constructor 
	Heading() {company = "ABC Industries"; report = "Report";}
   Heading(string c, string r);
  
	// Set functions
   void setCompany(string c);
	void setReport(string r);
   
   // Heading display functions
	void oneLine();
	void boxed();
};

#endif