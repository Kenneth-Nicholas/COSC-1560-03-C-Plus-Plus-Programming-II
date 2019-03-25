#include <iostream>
using namespace std;

int main()
{
	int numbers[8] = { 2, 4, 6, 8, 10, 12, 14, 16 }; // pretend address of 2 = 1010, address of 4 = 1014, address of 6 = 1018, address of 8 = 1022, etc.
	int* ptr = nullptr;

	ptr = numbers;
	cout << numbers << endl;				// address 1010
	cout << &numbers[0] << endl;			// address 1010
	cout << &numbers << endl;				// address 1010

	for (int i = 0; i < 8; i++)				// address 1010, 1014, 1018, 1022, 1026, 1030, 1034, 1038
	{
		cout << &numbers[i] << " ";
	}
	cout << endl;

	cout << *(numbers) << endl;				// 2
	cout << *numbers << endl;				// 2
	cout << *(numbers + 1) << endl;			// 4
	cout << *numbers + 1 << endl;			// 3
	cout << *(numbers + 4) << endl;			// 10
	cout << *numbers + 4 << endl;			// 6

	cout << endl;

	cout << *ptr++ << endl;					// post increment, dereferences first, then outputs the value, then increments the pointer. Displays 2, changes pointer to 1014
	cout << ptr << endl;					// 1014 output

	cout << *ptr << endl;					// displays 4
	cout << ptr << endl;					// displays 1014

	cout << *++ptr << endl;					// displays 6
	cout << ptr << endl;					// displays 1018

	cout << *(ptr += 5) << endl;			// displays 16
	cout << ptr << endl;					// displays 1038

	return 0;
}