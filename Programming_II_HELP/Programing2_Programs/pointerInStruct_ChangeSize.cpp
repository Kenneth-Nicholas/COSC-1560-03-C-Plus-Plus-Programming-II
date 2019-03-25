// Pointer in struct example 1
// COSC 1560


#include <iostream>
using namespace std;

struct cosc
{
	char name[45];
	int *homework;
};

int * createArray(int);
int * changeArraySize(int*, int, int );

int main()
{
	cosc me;
	//cosc * me;
	//me = new cosc;
	int num, num1;
	cout << "How many homework problems did you turn in?";
	cin >> num;

	me.homework = createArray(num);
	if(me.homework == NULL)
	{
		cout << "No memory available.  Ending program.\n";
		return 1;
	}
	cout << "The homework array is at :" << me.homework << endl;
	for (int i = 0; i < num;i++)
	{
		cout << "Enter homework #" << i+1 << " grade: ";
		cin >> me.homework[i];
	}

	for (int i = 0; i < num;i++)
	{
		cout << "homework #" << i+1 << " grade is: " << me.homework[i] << endl;
	}

	cout << "Change number of homework problems.";
	cin >> num1;

	me.homework = changeArraySize(me.homework, num, num1);
	cout << "The homework array is at :" << me.homework << endl;

	for (int i = 0; i < num1; i++)
	{
		cout << "homework #" << i+1 << " grade is: " << me.homework[i] << endl;
	}

	delete [] me.homework;
	me.homework = NULL;
	//delete me;
	return 0;
}


int * createArray(int size)
{
	return new int [size];
}

int * changeArraySize(int* ptr, int oldSize, int newSize)
{
	int size = oldSize;
	if(newSize < size)
	{
		cout << "\nWarning!!! You are about to lose data...\n\n";
		size = newSize;
	}
	int * temp  = createArray(newSize);

	for(int i = 0; i < size; i++)
	{
		*(temp+i) = ptr[i];
	}

	delete [] ptr;
	ptr = NULL;
	return temp;
}