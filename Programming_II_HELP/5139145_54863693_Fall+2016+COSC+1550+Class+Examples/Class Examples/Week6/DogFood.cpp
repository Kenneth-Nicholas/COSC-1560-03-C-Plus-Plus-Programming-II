// test if-else statements
//COSC 1550.07
// dogfood.cpp

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
 int main ()
 {
	string dogName;
	double WeightOfDog;
	int bagWeight;
	cout << "What is you dog\'s name? ";
	getline(cin, dogName);

	cout << "How much does " << dogName << " weigh? ";
	cin >> WeightOfDog;

	if(WeightOfDog <= 0)
		cout << "Sorry, we don't have a brand of food for invisible dogs.\n";
	else
	{
//		bagWeight = 8;
		if(WeightOfDog <= 15)
		{
			bagWeight = 8;
			cout << "Eight Pound Bag Suggested.\n";
		}
		else if(WeightOfDog > 15 && WeightOfDog <= 45)
		{
			bagWeight = 20;
			cout << "Twenty Pound Bag Suggested.\n";
		}
		else if(WeightOfDog > 45 && WeightOfDog <= 100)
		{
			bagWeight = 40;
			cout << "Forty Pound Bag Suggested.\n";
		}
		else
		{
			bagWeight = 80;
			cout << "Eighty Pound Bag Suggested.\n";
		}

		cout << endl;
		cout << dogName << " weighs " << WeightOfDog << " pounds and needs " 
			<< bagWeight << " pounds of food per month.\n";
	
	}

	 return 0;
 }