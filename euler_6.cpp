#include <iostream>

using namespace std;

int main(void)
{
	int squareSums = 0;
	int sumSquares = 0;
	for(int i = 1; i < 101; i++)
	{
		squareSums += i;
		sumSquares += i * i;
	}
	squareSums *= squareSums;
	cout << squareSums - sumSquares << endl;
	return 0;
}