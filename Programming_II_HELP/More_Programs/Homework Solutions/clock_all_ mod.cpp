// Clock Program
// COSC 1560    
// Paul Biolchini

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Clock
{
private:
	int seconds;
	int minutes;
	int hours;
	int maxTime;
	string itos(int);				// helper function used to convert an int to a string
	void incrMin();
	void incrHr();
	bool setSeconds(int);
	bool setMinutes(int);
	bool setHours(int);
//	void test() {set24HourTime();}

public:
	bool startTime(int, int, int, int&);
//	void test() {set24HourTime();}
	void set24HourTime() {maxTime = 24;}
	string displayTime();
	void incrSec();
	Clock() {hours = minutes = seconds = 0; maxTime = 12;}
};

bool Clock::startTime(int h, int m, int s, int & errFlag)
{
	bool result = false;
	errFlag = 0;
	if(!setHours(h))
		errFlag = 1;
	else if (!setMinutes(m))
		errFlag = 2;
	else if (!setSeconds(s))
		errFlag = 3;
	if (errFlag == 0)
		result = true;
	return result;
}

bool Clock::setHours(int h)
{
	bool result = false;
	if (h >= 0 && h < maxTime)
	{
		hours = h;
		result = true;
	}
	return result;
}

bool Clock::setMinutes(int m)
{
	bool result = false;
	if (m >= 0 && m < 60)
	{
		minutes = m;
		result = true;
	}
	return result;
}

bool Clock::setSeconds(int s)
{
	bool result = false;
	if (s >= 0 && s < 60)
	{
		seconds = s;
		result = true;
	}
	return result;
}

void Clock::incrHr()
{
	hours++;
	if (hours >= maxTime)
		hours = 0;
}

void Clock::incrMin()
{
	minutes++;
	if(minutes >= 60)
	{
		minutes = 0;
		incrHr();
	}
}

void Clock::incrSec()
{
	seconds++;
	if (seconds >= 60)
	{
		seconds = 0;
		incrMin();
	}
}
string Clock::displayTime()  // returns a string containing the time
{
	string sho;
	if(hours < 10)
	{
		sho.assign("0");
	}
	sho.append(itos(hours));
	sho += ":";
	if (minutes < 10)
	{
		sho.append("0");
	}
	sho.append(itos(minutes));
	sho += ":";
	if (seconds < 10)
	{
		sho.append("0");
	}
	sho.append(itos(seconds));
	return sho;
};

/*******************************************************
*                   itos                               *
* helper function used to convert an int to a string   *
* From Rob Long 19 September 2005                      *
*******************************************************/

string Clock::itos(int i)
{
	stringstream toString;
	toString << i;
	return toString.str();
}

int main()
{
	Clock timer;
	int timeType;
	int hr, min, sec, errorFlag, numSeconds;
	cout << "Do you want to view 12 or 24 hr time? ";
	cin >> timeType;
	while (timeType != 12 && timeType != 24)
	{
		cout << "Please enter a 12 or a 24: ";
		cin >> timeType;
	}
	if (timeType == 24)
		timer.set24HourTime();
	cout << "Enter the start time (hr, min,sec): ";
	cin >> hr >> min >> sec;
	while (!timer.startTime(hr,min,sec, errorFlag))
	{
		switch(errorFlag)
		{
		case 1:
			cout << "Enter the correct hours: ";
			cin >> hr;
			break;
		case 2:
			cout << "Enter the correct minutes: ";
			cin >> min;
			break;
		case 3:
			cout << "Enter the correct seconds: ";
			cin >> sec;
			break;
		}
	}
	cout << "The start time is " << timer.displayTime()<< endl << endl;


	cout << "Enter the number of seconds to run: ";
	cin >> numSeconds;
	for (int i = 0; i < numSeconds; i++)
		timer.incrSec();

	cout << "The time is now " << timer.displayTime()<< endl << endl;

	
	return 0;
}
