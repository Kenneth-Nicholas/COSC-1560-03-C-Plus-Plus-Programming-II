// COSC 1550
// Week 2 Class Examples
// Addition and subtraction and more

#include <iostream>

using namespace std;

int main()
{
	// add 62 and 99
	int firstNumber = 62;
	int secondNumber = 99;
	double number01 = 62.00;
	double number02 = 99.00;
	int sum, difference, product, remainder, quotient;
	double realQuotient, realProduct;

	sum = firstNumber + secondNumber;
	difference = firstNumber - secondNumber;
	product = firstNumber * secondNumber;
	quotient = firstNumber / secondNumber;
	realQuotient = number01 / number02;
	remainder = firstNumber % secondNumber;

	cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum << endl;
	cout << "The difference between " << firstNumber << " and " << secondNumber << " is " << difference << endl;

	difference = secondNumber - firstNumber;
	cout << "The difference between " << secondNumber << " and " << firstNumber << " is " << difference << endl;

	cout << "The product of " << firstNumber << " and " << secondNumber << " is " << product << endl;
	cout << "The quotient of " << firstNumber << " and " << secondNumber << " is " << quotient << " with a remainder of " << remainder << endl;

	quotient = secondNumber / firstNumber;
	remainder = secondNumber % firstNumber;
	cout << "The quotient of " << secondNumber << " and " << firstNumber << " is " << quotient << " with a remainder of " << remainder << endl;
	cout << "The quotient of " << number01 << ". and " << number02 << ". is " << realQuotient << endl;

	number01 = 6200.00;
	number02 = 9900.00;
    realProduct = number01 * number02;
	cout << "The product of " << number01 << ". and " << number02 << ". is " << realProduct << endl;

	firstNumber = 6200;
	secondNumber = 9900;
	product = firstNumber * secondNumber;
	cout << "The product of " << firstNumber << " and " << secondNumber << " is " << product << endl;

	return 0;
}