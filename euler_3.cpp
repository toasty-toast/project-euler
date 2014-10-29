/*
 * Problem 3: Largest prime factor
 * 
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>

#define NUMBER 600851475143

using namespace std;

int main(void)
{
	unsigned long long int i = 2;
	unsigned long long int max = 0;
	while(i * i <= NUMBER)
	{
		if(NUMBER % i == 0)
		{
			bool newMax = true;
			for(unsigned int n = 2; n * n <= i; n++)
			{
				if(i % n == 0)
				{
					newMax = false;
					break;
				}
			}
			if(newMax)
			{
				max = i;
			}
		}
		i++;
	}
	cout << max << endl;
	return 0;
}