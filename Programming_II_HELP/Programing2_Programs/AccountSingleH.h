// File Account.h -- Account class specification file

#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
 private:
   double balance;
   double intRate;
   double interest;
   int transactions;
 
 public:
 
   Account(double irate = 0.045, double bal = 0.0)
   {  balance = bal; 
      intRate = irate; 
      interest = 0; 
	  transactions = 0;
   }
 
   void makeDeposit(double amount)
   {  
	   balance += amount; 
	   transactions++;
   }
 
   bool withdraw(double amount);   // Defined below
 
   double calcInterest()
   {  interest = balance * intRate; 
      balance += interest;
	  return getInterest();
   }
 
   double getBalance()
   {  return balance;
   }
 
   double getInterest()
   {  return interest;
   }
 
   int getTransactions()
   {  return transactions;
   }
};


bool Account::withdraw(double amount)
{
	if (balance < amount)
		return false;   // Not enough in the account
	else
	{
		balance -= amount;
		transactions++;
		return true;
	}
}
#endif