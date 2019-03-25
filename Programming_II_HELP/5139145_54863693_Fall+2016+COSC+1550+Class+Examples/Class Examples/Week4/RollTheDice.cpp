// Show how to roll a die
// COSC 1550
//

#include <iostream>
#include <cmath>
//#include <cstdlib>
using namespace std;

int main()
{
	int roll, seed;
	cout << "Enter the seed value: ";
	cin >> seed;
	srand(seed);
	roll = 1 + rand() % 6;
	cout << "Rolling the dice: \n";
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;
	roll = 1 + rand() % 6;
	cout << roll << endl;

	return 0;
}