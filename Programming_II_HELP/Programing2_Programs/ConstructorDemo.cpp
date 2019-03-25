// This program demonstrates when a constructor executes.

#include <iostream>
using namespace std;

class Demo
{
public:
	Demo(); // Constructor
	~Demo();
};

Demo::Demo()
{
	cout << "Now the default constructor is running.\n";
}

Demo::~Demo()
{
	cout << "The destructor is running\n";
}


void myDemo(Demo &);
void firstDemo(Demo);
Demo secondDemo();
int check();

int main()
{
	cout << "This is displayed before the object is created.\n";
	Demo demoObj;   // Define the Demo object.
	Demo theDemo;
	cout << "This is displayed after the object is created.\n";
	cout << "Call MyDemo and pass a Demo variable by reference.\n";
	myDemo(demoObj);
	firstDemo(demoObj);
	theDemo = secondDemo();
	cout << "This is displayed in main after the call to myDemo returns.\n";
	int x = check();
	return 0;
}

void myDemo(Demo &demo)
{
	cout << "In myDemo.\n";
	cout << "This is displayed in myDemo before the object is created.\n";
	Demo theDemo;   // Define the Demo object.
	cout << "This is displayed  in myDemo after the object is created.\n";

}
void firstDemo(Demo demo)
{
	cout << "In 1stDemo.\n";
	cout << "This is displayed in 1stDemo before the object is created.\n";
	Demo theDemo;   // Define the Demo object.
	cout << "This is displayed  in 1stDemo after the object is created.\n";

}

Demo secondDemo()
{
	Demo demo;
	cout << "In 2ndDemo.\n";
	cout << "This is displayed in 2ndDemo before the object is created.\n";
	Demo theDemo;   // Define the Demo object.
	cout << "This is displayed  in 2ndDemo after the object is created.\n";
	return demo;
}

int check()
{
	int var = 5;
	return var;
}