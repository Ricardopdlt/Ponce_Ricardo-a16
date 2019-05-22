//Ex8 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

void Isleapyear(int *year)
{
	if (*year % 4 == 0 && (*year % 400 == 0 || *year % 100 != 0))
	{
		cout << *year << " is a leap-year. \n";
	}
	else
	{
		cout << *year << " is not a leap-year. \n";
	}

}

int main()
{
	int year1;
	int *realYear;
	realYear = &year1;

	int n1;
	

	do
	{
		cout << "NOTE: Negative years are considered as B.C (Before Christ) \n";
		cout << "Enter the year you want to know if it's a leap year or not: ";
		cin >> year1;
		cout << endl;
		
		Isleapyear(realYear);
		cout << endl;

		cout << "Again [1] or exit [2]: ";
		cin >> n1;	
		cout << endl;


	} while (n1 == 1);


	return 0;
}