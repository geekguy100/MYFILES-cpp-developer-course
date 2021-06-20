#include <iostream>
#include "BankAccount.h"

using namespace std;

int main()
{
	BankAccount myAccount("Kyle", 120);
	myAccount.deposit(22);
	myAccount.withdraw(142);
	myAccount.withdraw(90);
	myAccount.deposit(250);

	cout << endl;
	BankAccount otherAccount("Steven", -200);
	otherAccount.deposit(-1);

	cout << endl;
	cout << "myAccount.getBalance() = " << myAccount.getBalance() << endl;
	cout << "myAccount.getOwner() = " << myAccount.getOwner() << endl;

	cout << endl;

	cout << "otherAccount.getBalance() = " << otherAccount.getBalance() << endl;
	cout << "otherAccount.getOwner() = " << otherAccount.getOwner() << endl;


	cout << endl << endl;
	system("pause");
	return 0;
}