#include "temperature.h"

Temperature::Temperature()					//constructor
{
	kelvin = celsius = fahrenheit = 0;
}

Temperature::~Temperature()					//destructor
{
	kelvin = celsius = fahrenheit = 0.0;
}

void Temperature::calcCelsius()
{
	celsius = (fahrenheit - 32) / 1.8;
}