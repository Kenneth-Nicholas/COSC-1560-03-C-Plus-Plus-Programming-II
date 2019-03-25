// binary read/write example

#include <iostream>
#include <fstream>

using namespace std;
struct Temp
{
	int a;
	int b;
	int c;
};

int main()
{
	Temp x;
	fstream file;
	file.open("binaryDemo.dat", ios::out|ios::binary);
	if(!file)
	{
		cout << "File failed to open" << endl;
		return 0;
	}
	cout << "Please enter 3 integer numbers: ";
	cin >> x.a >> x.b >> x.c;
	//write to the file
	file.write(reinterpret_cast<char*>(&x), sizeof(Temp));
	file.close();

	return 0;
}