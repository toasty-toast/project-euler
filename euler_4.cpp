/*
 * Problem 4: Largest palindrome product
 * 
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	const int min = 100;
	const int max = 1000;
	int largest = 0;
	for(int i = min; i < max; i++)
	{
		for(int j = min; j < max; j++)
		{
			int number = i * j;
			int tmp = number;
			int reverse = 0;
			while(tmp > 0)
			{
				int digit = tmp % 10;
				reverse = reverse * 10 + digit;
				tmp = tmp / 10;
			}
			if(reverse == number && number > largest)
			{
				largest = number;
			}
		}
	}
	cout << largest << endl;
	return 0;
}