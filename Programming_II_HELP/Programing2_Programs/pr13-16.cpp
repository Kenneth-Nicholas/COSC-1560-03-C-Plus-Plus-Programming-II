//This program uses the write and read functions.
#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
	fstream file("nums.dat", ios::out | ios::binary);
	int buffer[10] = {1,  2,  3,  4,  5, 6,  7,  8,  9,  10};
	int inBuf[10];
	cout << "Now writing the data to the file.\n";
    
	file.write(reinterpret_cast<char *>(&buffer), sizeof(buffer));

	file.close();
	file.open("nums.dat", ios::in | ios::binary);  // Reopen the file.
	cout << "Now reading the data back into memory.\n";

	file.read(reinterpret_cast<char *>(&inBuf), sizeof(inBuf));

	for (int count = 0; count < 10; count++)
		cout << inBuf[count] << " ";
	file.close();
	cout << endl;
	return 0;
}



