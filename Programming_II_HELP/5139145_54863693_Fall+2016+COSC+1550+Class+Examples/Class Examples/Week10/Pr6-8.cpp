// This program demonstrates a function with three parameters.
#include <iostream>
using namespace std;

// Function Prototype
void showSum(int, int, int);
int getData();

int main()
{
   int value1, 
	   value2, 
	   value3;
   
   // Get three integers.
   cout << "Enter three integers and I will display ";
   cout << "their sum.\n";
   
   value1 = getData(); 
   value2 = getData(); 
   value3 = getData();
   
   // Call showSum passing three arguments.
   showSum(value1, value2, value3); 
   return 0;
}

//************************************************************
// Definition of function showSum.                           *
// It uses three integer parameters. Their sum is displayed. *
//************************************************************

void showSum(int num1, int num2, int num3)
{
	cout << "The sum of the three numbers is: "
	<< (num1 + num2 + num3) << endl;
}

int getData()
{
	static int count = 0;
	int num;
	cout << "Enter value " << ++count << ": ";
	cin >> num;
	return num;
}