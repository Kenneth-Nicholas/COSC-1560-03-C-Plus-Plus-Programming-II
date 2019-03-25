// COSC 1560
// Paul Biolchini
// Homework 10 Assignment 1
// Instance Counter

#include <iostream>
using namespace std;

class Instance
{
private:
	static int count;
public:
	Instance();
	static void printInstances();
};

int Instance::count = 0;

Instance ::	Instance(){
	count++;
	cout << "Creating Instance: " << count << endl;
}

void Instance ::printInstances()
{
	cout << "There are " << count << " instances of the class.\n";
}

int main ()
{
	Instance::printInstances();
	Instance obj;
	obj.printInstances();
	int numInstances;
	do 
	{
		cout << "Enter a positive number: ";
		cin >> numInstances;
		if(numInstances < 0)
			cout << "The number must be positive.  Try again. ";
	} while(numInstances < 0);
	Instance *num= new Instance[numInstances];
	Instance::printInstances();
	delete [] num;
	num = 0;
	Instance::printInstances();
	obj.printInstances();
	return 0;
}