/*
 * Problem 7: 10001st isPrime
 * 
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 */

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num)
{
	if(num % 2 == 0)
		return false;
	for(int i = 3; i * i <= num; i += 2)
		if(num % i == 0)
			return false;
	return true;
}

int main(void)
{
	const int max = 10001;
	short count = 1;
	int i = 1;
	while(count < max)
	{
		if(isPrime(++i))
			count++;
	}
	cout << i << endl;
}