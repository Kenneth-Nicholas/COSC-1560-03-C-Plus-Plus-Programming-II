#include <iostream>
using namespace std;

int main()
{
	double* ptr = nullptr;
	double num = 5.3;
	ptr = &num;
	ptr = new double;			// not redefinition, just gives it a different memory address
	*ptr = num;
	*ptr += 10;
	ptr = &num;					// causes memory leak, prior to this, should do delete ptr; then ptr = &num; small memory leak of 4 or 8 bytes.



	return 0;
}