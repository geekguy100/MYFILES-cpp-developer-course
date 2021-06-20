#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount 
{
public:
	BankAccount(std::string owner);
	BankAccount(std::string owner, int balance);

	void deposit(int amnt);
	void withdraw(int amnt);

	std::string getOwner() const;
	int getBalance() const;


private:
	std::string owner;
	int balance;
	void printTotal();
};


#endif
