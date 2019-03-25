// Pointer in struct example 2
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
	cosc me[5];
	int num;
	//cout << "How many homework problems did you turn in?";
	//cin >> num;

	for (int a = 0; a < 5; a++)
	{
    	cout << "How many homework problems did you turn in?";
	    cin >> num;
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

	for (int a = 0; a < 5; a++)
	{
		delete [] me[a].homework;
		me[a].homework = NULL;
	}


	return 0;
}