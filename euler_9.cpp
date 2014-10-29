/*
 * Problem 9: Special Pythagorean triplet
 * 
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a2 + b2 = c2
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <iostream>

using namespace std;

int main(void)
{
	const int sum = 1000;
	int a = 0;
	int b = 0;
	int c = 0;
	for(a = 1; a < sum / 2; a++)
	{
		for(b = 1; b < sum / 2; b++)
		{
			c  = sum - a - b;
			if(a * a + b * b == c * c)
			{
				cout << a * b * c << endl;
				return 0;
			}
		}
	}
	return 0;
}