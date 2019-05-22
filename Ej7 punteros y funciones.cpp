//Ex7 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;


int reverse (int *number) 
{

	int reversenum = 0;

	while (*number >= 10)
	{
		reversenum = *number % 10;

		*number = *number / 10;

		cout << reversenum;
	}
		
	cout << *number << endl;;

	return reversenum;
}

int main() 
{
	int n1;

	int number1;
	int *realNumber;
	realNumber = &number1;

	do
	{

		do {

			cout << "Enter a number with at least 4 digits: ";

			cin >> number1;

		} while (number1 < 1000);



		cout << "The reverse number is ";
		int reversenum = reverse(realNumber);
		cout << endl;
		cout << endl;

		cout << "Again [1] or exit [2]: ";
		cin >> n1;
		cout << endl;


	} while (n1 == 1);

	
	return 0;

}