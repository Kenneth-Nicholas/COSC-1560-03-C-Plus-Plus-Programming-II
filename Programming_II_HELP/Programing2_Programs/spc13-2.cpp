// Chapter 13, Programming Challenge 2: Employee Class
#include <iostream>
#include <string>
using namespace std;

// Employee Class Declaration

class Employee
{
private:
   string name;        // Employee's name
   int idNumber;       // ID number
   string department;  // Department name
   string position;    // Employee's position
   
public:
   // Constructors
   Employee(string, int, string, string);
   Employee(string, int);
   Employee();

   // Mutators
   void setName(string n)
      { name = n; }
      
   void setIdNumber(int i)
      { idNumber = i; }
      
   void setDepartment(string d)
      { department = d; }
      
   void setPosition(string p)
      { position = p; }
      
   // Accessors
   string getName()
      { return name; }
      
   int getIdNumber()
      { return idNumber; }

   string getDepartment()
      { return department; }
      
   string getPosition()
      { return position; }
};

// Constructor #1
Employee::Employee(string n, int i, string d, string p)
{
   name = n;
   idNumber = i;
   department = d;
   position = p;
}

// Constructor #2
Employee::Employee(string n, int i)
{
   name = n;
   idNumber = i;
   department = "";
   position = "";
}

// Constructor #3, default constructor
Employee::Employee()
{
   name = "";
   idNumber = 0;
   department = "";
   position = "";
}

// Function prototype
void displayEmployee(Employee);

// Driver program to demonstrate the class
int main()
{
   // Create an Employee object to test constructor #1.
   Employee susan("Susan Meyers", 47899, "Accounting", "Vice President");
   
   // Create an Employee object to test constructor #2.
   Employee mark("Mark Jones", 39119);
   mark.setDepartment("IT");
   mark.setPosition("Programmer");

   // Create an Employee object to test constructor #3.
   Employee joy;
   joy.setName("Joy Rogers");
   joy.setIdNumber(81774);
   joy.setDepartment("Manufacturing");
   joy.setPosition("Engineer");
   
   // Display each employee's data.
   displayEmployee(susan);
   displayEmployee(mark);
   displayEmployee(joy);
   
   return 0;
}

//**************************************************
// The displayEmployee function displays the data  *
// in the Employee object passed as an argument.   *
//**************************************************

void displayEmployee(Employee e)
{
   cout << "Name: " << e.getName() << endl;
   cout << "ID Number: " << e.getIdNumber() << endl;
   cout << "Department: " << e.getDepartment() << endl;
   cout << "Position: " << e.getPosition() << endl << endl;
}