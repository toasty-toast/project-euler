#!/usr/bin/env python2.7
"""
Problem 3: Largest prime factor
"""

if __name__ == "__main__":
    num = 600851475143
    while(num % 2 == 0):
        num /= 2
    root = int(num ** 0.5)
    i = 3
    while i < root:
        if num % i == 0:
            num /= i
            i = 3
            root = int(num ** 0.5)
        i += 2
    print num
