//Ex6 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

double dollarExchange(double dollarExchangeRate, double amount)
{
	//this process receives dollars and returns soles
	return amount * dollarExchangeRate;
}

double solExchange(double solExchangeRate, double amount)
{
	// this process receives soles and returns dollars
	return amount / solExchangeRate;
}
int main()
{
	int n1;

	int option;
	double realAmount;

	double realdollarExchangeRate = 3.33;

	while (option != 3)
	{
		cout << "************************************************************************************************************************ \n";
		cout << endl;
		cout << "What do you want to do? \n";
		cout << "Exchange dollars to soles [1] or exchange soles to dollars [2], but if you don't want to do anything, just select [3]: ";
		cin >> option;


		switch (option)
		{
		case 1:
			do
			{
				cout << endl;
				cout << "Enter the amount you want to exchange: ";
				cin >> realAmount;
				cout << endl;

				if (realAmount > 0)
				{
					cout << "The exchange is : S/" << dollarExchange(realdollarExchangeRate, realAmount) << endl;
					cout << endl;

					n1 = 3;
				}
				else
				{
					cout << "========================================= \n";
					cout << "ERROR  \n";
					cout << "You need to enter a number bigger than 0 \n";
					cout << "========================================= \n";
					n1 = 1;
				}
			} while (n1 == 1);

			break;

		case 2:

			do
			{
				cout << endl;
				cout << "Enter the amount you want to exchange: ";
				cin >> realAmount;
				cout << endl;


				if (realAmount > 0)
				{
					cout << "The exchange is : $" << solExchange(realdollarExchangeRate, realAmount) << endl;
					cout << endl;

					n1 = 3;
				}
				else
				{
					cout << "========================================= \n";
					cout << "ERROR  \n";
					cout << "You need to enter a number bigger than 0 \n";
					cout << "========================================= \n";
					n1 = 2;
				}

			} while (n1 == 2);

			break;
		}



	}

	cout << endl;
	cout << "Ok. Goodbye!" << endl;
	cout << "....Press any key to exit....";

	_getch();
	return 0;

}