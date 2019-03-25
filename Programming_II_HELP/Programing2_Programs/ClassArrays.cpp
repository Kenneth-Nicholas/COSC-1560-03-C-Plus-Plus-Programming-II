// Demonstrate arrays of classes
#include <iostream>
#include <string>
using namespace std;

class Temp
{
private:
	int x;
	int y;
	string name;
public:
	Temp(int _x = 0, int _y = 0, string _name = "")
	{
		x = _x;	
		y = _y;
		name = _name;
	}
	void setX(int _x) {x = _x;}
	void setY(int _y) {y = _y;}
	void setName(string _name) {name = _name;}
	int getX() {return x;}
	int getY() {return y;}
	string getName() {return name;}
};
//Temp::Temp(int _x, int _y, string _name)
//{ 
//	x = _x;
//	y = _y;
//	name = _name;
//}

int main()
{
	Temp me(1,2,"Me");
	Temp us[2] = {Temp(5,4,"all"), Temp(3,2,"y\'all")};

	cout << me.getName() << endl << endl;
	for(int i = 0;i < 2; i++)
	{
		cout << us[i].getName() << endl;
	}
	cout << endl;

	us[0].setName("Paul");
	us[1].setName("Fred");

	for(int i = 0;i < 2; i++)
	{
		cout << us[i].getName() << endl;
	}
	cout << endl;

//	method("Some string", "some String" ,numbers);

	return 0;
}

