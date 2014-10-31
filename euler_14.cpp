/*
 * Problem 14: Longest Collatz sequence
 * 
 * The following iterative sequence is defined for the set of positive integers:
 * n → n/2 (n is even)
 * n → 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 * 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 * Which starting number, under one million, produces the longest chain?
 * Note: Once the chain starts the terms are allowed to go above one million.
 */

#include <iostream>

using namespace std;

int main(void)
{
	const int max = 1000000;
	int numTerms = 0;
	int longest[2] = {0, 0};
	for(int i = 837799; i < 837800; i++)
	{
		int num = i;
		numTerms = 1;
		while(num > 1)
		{
			if(num % 2 == 0)
			{
				num = num / 2;
			}
			else
			{
				num = num * 3 + 1;
			}
			numTerms++;
		}
		if(numTerms > longest[1])
		{
			longest[0] = i;
			longest[1] = numTerms;
			cout << "New longest: " << longest[0] << " Num Terms: " << longest[1] << endl;
		}
	}
	cout << longest[0] << endl;
	return 0;
}