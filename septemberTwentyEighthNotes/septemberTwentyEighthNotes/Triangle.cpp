#include "Triangle.h"

Triangle::Triangle()
{
	height = 0.0;
	base = 0.0;
	area = 0.0;
	perimeter = 0.0;
	s1 = 0.0;
	s2 = 0.0;
	a1 = 0;
	a2 = 0;
	a3 = 0;
}

bool searchArray(Triangle array[], int SIZE, int &loc, double val, Triangle t1)
{
	bool result = false;

	for (int i = 0; i < SIZE; i++)
	{
		if (val == array[i].getArea(t1))
		{
			result = true;
			loc = i;
			break;
		}
	}
	if (result == false)
	{
		loc = -1;
	}
	return result;
}

bool Triangle::isObtuse()
{
	bool result = false;

	if ((a1 > 90) || (a2 > 90) || (a3 > 90))
	{
		result = true;
	}
	return result;
}

bool Triangle::isRight()
{
	bool result = false;

	if ((a1 == 90) || (a2 == 90) || (a3 == 90))
	{
		result = true;
	}
	return result;
}

bool Triangle::isAcute()
{
	bool result = false;

	if ((a1 < 90) && (a2 < 90) && (a3 < 90))
	{
		result = true;
	}
	return result;
}

bool Triangle::isScalene()
{
	bool result = false;

	if ((a1 != a2) && (a1 != a3) && (a2 != a3))
	{
		result = true;
	}
	return result;
}

bool Triangle::isEqual()
{
	bool result = false;

	if ((s1 == s2) && (s2 == base))
	{
		result = true;
	}

	return result;
}

double Triangle::getArea(Triangle t1)				// can't getArea/calculate area if base and height not entered bc a = 1/2 * b * h
{
	double a;

	if (area != 0)
	{
		a = area;
	}
	else
	{
		if ((height != 0) && (base != 0))
		{
			calcArea(t1);
		}
		else
		{
			area = 0;
		}
	}
	return a;
}

double calcArea(Triangle t1)
{
	double area = t1.getArea(t1);

	return area;
}
