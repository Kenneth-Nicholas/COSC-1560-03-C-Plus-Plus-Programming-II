// Chapter 5 - Assignment 6, Hotel Occupancy
// This program calculates the occupancy rate for a hotel.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numFloors,            // number of hotel floors
		 numRooms,             // number of rooms on a given floor
		 occupied,             // number of occupied rooms on the floor
		 empty,                // number of empty rooms on the floor
		 totalRooms = 0,       // total rooms in the hotel
		 totalOccupied = 0,    // total number of occupied rooms
		 totalEmpty = 0;       // total number of empty rooms
	double occupancyRate;     // % of rooms that are occupied

	// Input and validate number of floors
	do
	{
		cout << "How many floors does the hotel have? "; 
		cin >> numFloors;
		if (numFloors < 1)
			cout << "The hotel must have at least one floor.\n";
		else if (numFloors > 20)
			cout << "The hotel has only 20 floors.\n";
	}
	while (numFloors < 1 || numFloors > 20);
		
	// Get room count and occupancy information for each floor
	for (int count = 1; count <= numFloors; count++)
	{
		if (count == 13)
     		continue;		  // skip thirteenth floor
		
		cout << "\nHow many rooms are on floor " << count << "? "; 
		cin >> numRooms;										
		while (numRooms < 10)		
		{  cout << "Please enter 10 or more: ";
			cin  >> numRooms;
		}
      
		cout << "How many of those rooms are occupied? "; 
		cin  >> occupied;
		while (occupied > numRooms || occupied < 0)		
		{  
			if (occupied < 0)
				cout << "The number of occupied rooms cannot be less than 0\n";
			else 
				cout << "The number of occupied rooms cannot be greater than"
				<< " the number of rooms on the floor.\n";
			cout << "Please enter the number of occupied rooms: ";
			cin  >> occupied;
		}
      
		empty = numRooms - occupied;
		totalRooms += numRooms;	
		totalOccupied += occupied; 
   		totalEmpty += empty; 
	}
	// Display results
	cout << "\n\nThe hotel has " << numFloors << " floors.\n";
	cout << "\n\nThe hotel has a total of " << totalRooms << " rooms.\n";
	cout << totalOccupied << " are occupied.\n";
	cout << totalEmpty << " are unoccupied.\n";
	occupancyRate = static_cast<double>(totalOccupied) / totalRooms;	
	cout << fixed << showpoint << setprecision(1);
	cout << "The occupancy rate is " << occupancyRate * 100 << "%"<< endl;

	return 0;
}
