#!/usr/bin/env python2.7
"""
Problem 1: Multiples of 3 and 5
"""

if __name__ == "__main__":
    maximum = 1000;
    total = 0;
    for i in xrange(1, maximum):
        if(i % 3 == 0):
            total += i
            continue
        if(i % 5 == 0):
            total += i
    print total
