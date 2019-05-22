//Ex9 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int Date(int *day, int *month, int *year)
{
	int leapyear;
	int date;

	if (*year % 4 == 0 && (*year % 400 == 0 || *year % 100 != 0))
	{
		leapyear = 1;
	}
	if (leapyear == 1)
	{
		if (*month == 2 && (*day >= 1 && *day <= 29))
		{
			date = 1;
		}
		if (*month == 2 && (*day >= 1 && *day > 29))
		{
			date = 0;

		}
		if (*month != 2)
		{
			if ((*month == 1 || *month ==3 || *month == 5 ||*month == 7 || *month == 8 || *month ==10 || *month ==12) &&(*day >= 1 && *day <= 31))
			{			
				date = 1;
			}
			else
			{
				if ((*month == 4 || *month == 6 || *month == 9 || *month == 11) && (*day >= 1 && *day <= 30))

				{
					date = 1;
				}

			}




		}


	}
	if (leapyear != 1)
	{
		if (*month == 2 && (*day >= 1 && *day <= 28))
		{
			date = 1;
		}
		if (*month == 2 && (*day >= 1 && *day > 29))
		{
			date = 0;

		}
		if (*month != 2)
		{
			if ((*month == 1 || *month == 3 || *month == 5 || *month == 7 || *month == 8 || *month == 10 || *month == 12) && (*day >= 1 && *day <= 31))
			{
				date = 1;
			}
			else
			{
				if ((*month == 4 || *month == 6 || *month == 9 || *month == 11) && (*day >= 1 && *day <= 30))

				{
					date = 1;
				}

			}

		}
	}


	return date;
}

int main()
{
	int day1;
	int *realDay;
	realDay = &day1;

	int month1;
	int *realMonth;
	realMonth = &month1;

	int year1;
	int *realYear;
	realYear = &year1;

	int n1;

	do
	{
		cout << "Enter the date (day - month - year): ";
		cin >> day1 >> month1 >> year1;
		cout << endl;

		int finalDate = Date(realDay, realMonth, realYear);

		if (finalDate == 1)
		{
			cout << "Valid date \n";
		}
		if (finalDate == 0)
		{
			cout << "Invalid date \n";
		}

		cout << endl;
		cout << "Again [1] or exit [2]: ";
		cin >> n1;
		cout << endl;


	} while (n1 == 1);


	return 0;
}