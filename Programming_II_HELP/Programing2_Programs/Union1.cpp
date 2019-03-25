// Union example

#include <iostream>
#include <string>
using namespace std;


union Numbers
{
	char numType;
	int one;
	float two;
};

int main ()
{
//   char numType;
   Numbers nums;
   cout << "Size of Numbers is: " << sizeof(Numbers) << endl;
   cout << "Do you want to enter an integer or a float (i or f): ";
   cin >> nums.numType;
   if(nums.numType == 'i' || nums.numType == 'I')
   {
		cout << "Enter an integer. ";
		cin >> nums.one;
		cout << endl << nums.one << endl;
   }
   else
   {
		cout << "Enter a floating point number: ";
		cin >> nums.two;
		cout << endl << nums.two << endl;
   }
	return 0;
}
