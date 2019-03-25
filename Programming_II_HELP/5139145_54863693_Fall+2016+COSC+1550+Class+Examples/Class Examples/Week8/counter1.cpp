// COSC 1550
// Counters and loops
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ctr = 0;
//	while(ctr < 10)
//	while(ctr++ < 10)
	while(++ctr <= 10)
	{
//		ctr++;
		cout << setw(3) << ctr << "   " << setw(5) << ctr*ctr << endl;
//		ctr++;
	}
	return 0;
}