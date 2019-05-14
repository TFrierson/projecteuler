// pythagoreantriplets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int squaresum;
	double squareroot;
	long int product;

	for (int a = 1; a < 1000; a++)
	{
		for (int b = a + 1; b < 1000; b++)
		{
			squaresum = (a * a) + (b * b);

			squareroot = sqrt(squaresum);

			if (floor(squareroot) == squareroot)
			{
				if (a + b + squareroot == 1000)
				{
					product = a * b * squareroot;

					cout << product << endl;
				}
			}
		}
	}

	return 0;
}