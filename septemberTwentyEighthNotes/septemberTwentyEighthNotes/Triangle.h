#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Triangle
{
private:
	double height;
	double base;				// 3rd side
	double area;				// derived from height and base
	double perimeter;
	double s1;					// sides
	double s2;

	int a1;						// angles
	int a2;
	int a3;

public:
	Triangle();				 // sets all to 0
	Triangle(int, int, int); // constructor means that you know all 3 angles when you declare it

	void setHeight(double h){ height = h; } // creating function inline
	void setBase(double b){ base = b; }     // same
	void setS1(double s){ s1 = s; }
	void setS2(double s){ s2 = s; }
	void setA1(int a){ a1 = a; }
	void setA2(int a){ a2 = a; }
	void setA3(int a){ a3 = a; }
	void calcArea(Triangle t1);			 // not inline
	void calcPerimeter();		 // 
	bool isObtuse();			 // one angle > 90 degrees
	bool isAcute();				 // one angle < all angles less than 90 degrees
	bool isEqual();				 // equalateral
	bool isScalene();			 // no equal angles and no equal sides
	bool isRight();              // one angle = 90 degrees

	double getHeight(){ return height; }
	double getBase(){ return base; }
	double getS1(){ return s1; }
	double getS2(){ return s2; }
	int getA1(){ return a1; }
	int getA2(){ return a2; }
	int getA3(){ return a3; }
	double getArea(Triangle t1);
	double getPerimeter();

	bool searchArray(Triangle array[], int SIZE, int &loc, double val, Triangle t1);
};
#endif								// closes the ifndef so that resources won't keep checking to see if it's defined or not already	
// won't compile without this statement!