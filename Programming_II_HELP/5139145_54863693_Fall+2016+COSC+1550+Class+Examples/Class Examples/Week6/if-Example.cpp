// if_example.cpp
// Paul Biolchini
// COSC 1550
// if statement examples

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
	//int var1 = 6;
	//int var2 = 2;

 //   if(var1 > var2)
	//	cout << "var1 is greater than var2\n";
	//cout << "The relation is " << boolalpha << (var1 > var2) << endl;
	//cout << "After the if statement.\n";

	////int var1 = 0;
	////double var2 = 0.000000000;
	string var1 = "paul";
	string var2 = "Waldo";
	////char var1[10] = "Paul";  // will not evaluate correctly with code below
	////char var2[10] = "Waldo";
	if(var1 > var2)
	{
	    cout << "The relation is " << boolalpha << (var1 > var2) << endl;
		cout << "var1 is greater than var2\n";
	}
	else if( var1 < var2)
	{
	    cout << "The relation is " << boolalpha << (var1 < var2) << endl;
		cout << "var1 is less than var2.\n";
	}
	else
	{
		cout << "var1 equals var2.\n";
	}

	//cout << "After the if statement.\n";
	////if(var1 > var2)
	////	cout << "var1 is greater than var2\n";
	////cout << "After the if statement.\n";


	return 0;
}