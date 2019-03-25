// COSC 1550 
// Setw example
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int num1 = 7, num2 = 77, num3 = 777, num4 = 7777;
	int num5 = 77777, num6 = 777, num7 = 7, num8 = 77;
	int num9 = 77, num10 = 7777777, num11 = 7, num12 = 7777;
	char a = 'A', b = 'B', c = 'C', d = 'D';
	string aa = "aaa", bb = "bbb", cc = "ccc", dd = "ddd";
	//cout << left;
	//cout << setw(8) << num1 << "," << setw(8) << num2 << "," << setw(8) << num3 << ","<< setw(8) << num4 << endl;
	//cout << setw(8) << num5 << "," << setw(8) << num6 << "," << setw(8) << num7 << ","<< setw(8) << num8 << endl;
	//cout << setw(8) << num9 << "," << setw(8) << num10 << "," << setw(8) << num11 << ","<< setw(8) << num12 << endl;
	const int SIZE = 8;
	cout << setw(SIZE) << num1 << "," << setw(SIZE) << num2 << "," << setw(SIZE) << num3 << ","<< setw(SIZE) << num4 << endl;
	cout << setw(SIZE) << num5 << "," << setw(SIZE) << num6 << "," << setw(SIZE) << num7 << ","<< setw(SIZE) << num8 << endl;
	cout << setw(SIZE) << num9 << "," << setw(SIZE) << num10 << "," << setw(SIZE) << num11 << ","<< setw(SIZE) << num12 << endl;
	cout << left;
	cout << setw(SIZE) << a << "," << setw(SIZE) << b << "," << setw(SIZE) << c << ","<< setw(SIZE) << d << endl;
	cout << right;
	cout << setw(SIZE) << num1 << "," << setw(SIZE) << num2 << "," << setw(SIZE) << num3 << ","<< setw(SIZE) << num4 << endl;
	cout << left;
	cout << setw(SIZE) << aa << "," << setw(SIZE) << aa << "," << setw(SIZE) << cc << ","<< setw(SIZE) << dd << endl;

	return 0;
}