// demonstrate casts and comments

#include <iostream>
using namespace std;

int main()
{

// this is a single line comment
/*
this
is
a
multiple
line
comment 
*/
	int number = 65;  // this is a single line comment
	cout << number << endl;
	cout << static_cast<char>(number) << endl;
	cout << number << endl;

	char letter = 'a';
	cout << letter << endl;
	cout << static_cast<int>(letter) << endl;
	cout << letter << endl;

	int books = 30,
		months = 7;
	double booksPerMonth;
	booksPerMonth = books / months /* a comment here*/;
	cout << "I read " << booksPerMonth << " books per month.\n";
	booksPerMonth = static_cast<double>(books) / months;
//	booksPerMonth = static_cast<double>(books / months);
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