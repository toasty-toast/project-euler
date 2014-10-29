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
	short count = 0;
	int i = 1;
	while(count < 10000)
	{
		if(isPrime(++i))
			count++;
	}
	cout << i << endl;
}