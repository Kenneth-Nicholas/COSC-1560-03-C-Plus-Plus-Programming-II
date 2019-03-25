// This program uses the bubble sort algorithm to sort an 
// array in ascending order.

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
int sortArray(int [],string[], int);
void showArray(int [],string[], int);
void swapInt(int &, int &);
void swapString(string &, string &);

int main()
{
	const int SIZE = 5;
	int tests[SIZE] = {87, 75, 98, 100, 82};
	string names[SIZE] = {"Sam", "Sue", "Dan", "Paula", "Walter"};
	int count;

	cout << "The unsorted values are:\n";
	showArray(tests, names, SIZE);
	count = sortArray(tests, names, SIZE);
	cout << "The sorted values are:\n";
	showArray(tests, names, SIZE);
	cout << "The bubble sort did " << count << " swaps to sort the array.\n";
	return 0;
}

//***********************************************************
// Definition of function sortArray                         *
// This function performs an ascending-order bubble sort on *
// array. The parameter elems holds the number of elements  *
// in the array.                                            *
//***********************************************************

int sortArray(int arr[], string who[], int elems)
{
	int cnt = 0;
	bool swapFlag;

	do
	{	swapFlag = false;
		for (int count = 0; count < (elems - 1); count++)
		{
			//if (who[count] > who[count + 1])  // sort on names - ascending order
			if (arr[count] > arr[count + 1])  // ascending order
//			if (arr[count] < arr[count + 1])  // descending order
			{							//swap function
				swapInt(arr[count], arr[count+1]);
				swapString(who[count], who[count+1]);
				swapFlag = true;
				cnt++;
			}
		}
		showArray(arr,who, elems);
   } while (swapFlag);
	return cnt;
}

//**************************************************************
// Definition of function showArray                            *
// This function displays the contents of arr. The parameter *
// elems holds the number of elements in the array.            *
//**************************************************************

void showArray(int arr[], string who[], int elems)
{
	for (int count = 0; count < elems; count++)
		cout << who [count] << "  " << arr[count] << " ";
	cout << endl;
}


void swapInt(int & a, int & b)
{
	int  temp = a;
	a = b;
	b = temp;
}

void swapString(string & a, string & b)
{
	string  temp = a;
	a = b;
	b = temp;
}