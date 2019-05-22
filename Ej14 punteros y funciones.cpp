//Ex14 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

void swap(float *a, float *b) 
{
	int aAux, bAux;

	aAux = *a; 
	bAux = *b; 

	*a = bAux; 
	*b = aAux; 

}


int main() {
	int n1;

	float x;
	float y;

	float *x1, *y1;
	x1 = &x;
	y1 = &y;

	do
	{
		cout << "Enter a value for X: ";
		cin >> x;

		cout << endl;

		cout << "Enter a value for Y: ";
		cin >> y;

		cout << endl;
		cout << "Initial value for X: " << *x1 << " - Initial value for Y: " << *y1 << endl;
		cout << endl;

		swap(x1, y1);


		cout << "Final value for X: " << *x1 << " - Final value for Y: " << *y1 << endl;

		cout << endl;
		cout << "Again [1] or exit [2]: ";
		cin >> n1;
		cout << endl;



	} while (n1 == 1);
	   
	
	return 0;
	
}