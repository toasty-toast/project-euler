"""
Problem 9: Special Pythagorean Triplet
"""

import sys

def main():
    sum = 1000
    for a in xrange(sum / 2):
        for b in xrange(sum / 2):
            c = sum - a - b
            if a * a + b * b == c * c:
                print a * b * c
                sys.exit(0)

if __name__ == '__main__':
    main()
