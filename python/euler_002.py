#!/usr/bin/env python2.7
"""
Problem 2: Even Fibonacci numbers
"""

def fibonacci(maximum):
    first = 1
    second = 2
    while first < maximum:
        yield first
        first, second = second, first + second

if __name__ == "__main__":
    print sum((i for i in fibonacci(4000000) if i % 2 == 0))
