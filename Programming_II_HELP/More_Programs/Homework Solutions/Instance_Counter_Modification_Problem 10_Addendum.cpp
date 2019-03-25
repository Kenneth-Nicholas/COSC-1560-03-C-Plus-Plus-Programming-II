// COSC 1560
// Paul Biolchini
// Homework 10 Assignment 2
// Instance Counter Modification

#include <iostream>
using namespace std;

class Instance
{
private:
	static int count;
	int anyNumber;
	int instanceNumber;
public:
	Instance();
	Instance(Instance &);
	Instance(int anyNumber);
	~Instance();
	void displayInstance();
};

int Instance::count = 0;

void Instance::displayInstance()
{
	cout << "There are " << count << " instances of this class and this is instance number = " << instanceNumber << endl;
}

Instance ::	Instance(){
	anyNumber = 0;
	count++;
	instanceNumber = count;
	cout << "Creating instance " << count << " the class.\n";
}

Instance ::	Instance(int anyNumber){
	this->anyNumber = anyNumber;
	count++;
	instanceNumber = count;
	cout << "Creating instance " << count << " the class.\n";
}

Instance ::	Instance(Instance & right){
	anyNumber = right.anyNumber;
	count++;
	instanceNumber = right.count;
	cout << "Creating instance " << count << " the class.\n";
}

Instance ::	~Instance(){
	count--;
	cout << "There are now " << count << " instances of the class remaining.\n";
}


void createInstances();
void createInstances(Instance);
void createByRefInstance(Instance &);

int main ()
{
	Instance obj(2), temp1;
	obj.displayInstance();
	cout << "After creation of obj.\n";
	int numInstances;
	do 
	{
		cout << "Enter a positive number: ";
		cin >> numInstances;
		if(numInstances < 0)
			cout << "The number must be positive.  Try again. ";
	} while(numInstances < 0);

	cout << "Before creating " << numInstances << " num(s).\n";
	Instance *num = new Instance[numInstances];
	cout << "After creation of " << numInstances << " num(s).\n";

	for (int i = 0; i<numInstances; i++)
		num[i].displayInstance();

	cout << "Before deleting " << numInstances << " num(s).\n";
	delete [] num;
	num = 0;
	cout << "After deletion of " << numInstances << " num(s).\n";

	cout << "Calling function.\n";

	createInstances();
	createInstances(obj);
	createByRefInstance(obj);
	cout << "After return from functions.\n";

	cout << "Main is ending.\n";
	return 0;
}

void createInstances()
{
	cout << "Inside function.\n";
	Instance temp(5);
	temp.displayInstance();
	cout << "Leaving function.\n";
}

void createInstances(Instance tmp)
{
	cout << "Inside function.\n";
	tmp.displayInstance();
	Instance temp(5);
	temp.displayInstance();
	cout << "Leaving function.\n";
}

void createByRefInstance(Instance & tmp)
{
	cout << "Inside function.\n";
	tmp.displayInstance();
	Instance temp(5);
	temp.displayInstance();
	cout << "Leaving function.\n";
}
/*
Creating instance 1 the class.
Creating instance 2 the class.
There are 2 instances of this class and this is instance number = 1
After creation of obj.
Enter a positive number: 10
Before creating 10 num(s).
Creating instance 3 the class.
Creating instance 4 the class.
Creating instance 5 the class.
Creating instance 6 the class.
Creating instance 7 the class.
Creating instance 8 the class.
Creating instance 9 the class.
Creating instance 10 the class.
Creating instance 11 the class.
Creating instance 12 the class.
After creation of 10 num(s).
There are 12 instances of this class and this is instance number = 3
There are 12 instances of this class and this is instance number = 4
There are 12 instances of this class and this is instance number = 5
There are 12 instances of this class and this is instance number = 6
There are 12 instances of this class and this is instance number = 7
There are 12 instances of this class and this is instance number = 8
There are 12 instances of this class and this is instance number = 9
There are 12 instances of this class and this is instance number = 10
There are 12 instances of this class and this is instance number = 11
There are 12 instances of this class and this is instance number = 12
Before deleting 10 num(s).
There are now 11 instances of the class remaining.
There are now 10 instances of the class remaining.
There are now 9 instances of the class remaining.
There are now 8 instances of the class remaining.
There are now 7 instances of the class remaining.
There are now 6 instances of the class remaining.
There are now 5 instances of the class remaining.
There are now 4 instances of the class remaining.
There are now 3 instances of the class remaining.
There are now 2 instances of the class remaining.
After deletion of 10 num(s).
Calling function.
Inside function.
Creating instance 3 the class.
There are 3 instances of this class and this is instance number = 3
Leaving function.
There are now 2 instances of the class remaining.
Creating instance 3 the class.
Inside function.
There are 3 instances of this class and this is instance number = 3
Creating instance 4 the class.
There are 4 instances of this class and this is instance number = 4
Leaving function.
There are now 3 instances of the class remaining.
There are now 2 instances of the class remaining.
Inside function.
There are 2 instances of this class and this is instance number = 1
Creating instance 3 the class.
There are 3 instances of this class and this is instance number = 3
Leaving function.
There are now 2 instances of the class remaining.
After return from functions.
Main is ending.
There are now 1 instances of the class remaining.
There are now 0 instances of the class remaining.
Press any key to continue . . .
*/