#!/usr/bin/python3
"""
This module defines the function minOperations, which calculates the minimum 
number of operations required to obtain n 'H' characters in a file, using 




i
C
C
C

only Copy All and Paste operations.
"""

def minOperations(n):
    """
    Calculates the minimum number of operations to obtain exactly n 'H' characters.

    Args:
    n (int): The desired number of 'H' characters.

    Returns:
    int: The minimum number of operations required to achieve n 'H' characters,
         or 0 if n is not achievable.
    """
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
