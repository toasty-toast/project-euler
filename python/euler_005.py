"""
Problem 5: Smallest multiple
"""

import sys

if __name__ == "__main__":
	num = 2520
	while True:
		for i in xrange(1, 21):
			if num % i != 0:
				break
			if i == 20:
				print num
				sys.exit(0)
		num += 2520