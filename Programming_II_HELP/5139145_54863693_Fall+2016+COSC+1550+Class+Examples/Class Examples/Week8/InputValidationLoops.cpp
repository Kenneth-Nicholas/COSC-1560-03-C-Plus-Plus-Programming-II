// COSC 1550
// Counters and loops
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num;
	cout << "Please enter a postive number: ";
	cin >> num;
	while(num < 0)
	{
		cout << "You entered a negative number.\nPlease enter a postive number: ";
		cin >> num;
	}
	cout << "You entered a " << num << endl;
	return 0;
}