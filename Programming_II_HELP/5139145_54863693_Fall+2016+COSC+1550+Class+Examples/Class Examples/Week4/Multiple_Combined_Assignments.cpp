// This program tracks the inventory of two widget stores. 
// It illustrates the use of multiple and combined assignment. 

#include <iostream>
using namespace std;

int main()
{
	int begInv, sold, store1, store2;
	
	cout << "One week ago, 2 new widget stores opened\n";
	cout << "at the same time with the same beginning\n";
	cout << "inventory. What was the beginning inventory? ";
	cin  >> begInv;
	store1 = store2 = begInv;
	
	cout << "How many widgets has store 1 sold? ";
	cin  >> sold;
	//store1 = store1 - sold; // same as below
	store1 -= sold; // Subtract sold from store1 - same as above

	cout << "How many widgets has store 2 sold? ";
	cin  >> sold;
	store2 -= sold; // Subtract sold from store2

	cout << "\nThe current inventory of each store:\n";
	cout << "Store 1: " << store1 << endl;
	cout << "Store 2: " << store2 << endl;
     
	return 0; 
}
