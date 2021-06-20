#include "BankAccount.h"

#include <iostream>

BankAccount::BankAccount(std::string owner)
{
	this->owner = owner;
	this->balance = 0;

	std::cout << "Bank account created for " << this->owner << " with a starting balance of $" << this->balance << "." << std::endl;
}

BankAccount::BankAccount(std::string owner, int balance)
{
	this->owner = owner;
	this->balance = 0;
	if (balance < 0)
		std::cout << this->owner << ", you cannot create an account with a negative balance!" << std::endl;
	else
		this->balance = balance;

	std::cout << "Bank account created for " << this->owner << " with a starting balance of $" << this->balance << "." << std::endl;
}

void BankAccount::deposit(int amnt)
{
	if (amnt <= 0)
	{
		std::cout << this->owner << ", you cannot deposit an amount of 0 or less!" << std::endl;
		return;
	}

	this->balance += amnt;
	std::cout << this->owner << " deposits $" << amnt << "." << std::endl;
	printTotal();
}

void BankAccount::withdraw(int amnt)
{
	if (amnt <= 0)
	{
		std::cout << this->owner << ", you cannot withdraw an amount of 0 or less!" << std::endl;
		return;
	}
	else if ((this->balance - amnt) < 0)
	{
		std::cout << this->owner << ", you cannot withdraw $" << amnt << " or else you will be in debt!" << std::endl;
		return;
	}

	this->balance -= amnt;
	std::cout << this->owner << " withdraws $" << amnt << "." << std::endl;
	printTotal();
}

std::string BankAccount::getOwner() const
{
	return this->owner;
}

int BankAccount::getBalance() const
{
	return this->balance;
}

void BankAccount::printTotal()
{
	std::cout << this->owner << " has a total of $" << this->balance << "." << std::endl;
}
