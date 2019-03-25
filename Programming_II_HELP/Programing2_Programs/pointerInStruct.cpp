// Pointer in struct example 1
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
	cosc me;
	int num;
	cout << "How many homework problems did you turn in?";
	cin >> num;

	me.homework = new int [num];

	for (int i = 0; i < num;i++)
	{
		cout << "Enter homework #" << i+1 << " grade: ";
		cin >> me.homework[i];
	}

	for (int i = 0; i < num;i++)
	{
		cout << "homework #" << i+1 << " grade is: " << me.homework[i] << endl;
	}

	delete [] me.homework;
	me.homework = NULL;
	return 0;
}