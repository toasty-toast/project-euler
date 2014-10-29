/*
 * Problem 10: Summation of primes
 * 
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * find the sum of all the primes below two million.
 */

#include <iostream>

using namespace std;

bool isPrime(int num)
{
	if(num == 2)
		return true;
	if(num % 2 == 0)
		return false;
	for(int i = 3; i * i <= num; i += 2)
		if(num % i == 0)
			return false;
	return true;
}

int main(void)
{
	const int max = 2000000;
	unsigned long int sum = 2;
	for(int i = 3; i < max; i += 2)
	{
		if(isPrime(i))
			sum += i;
	}
	cout << sum << endl;
	return 0;
}