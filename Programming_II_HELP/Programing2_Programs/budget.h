#ifndef BUDGET_H
#define BUDGET_H

// Budget class declaration
class Budget
{
private:
	static double corpBudget;
	double divBudget;
public:
	Budget() { divBudget = 0; }
	void addBudget(double b)
		{ divBudget += b; corpBudget += divBudget; }
	double getDivBudget() { return divBudget; }
	double getCorpBudget() { return corpBudget; }
};

#endif
