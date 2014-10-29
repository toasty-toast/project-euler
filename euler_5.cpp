/*
 * Problem 5: Smallest multiple
 * 
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */ 

#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
	unsigned long int i = 0;
	for(i = 2520; ; i += 2520)
	{
		for(int j = 1; j < 21; j++)
		{
			if(i % j != 0)
				break;
			if(j == 20)
			{
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}