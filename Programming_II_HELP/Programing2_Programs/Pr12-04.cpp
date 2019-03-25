// This program illustrates dynamic allocation
// of storage for C-strings
#include <iostream> 
using namespace std;

int main()
{
    char *pname;

    pname = new char[50];          //allocate storage
    cout << "Enter your name: ";
    cin >> pname;                  //print name
    cout << "Hello " << pname << "  " << *pname << endl;
    cout <<  pname << " is stored at " << int(pname) << endl;
	delete [] pname;
	pname = 0;
    return 0;
} 
