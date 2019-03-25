// This program displays various array initialization schemes.

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const int NUM = 12;
//	int numbers[NUM];
//	int numbers[NUM] = {0};
//	int numbers[NUM] = {};
//	int numbers[NUM] = {0,1,2,3,4,5,6,7};
 	int numbers[] = {0,1,2,3,4,5,6,7};


	for (int num = 0; num < NUM; num++)
	{
		//if(num > 7)
		//	numbers[num] = 11111;  // overwrites memory outside bounds of numbers
		cout << "Number " << setw(2) << num+1 << " is ";
		cout << right << numbers[num] << ".\n";
	}
	numbers[8] = 42;
	numbers[9] = 42;
	numbers[10] = 42;
	numbers[11] = 42;
	numbers[-1] = 42;
	cout << NUM << endl;
////	system("PAUSE");
		for (int num = -1; num < NUM; num++)
	{
		//if(num > 7)
		//	numbers[num] = 11111;  // overwrites memory outside bounds of numbers
		cout << "Number " << setw(2) << num+1 << " is ";
		cout << right << numbers[num] << ".\n";
	}
//	cout << NUM << endl;

	return 0;
}
