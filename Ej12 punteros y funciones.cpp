//Ex12 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

float circumferenceArea(float *radio) 
{
	float area = pow(*radio, 2)*3.1416;
	
	return area;
}
float circumferencePerimeter(float *radio)
{
	float perimetro = 2 * 3.1416**radio;

	return perimetro;

}

int main()
{
	int n1;

	float radio1;
	float *realRadio;
	realRadio = &radio1;

	do
	{
		do
		{
			cout << "Enter the circumference's radio: ";
			cin >> radio1;
			cout << endl;

		} while (radio1 <= 0);


		float area = circumferenceArea(realRadio);

		float perimetro = circumferencePerimeter(realRadio);



		cout << "The circumference's area is " << area << endl;

		cout << "The circumference's perimeter " << perimetro << endl;


		cout << endl;
		cout << "Again [1] or exit [2]: ";
		cin >> n1;
		cout << endl;


	} while (n1 == 1);


	return 0;

}