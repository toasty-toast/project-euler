/**
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 *
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
 *
 * NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
 * The use of "and" when writing out numbers is in compliance with British usage.
 */

#include <iostream>

static const std::string ones[] = {
	"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
	"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};
static const std::string tens[] = {
	"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
};
static const std::string hundreds[] = {
	"", "onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred"
};
static const std::string thousand = "onethousand";

std::string wordFromNumber(unsigned int number)
{
	if(number == 1000)
		return thousand;
	
	if(number < 20)
		return ones[number];
	
	if(number < 100)
		return tens[number / 10] + wordFromNumber(number % 10);
	
	if(number % 100 != 0)
		return hundreds[number / 100] + "and" + wordFromNumber(number % 100);
	else
		return hundreds[number / 100];
}

int main()
{
	unsigned int letterCount = 0;
	
	for(unsigned int i = 1; i <= 1000; i++)
		letterCount += wordFromNumber(i).length();
	
	std::cout << letterCount << std::endl;
}