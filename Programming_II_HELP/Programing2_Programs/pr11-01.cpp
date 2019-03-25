//This program illustrates the this pointer
#include <iostream>
#include "ThisExample.h"
using namespace std;

int main()
{
  Example ob1(10), ob2(20);

  // print addresses of the two objects
  cout << "Addresses of objects are " << &ob1
       << " and " << &ob2 << endl;

  // print addresses and values from within the
  // member function
  ob1.printAddressAndValue();
  ob2.printAddressAndValue();


  ob1.setValue(50);
  ob2.setValue(100);
  ob1.printAddressAndValue();
  ob2.printAddressAndValue();
  return 0;
}


