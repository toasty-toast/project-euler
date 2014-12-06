/*
 * Problem 16: Power digit sum
 * 
 * 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 * What is the sum of the digits of the number 21000?
 */

#include <iostream>
#include <vector>

using namespace std;

typedef vector<char> bignum;

void doubleNum(bignum & num)
{
	int carry = 0;
	for(bignum::iterator p = num.begin(); p != num.end(); p++)
	{
		*p *= 2;
		*p += carry;
		carry = (*p >= 10) ? 1 : 0;
		*p -= carry * 10;
	}
	if (carry != 0)
		num.push_back(carry);
}

int main(void)
{
	bignum num;
	int sum = 0;
	num.push_back(1);
	for(int i = 0; i < 1000; i++)
		doubleNum(num);
	for(bignum::iterator p = num.begin(); p != num.end(); p++)
		sum += (int)*p;
	cout << sum << endl;
	return 0;
}
