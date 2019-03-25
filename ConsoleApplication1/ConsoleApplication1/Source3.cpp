#include <iostream>
using namespace std;

int main()
{
	double* ptr = nullptr;
	int size;
	cout << "How big is the array?:";
	cin >> size;
	ptr = new double[size];
}