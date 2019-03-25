// Pointer in struct example 3
// COSC 1560


#include <iostream>
using namespace std;

struct cosc
{
	char name[45];
	int *homework;
};
int main()
{
	cosc *me;

	int num, numMe;
	cout << "How many Me\'s are there? ";
	cin >> numMe;

	me = new cosc[numMe];

	cout << "How many homework problems did you turn in? ";
	cin >> num;
	for (int a = 0; a < numMe; a++)
	{
		cout << "Me #" << a+1 << endl;

		me[a].homework = new int [num];

		for (int i = 0; i < num;i++)
		{
			cout << "Enter homework #" << i+1 << " grade: ";
			cin >> me[a].homework[i];
		}

		for (int i = 0; i < num;i++)
		{
			cout << "homework #" << i+1 << " grade is: " << me[a].homework[i] << endl;
		}
	}

	for (int a = 0; a < numMe; a++)
	{
		delete [] me[a].homework;
		me[a].homework = NULL;
	}
	delete [] me;
	me = NULL;

	return 0;
}