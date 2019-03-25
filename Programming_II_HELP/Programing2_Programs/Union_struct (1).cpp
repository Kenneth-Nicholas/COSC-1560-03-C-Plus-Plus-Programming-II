// Union example

#include <iostream>
#include <string>
using namespace std;

struct Hourly
{
	int hours;
	float rate;
};
struct Salaried
{
	double salary;
};

union Employee
{
	char empType;
	Hourly hourly;
	Salaried salaried;
};

int main ()
{
   
   Employee worker;

   cout << "Do you want to enter an hourly or a salaried employee (h or s): ";
   cin >> worker.empType;
   if( worker.empType == 'h' ||  worker.empType == 'H')
   {
	   cout << "Enter the hours worked: ";
	   cin >> worker.hourly.hours;
	   cout << "Enter the hourly rate: ";
	   cin >> worker.hourly.rate;

		cout << "Your pay is " << worker.hourly.hours * worker.hourly.rate << endl;
   }
   else
   {
		cout << "Enter Your weekly salary: ";
		cin >> worker.salaried.salary;
		cout << "Your pay is " << worker.salaried.salary << endl;
   }	return 0;
}
