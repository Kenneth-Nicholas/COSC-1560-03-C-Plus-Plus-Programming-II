// This program illustrates string arrays.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "Paul";  // c++ string
	char cname[] = "Walt"; // c string

	cout << name << endl;
	cout << cname << endl;
	cout << endl << endl;

	int i = 0;
	while(cname[i] != '\0')
	{
		cout << cname[i]<< endl;
		i++;
	}
	cout << endl << endl;

	i = 0;
	while(name[i] != 0)
	{
		cout << name[i]<< endl;
		i++;
	}
	cout << endl << endl;

	i = 0;
	while(name[i])
	{
		cout << name[i]<< endl;
		i++;
	}
	cout << endl << endl;
	return 0;
}
