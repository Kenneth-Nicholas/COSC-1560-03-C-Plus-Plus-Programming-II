// The switch statement in this program uses the "fall through" feature
// to catch both uppercase and lowercase letters entered by the user.
#include <iostream>
using namespace std;

int main()
{
	char feedGrade;

	cout << "Our dog food is available in three grades:\n";
	cout << "A, B, and C. Which do you want pricing for? ";
	cin  >> feedGrade;

	switch(feedGrade)
	{
		case 'a': //cout << "You entered a small a.\n";
		case 'A': 
			cout << "30 cents per pound.\n";
		    break;
		case 'b':
		case 'B': cout << "20 cents per pound.\n";
			break;
		case 'c':
		case 'C': cout << "15 cents per pound.\n";
			break;
		default : cout << "That is an invalid choice.\n";
	}
	return 0;
}
