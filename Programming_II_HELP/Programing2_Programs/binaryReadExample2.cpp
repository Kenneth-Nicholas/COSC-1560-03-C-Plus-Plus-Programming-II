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
	file.open("binaryDemo.dat", ios::in|ios::binary);
	if(!file)
	{
		cout << "File failed to open" << endl;
		return 0;
	}
	//read from the file
	file.read(reinterpret_cast<char*>(&x), sizeof(x));
	file.close();
	cout << "The numbers were: " << x.a << " " << x.b << " " << x.c << endl;

	return 0;
}