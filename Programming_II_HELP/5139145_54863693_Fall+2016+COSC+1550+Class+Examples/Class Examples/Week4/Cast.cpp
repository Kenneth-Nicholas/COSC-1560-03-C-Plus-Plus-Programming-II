// demonstrate casts and comments

#include <iostream>
using namespace std;

int main()
{
	int number = 65; 
	cout << number << endl;
	cout << static_cast<char>(number) << endl;
	cout << number << endl;

	char letter = 'a';
	cout << letter << endl;
	cout << static_cast<int>(letter) << endl;
	cout << letter << endl;

	int books = 30,months = 7;
	double booksPerMonth;

	booksPerMonth = books / months /* integer division */;
	cout << "I read " << booksPerMonth << " books per month.\n";
	booksPerMonth = static_cast<double>(books)/ months;
	cout << "I really read " << booksPerMonth << " books per month.\n";
	booksPerMonth = double(books )/ months;
	cout << "I really read " << booksPerMonth << " books per month.\n";

	return 0;
}


/*
65
A
65
a
97
a
I read 4 books per month.
I really read 4.28571 books per month.
Press any key to continue . . .
*/