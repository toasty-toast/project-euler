#include <iostream>

using namespace std;

int main(void) 
{
	int first = 1;
	int second = 2;
	int sum = 0;
	while(second < 4000000)
	{
		if(second % 2 == 0)
		{
			sum += second;
		}
		int temp = first + second;
		first = second;
		second = temp;
	}
	cout << sum << endl;
}