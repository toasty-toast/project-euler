"""
Problem 4: Largest palindrome product
"""

if __name__ == "__main__":
	largest = 0
	for i in xrange(100, 999):
		for j in xrange(100, 999):
			num = i * j
			if str(num) == str(num)[::-1] and int(num) > largest:
				largest = num
	print largest