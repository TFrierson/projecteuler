// largestprime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	long long int number = 600851475143;
	vector<int> primefactors;
	long long int divisor = 2;
	
	for (int i = 2; i < 775146; i++)
	{
		if (number % i == 0)
		{
			primefactors.push_back(i);
		}
	}

	for (int j = 0; j < primefactors.size(); j++)
	{
		cout << primefactors[j] << endl;
	}

	system("pause");
    return 0;
}

