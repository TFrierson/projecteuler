// sumsquares.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int sums = (101 * 100) / 2;
	long int square_of_sums = sums * sums;
	long int squares;
	long int sum_of_squares = 0;
	long int sum_difference = 0;

	for (int i = 1; i < 101; i++)
	{
		squares = i * i;
		sum_of_squares += squares;
	}

	sum_difference = square_of_sums - sum_of_squares;

	cout << sum_difference;

	system("pause");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

