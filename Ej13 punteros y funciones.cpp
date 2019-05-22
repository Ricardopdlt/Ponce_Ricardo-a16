//Ex13 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

void circumferenceArPe(float *radio, float *area, float * perimeter)
{
	float area1 = pow(*radio, 2)*3.1416 / *area;
	float perimeter1 = 2 * 3.1416**radio / *perimeter;

	*area = area1;
	*perimeter = perimeter1;

}

int main()
{
	int n1;

	float radio1;
	float *realRadio;
	realRadio = &radio1;

	float area2;
	float *realArea;
	realArea = &area2;

	float perimeter2;
	float *realPerimeter;
	realPerimeter = &perimeter2;


	do
	{
		do
		{
			cout << "Enter the circumference's radio: ";
			cin >> radio1;
			cout << endl;
			area2 = 1;
			perimeter2 = 1;

		} while (radio1 <= 0);

		circumferenceArPe(realRadio, realArea, realPerimeter);

		cout << "The circumference's area is " << area2 << endl;

		cout << "The circumference's perimeter " << perimeter2 << endl;


		cout << endl;
		cout << "Again [1] or exit [2]: ";
		cin >> n1;
		cout << endl;

	} while (n1 == 1);

	return 0;

}