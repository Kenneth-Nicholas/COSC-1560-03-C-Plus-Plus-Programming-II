// This program illustrates string literals.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     cout << "Bailey" << endl;
     cout << "Bailey"  << " " << int("Bailey") << " " << hex << int("Bailey") << endl;
     cout << "The next thing you see is my location in memory:"  << " " << int("Bailey") << " " << hex << int("Bailey") << endl;
     return 0;	
}
