#!/usr/bin/python3

"""Module that defines the Pascal's triangle of n."""

def pascal_triangle(n):
    """
    Generate Pascal's triangle up to the nth row (inclusive).
    
    Args:
        n (int): The number of rows of Pascal's triangle to generate.
    
    Returns:
        List[List[int]]: A list of lists of integers representing 
        Pascal's triangle up to the nth row. If n <= 0, returns an empty list.
    """#!/usr/bin/python3

"""Module that defines the Pascal's triangle of n."""

def pascal_triangle(n):
    """
    Generate Pascal's triangle up to the nth row (inclusive).
    
    Args:
        n (int): The number of rows of Pascal's triangle to generate.
    
    Returns:
        List[List[int]]: A list of lists of integers representing 
        Pascal's triangle up to the nth row. If n <= 0, returns an empty list.
    """
    if n <= 0:
        return []

    triangle = [[1]]

    for i in range(1, n):
        row = [1]
        for j in range(1, i):
            row.append(triangle[i-1][j-1] + triangle[i-1][j])
        row.append(1)
        triangle.append(row)
    
    return triangle

    if n <= 0:
        return []

    triangle = [[1]]

    for i in range(1, n):
        row = [1]
        for j in range(1, i):
            row.append(triangle[i-1][j-1] + triangle[i-1][j])
        row.append(1)
        triangle.append(row)
    
    return triangle
