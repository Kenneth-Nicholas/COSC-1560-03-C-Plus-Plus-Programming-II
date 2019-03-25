// This program displays various array initialization schemes.

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	const int NUM = 12;
	int numbers[] = {0,1,2,3,4,5,6,7};

	//numbers[10] = 99;

	for (int num = 0; num < NUM; num++)
	{
		//if(num > 7)
		//	numbers[num] = 11111;  // overwrites memory outside bounds of numbers
		cout << "Number " << setw(2) << num+1 << " is ";
		cout << right << numbers[num] << ".\n";
	}
	return 0;
}
