// return a pointer from a function

#include <iostream>
using namespace std;

char * getName();

int main()
{
	char *name;
	name = getName();
	cout << name << "  " << *name << endl;
	for(int i = 0; name[i] != 0; i++)
	{
		cout << name[i] << " ";
	}
	cout << endl;
	delete [] name;
	return 0;
}

char* getName()
{
	char * n = new char[81];
	cout << "Please enter your name: ";
	cin.getline(n,81);
	return n;
}