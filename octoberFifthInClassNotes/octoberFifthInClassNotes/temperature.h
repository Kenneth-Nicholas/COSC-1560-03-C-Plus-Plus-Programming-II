#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>

using namespace std;

class Temperature
{
private:
	double kelvin,
		   celsius,
		   fahrenheit;

public:
	Temperature();												//constructor
	~Temperature();												//destructor
	void setKelvin(double k) { kelvin = k; }
	void setCelsius(double c) { celsius = c; }
	void setFahrenheit(double f){ fahrenheit = f; }
	void calcCelsius();
	double getKelvin(){ return kelvin; }
	double getCelsius(){ return celsius; }
	double getFahrenheit(){ return fahrenheit; }
};

#endif