#ifndef JUNK_H
#define JUNK_H

using namespace std;

class Junk
{
	private:
		int x,						// data types
			y;
	public:
		Junk();						// constructor
		void setX(int);				// function prototypes
		void setY(int);
		int getX();
		int getY();
};
#endif								// closes the ifndef so that resources won't keep checking to see if it's defined or not already	
									// won't compile without this statement!