#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
	unsigned long int i = 2520;
	while(true)
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
		i++;
	}
	return 0;
}