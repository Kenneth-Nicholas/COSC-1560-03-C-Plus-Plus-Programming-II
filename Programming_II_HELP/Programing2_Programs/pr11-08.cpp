//This program demonstrates the use of copy constructor.
#include <iostream>
#include <iomanip>
#include "NumberArray2.h"

using namespace std;
void copyFunc(NumberArray);
int main()
{  
  NumberArray first(3, 10.5);
  //Make second a copy of first object.
  NumberArray second = first;

  cout << setprecision(2) << fixed << showpoint;
  cout << "Value stored in first object is ";
  first.print();
  cout << endl << "Value stored in second object is ";
  second.print();
  cout << endl << "Only the value in second object will be changed." << endl;
  //Now change value stored in second object
  second.setValue(20.5);
  cout << "Value stored in first object is ";
  first.print();
  cout << endl << "Value stored in second object is ";
  second.print();
  //copyFunc(first);//// causes error
  //  cout << "Value stored in first object is ";
  //first.print();
  //cout << endl << "Value stored in second object is ";
  //second.print();

  cout << endl;
  return 0;
}
 
  
  
void copyFunc(NumberArray third)
{
 cout << endl << "Value stored in third object is ";
 third.print();
 third.setValue(100.0);
 cout << endl << "Value stored in third object is ";
 third.print();
}



