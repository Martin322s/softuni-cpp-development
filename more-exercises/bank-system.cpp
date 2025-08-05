#include <iostream>
using namespace std;

class BankAccount
{
	double balance;

public:
	BankAccount(double initialBalance)
	{
		balance = initialBalance;
	}

	void deposit(double amount)
	{
		balance += amount;
	}
	
};