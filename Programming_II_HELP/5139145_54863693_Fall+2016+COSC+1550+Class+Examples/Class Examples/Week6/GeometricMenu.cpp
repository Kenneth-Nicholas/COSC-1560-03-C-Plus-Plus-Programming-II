// test if-else statements
//COSC 1550.07
// geometricMEnu.cpp

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
 int main ()
 {
	int choice;
	//double area,length,width,radius;

	cout << "Geometric Menu\n";
	cout << "----------------\n";
	cout << "1) Calculate the area of a square.\n";
	cout << "2) Calculate the area of a rectangle.\n";
	cout << "3) Calculate the area of a triangle.\n";
	cout << "4) Calculate the area of a circle.\n";
	cout << "5) Quit.\n";
	cout << "\nEnter your choice: ";
	cin >> choice;

	if(choice < 1 || choice > 5)
		cout << choice << " is not a valid selection!\n";
	else
	{
		cout << "\nYou selected a " << choice << ".\n";
		if(choice == 1)
		{
			cout << "Calculate the area of a square.\n";
		}
		else if(choice == 2)
		{
			cout << "Calculate the area of a rectangle.\n";
		}
		else if(choice == 3)
		{
			cout << "Calculate the area of a triangle.\n";
		}
		else if(choice == 4)
		{
			cout << "Calculate the area of a circle.\n";
		}
		else
		{
			cout << "Quitting.\n\n";
		}

	}
	 return 0;
 }