// binary read/write example

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x,y,z;
	fstream file;
	file.open("binaryDemo.dat", ios::out|ios::binary);
	if(!file)
	{
		cout << "File failed to open" << endl;
		return 0;
	}
	cout << "Please enter 3 integer numbers: ";
	cin >> x >> y >> z;
	//write to the file
	file.write(reinterpret_cast<char*>(&x), sizeof(x));
	file.write(reinterpret_cast<char*>(&y), sizeof(y));
	file.write(reinterpret_cast<char*>(&z), sizeof(z));
	file.close();

	return 0;
}