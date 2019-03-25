// This program illustrates string arrays.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "Paul";  // c++ string
	char cname[] = "Walt"; // c string
//  char cname[10] = "Walt"; // c string

	cout << name << endl;
	cout << cname << endl;
	cout << endl << endl;
	cout << cname[99] << endl;
cname[99] = 'a';
	int i = 0;
	while(cname[i] != '\0')
	while(i < 100)
	{
		cout << cname[i];//<< endl;
//		cout << cname[i]<< endl;
		i++;
	}
//	cout << endl << endl;
//	for(int i = 0; i < 100; i++)
//		cname[i] = i+32;
//	cout << endl << endl;
//	i = 0;
//	while(cname[i] != '\0')
//	while(i < 100)
//	{
//		cout << cname[i];//<< endl;
////		cout << cname[i]<< endl;
//		i++;
//	}

	i = 0;
	while(name[i] != 0)
	{
		cout << name[i]<< endl;
		i++;
	}
	cout << endl << endl;

	return 0;
}
