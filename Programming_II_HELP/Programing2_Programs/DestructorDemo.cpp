// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo
{
   public:
      Demo();       // Constructor prototype
      ~Demo();      // Destructor prototype
};

Demo::Demo()        // Constructor function definition
{  cout << "An object has just been defined, so the constructor"
        << " is running.\n";   }

Demo::~Demo()       // Destructor function definition
{  cout << "Now the destructor is running.\n";   }


void myFunction1();
void myFunction2(Demo);
void myFunction3(Demo &);

int main()
{
   Demo demoObj;    // Declare a Demo object;

   cout << "The object now exists, but is about to be destroyed.\n";
	cout << "Calling myFunction1\n";
	myFunction1();

	cout << "Calling myFunction2.  Passing demo by value\n";
	myFunction2(demoObj);
	cout << "Calling myFunction3  Passing demo by reference\n";
	myFunction3(demoObj);

	cout << "Calling myFunction2.  Passing demo by value\n";
	myFunction2(demoObj);
	
	{
		Demo newDemo;
		cout << "Leaving local scope.\n";
	}

   return 0;
}

void myFunction1()
{
	cout << "Entering myFunction1\n";
	Demo d;
	cout << "Leaving myFunction1\n";
}
void myFunction2(Demo d)
{
	cout << "Entering myFunction2 Create local object.\n";
	Demo d2;
	cout << "Leaving myFunction2\n";

}
void myFunction3(Demo & d)
{
	cout << "Entering myFunction3  Create local object\n";
	Demo d3;
	cout << "Leaving myFunction3\n";
}
