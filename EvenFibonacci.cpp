// EvenFibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	int a = 1;
	int b = 1;
	int c = 0;

	unsigned long int temp = 0;

	while (c < 4000000)
	{
		c = a + b;

		if (c % 2 == 0)
		{
			temp = temp + c;
		}

		a = b;
		b = c;
	}

	cout << temp;

	system("pause");

    return 0;
}

