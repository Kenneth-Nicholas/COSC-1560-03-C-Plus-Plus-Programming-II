// This program illustrates dynamic allocation
// of storage for C-strings
#include <iostream> 
#include <cstring>
using namespace std;


int main()
{
    char *pname, *z;
    pname = new char[50];          //allocate storage
    cout << "Enter your name: ";
    cin.getline(pname, 50);                  //print name
    cout << "Hello " << pname << endl;
	cout << "Your name is " << strlen(pname) << " characters long.\n";
	//z = pname;
	//while(*pname != 0)
	//{
	//	cout << "Hello " << *pname << "  Your name is " << strlen(pname) << " characters long.\n";
	//	pname++;
	//}
	///*pname = z;
	//delete [] pname*/;
	//delete [] z;
    z = pname;
	while(*z)
	{
		cout << "Hello " << *z << "  Your name is " << strlen(z) << " characters long.\n";
		z++;
	}
	delete [] pname;
	return 0;
}
