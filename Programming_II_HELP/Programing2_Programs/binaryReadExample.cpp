// binary read/write example

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x,y,z;
	fstream file;
	file.open("binaryDemo.dat", ios::in|ios::binary);
	if(!file)
	{
		cout << "File failed to open" << endl;
		return 0;
	}
	//read from the file
	file.read(reinterpret_cast<char*>(&x), sizeof(x));
	file.read(reinterpret_cast<char*>(&y), sizeof(y));
	file.read(reinterpret_cast<char*>(&z), sizeof(z));
	file.close();

	cout << "The numbers were: " << x << " " << y << " " << z << endl;

	return 0;
}