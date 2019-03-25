// This program demonsrated sending a two dimensional aray to a function

#include<iostream>
#include <iomanip>
#include <cstring>
using namespace std;


const int NUM_MONTHS = 12, NAME_LENGTH = 4;

void displayMonths(char [][NAME_LENGTH], int,int);

int main()
{
//	const int NUM_MONTHS = 12, NAME_LENGTH = 4;
	char months[NUM_MONTHS][NAME_LENGTH] = 
	{"Jan", "Feb","Mar","Apr","May","Jun",
	  "Jul","Aug","Sep","Oct","Nov","Dec"};

	displayMonths(months, NUM_MONTHS,NAME_LENGTH);
	return 0;
}

void displayMonths(char months [][NAME_LENGTH], int numMonths,int sizeName)
{
	for(int i = 0; i < numMonths; i++)
		cout << months[i] << endl;
}