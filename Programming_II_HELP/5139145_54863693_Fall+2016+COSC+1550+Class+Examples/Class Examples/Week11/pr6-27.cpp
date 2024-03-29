// This program reads 7 daily high temperatures from a file 
// and displays them. It demonstrates how to pass a file to a 
// function. The function argument, which is a file stream object, 
// must be passed by reference.

#include <iostream>
#include <fstream>
using namespace std;

void readFile(ifstream &);

int main()
{
	ifstream dataIn;

	dataIn.open("weather.dat");
   if (dataIn.fail())
	   cout << "Error opening data file.\n";
	else
	{  readFile(dataIn);
	   dataIn.close();
	}
	return 0;
}

//*******************************************************
// Definition of readFile                               *
// This function reads and displays the contents of the *
// input file whose file stream object is passed to it. *
//*******************************************************
void readFile(ifstream & someFile)
{ 
	int temperature;

	while (someFile >> temperature)
		cout << temperature << "  ";
	cout << endl;
}
