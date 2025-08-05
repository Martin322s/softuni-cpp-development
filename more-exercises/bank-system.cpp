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
	bool withdraw(double amount)
	{
		if (amount <= balance)
		{
			balance -= amount;
			return true;
		}
		return false;
	}
	double getBalance() const
	{
		return balance;
	}
};

int main()
{
	BankAccount acc(100);
	acc.deposit(50);
	cout << acc.getBalance() << endl;
	acc.withdraw(70);
	cout << acc.getBalance() << endl;
}