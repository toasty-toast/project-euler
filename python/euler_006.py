#!/usr/bin/env python2.7
"""
Problem 6: Sum square difference
"""

if __name__ == "__main__":
	sum_of_squares = 0
	square_of_sums = 0
	for i in xrange(1, 101):
		sum_of_squares += i * i
		square_of_sums += i
	square_of_sums *= square_of_sums
	
	print (square_of_sums - sum_of_squares)
