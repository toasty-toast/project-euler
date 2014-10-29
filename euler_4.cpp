#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int largest = 0;
	for(int i = 100; i < 1000; i++)
	{
		for(int j = 100; j < 1000; j++)
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