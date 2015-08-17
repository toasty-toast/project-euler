#!/usr/bin/env python2.7
"""
Problem 7: 10001st prime
"""

def is_prime(num):
	if num > 2:
		if num % 2 == 0:
			return False
		for i in range(3, int(num ** 0.5) + 1, 2):
			if num % i == 0:
				return False
		return True	
	else:
		if num <= 1:
			return False
		if num == 2:
			return True

if __name__ == "__main__":
	count = 0
	n = 1
	while count < 10001:
		n += 1
		if is_prime(n):
			count += 1
	print n
