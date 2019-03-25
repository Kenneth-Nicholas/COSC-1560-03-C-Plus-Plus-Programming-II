// Chapter 5 -
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
   int number = 1, count = 0;
   while (number <= 100)
   {  
		while(count < 10 && number <= 100)
		{
			// Print the character corresponding to code
			cout << setw(4) << number << ",";
      
			// Go to the next code
			number++;
			count++;
		}
		count = 0;
		cout << endl;
   }
	return 0;
}
