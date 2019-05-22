//Ex15 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

float Combinatorial(int *n, int *k)
{
	float factorialNK = 1;
	float factorialK = 1;
	float factorialN = 1;

	for (int i = 1; i <= *k; i++)
	{
		factorialK = factorialK * i;

	}

	for (int i = 1; i <= *n - *k; i++)
	{
		factorialNK = factorialNK * i;

	}

	for (int i = 1; i <= *n ; i++)
	{
		factorialN = factorialN * i;

	}

	float combinatorial = factorialN / (factorialK * factorialNK);

	return combinatorial;

}

int main()
{
	int n1;

	int n;
	int *realN;
	realN = &n;

	int k;
	int *realK;
	realK = &k;

	cout << "Combinatorial: N!/(N-K)! * K! \n";

	do
	{
		do
		{
			do
			{
				cout << "Enter a value for N (it has to be bigger than K and 0): ";
				cin >> n;
				cout << endl;

			} while (n <= 0);

			do
			{
				cout << "Enter a value for K (it has to be bigger than 0 but smaller than N): ";
				cin >> k;
				cout << endl;

			} while (k <= 0);


		} while (n <= k);


		float combinatorial = Combinatorial(realN, realK);

		cout << "The result from the combinatorial is " << combinatorial << endl;
		
		cout << endl;

		cout << " Again [1] or exit [2]: ";
		cin >> n1;
		cout << endl;


	} while (n1 == 1);

	return 0;

}