#!/usr/bin/python3
"""Method that calculates the fewest number of operations"""

def minOperations(n):
    if n <= 1:
        return 0

    opCount = 0
    divisor = 2

    while n > 1:
        while n % divisor == 0:
            opCount += divisor
            n //= divisor
        divisor += 1

    return opCount
