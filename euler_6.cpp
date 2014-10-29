/*
 * Problem 6: Sum square difference
 * 
 * The sum of the squares of the first ten natural numbers is,
 * 12 + 22 + ... + 102 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)2 = 552 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

#include <iostream>

using namespace std;

int main(void)
{
	const int max = 100;
	int squareSums = 0;
	int sumSquares = 0;
	for(int i = 1; i <= max; i++)
	{
		squareSums += i;
		sumSquares += i * i;
	}
	squareSums *= squareSums;
	cout << squareSums - sumSquares << endl;
	return 0;
}