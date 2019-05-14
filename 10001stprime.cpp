// 10001stprime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	vector<long int> primes;

	for (long int i = 104730; i < 105000; i++)
	{
		int count = 0; //count must go here. It must reset at the beginning of the outer loop.

		for (int j = 2; j < sqrt(i); j++)
		{

			if (i % j == 0)
			{
				count++;
				break;
			}
		}

		if (count == 0)
		{
			primes.push_back(i);
		}
	}

	for (int k = 0; k < primes.size(); k++)
	{
		cout << primes[k] << endl;
	}

	system("pause");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu