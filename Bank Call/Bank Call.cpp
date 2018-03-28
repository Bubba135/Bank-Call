// Bank Call.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void safeViewAccountBalanceTransaction(int accountBalanceOne, int accountBalanceTwo);
void hackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo);

int main()
{
	//Set initial account balances
	int terroristsAccountBalance = 2100000;
	int joesCoffeeShopAccountBalance = 33;
	//Display initial account balances to user
	cout << "Original values\n";
	cout << "terrorists Account Balances: " << terroristsAccountBalance << "\n";
	cout << "joe's Account balances: " << joesCoffeeShopAccountBalance << "\n\n";
	//Check Account Balances here for the first time using the normal function
	cout << "Let's view our account balances by calling the normal Transaction()\n";
	safeViewAccountBalanceTransaction(terroristsAccountBalance, joesCoffeeShopAccountBalance);
	cout << "terrorists Account Balances: " << terroristsAccountBalance << "\n";
	cout << "Joe's Account balances: " << joesCoffeeShopAccountBalance << "\n\n";
	//Check Account Balances here using the hack function

    return 0;
}

