// setprecision fixed example
// COSC 1550
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
//	int inum1 = 7777;
//	double dnum1 = 77.77;
//	string sName = "Webster University";
//	
//	//cout << left;
//	cout << "(" << setw(25) << inum1 << ")" << endl;
//	cout << "(" << setw(25) << dnum1 << ")" << endl;
//	cout << left << "(" << setw(25) << sName << ")" << endl;
//
//	double dnum2 = 123123123.45678, dnum3 = 0.0000045678912;
//	cout << right <<setprecision(5) << fixed;
//	cout << setw(25) << dnum2 << ", " << setw(25) << dnum3<< endl;
////	cout << setprecision(25);
//	cout << setw(25) << dnum2 << ", " << setw(25) << dnum3<< endl;
//	cout << setprecision(5);
//	cout << setw(25) << dnum2 << ", " << setw(25) << dnum3<< endl;
	//cout << setprecision(5);
	//cout << setw(25) << dnum2 << ", " << setw(25) << dnum3<< endl;
	//cout << setprecision(2);
	//cout << setw(25) << dnum2 << ", " << setw(25) << dnum3<< endl;
	//cout << setprecision(5) << fixed;
	//cout << setw(25) << dnum2 << ", " << setw(25) << dnum3<< endl;
	//cout << setprecision(2);
	//cout << setw(25) << dnum2 << ", " << setw(25) << dnum3<< endl;
	
	//cout << left;
	//cout << setw(25) << dnum2 << ", " << setw(25) << right <<  dnum3<< endl;



	double dnum4 = 55, dnum5 = 5;
	int inum2 = -7, inum3 = 77;
	
//	cout << left;
	cout << setprecision(2) << fixed << showpoint << showpos;
	cout << left << setw(9) << dnum4 << ", " << right << setw(9) << dnum5<< endl;
//	cout << right;
	cout << left << setw(9) << inum3 << ", " << right << setw(9) << inum2<< endl;


	return 0;
}