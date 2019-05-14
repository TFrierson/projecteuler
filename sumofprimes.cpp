// sumofprimes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const unsigned long long max = 2000000;

	unsigned long long sum = 0;

	vector<unsigned long long> primes(max);

	fill(primes.begin(), primes.end(), true);
	
	for (unsigned long long i = 2; i < max; i++)
	{
		if (primes[i])        //Only do anything if the current element is marked true, else it's already marked out
		{
			for (unsigned long long j = i * i; j < max; j += i)
			{
				/* Start at i-squared. Update multiples of i starting at i-squared as not-prime. Any not-prime
				less than i-squared has already been marked as not prime*/

				primes[j] = false;
			}
		}
	}

	for (unsigned long long k = 2; k < max; k++)
	{
		if (primes[k])
		{
			sum += k;
		}
	}

	cout << sum; 
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
