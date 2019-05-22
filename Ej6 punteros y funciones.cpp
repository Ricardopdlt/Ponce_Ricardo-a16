//Ex6 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

double dollarExchange(double *dollarExchangeRate, double *amount)
{
	//this process receives dollars and returns soles
	return *amount * *dollarExchangeRate;
}

double solExchange(double *solExchangeRate, double *amount)
{
	// this process receives soles and returns dollars
	return *amount / *solExchangeRate;
}

int main()
{
	int n1;

	int option;

	double amount1;
	double *realAmount;
	realAmount = &amount1;

	double realdollarExchangeRate = 3.33;
	double *realRate;
	realRate = &realdollarExchangeRate;

	while (option != 3)
	{
		cout << "************************************************************************************************************************ \n";
		cout << endl;
		cout << "What do you want to do? \n";
		cout << "[1] Exchange dollars to soles \n";
		cout << "[2] Exchange soles to dollars \n";
		cout << "[3] If you don't want to do anything, just exit \n";
		cout << "Make your choice: ";
		cin >> option;


		switch (option)
		{
		case 1:
			do
			{
				cout << endl;
				cout << "Enter the amount you want to exchange: ";
				cin >> amount1;
				cout << endl;

				if (amount1 > 0)
				{
					cout << "The exchange is : S/" << dollarExchange(realRate, realAmount) << endl;
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
				cin >> amount1;
				cout << endl;


				if (amount1> 0)
				{
					cout << "The exchange is : $" << solExchange(realRate, realAmount) << endl;
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