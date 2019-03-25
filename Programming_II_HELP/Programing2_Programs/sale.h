// Contents of sale.h 
#ifndef SALE_H
#define SALE_H

// Sale class declaration
class Sale
{
private:
	double taxRate;
	double total;
	void calcSale(double cost)
	{	total = cost + (cost * taxRate); }

public:
	// Constructor with 2 parameters handles sales with tax
  	Sale(double rate, double cost)  
   {  taxRate = rate; calcSale(cost); }

	// Constructor with 1 parameter handles tax-exempt sales
	Sale(double cost)           
   {  taxRate = 0; total = cost; }

	// Default constructor
	Sale()
	{  taxRate = 0.0; total = 0.0; }

	void setTaxRate(double rate)
	{
		taxRate = rate; calcSale(total);
	}

	double getTotal() 
   {  return total; }
};

#endif

