#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char *p="pinpinpin";
	int total=0;
	while ( (p=strstr(p,"pin")) != NULL )
	{
		total++;
		p++;
	}
	cout << total << endl; // prints 3 as it should
	system("pause");
}