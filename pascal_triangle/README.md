# **Pascal's Triangle** :computer:

## **Description** :speech_balloon:

The exercise "Pascal's Triangle" involves writing a Python function named pascal_triangle(n) that generates Pascal's triangle up to the nth row. Pascal's triangle is a triangular array where each number is the sum of the two directly above it from the previous row. The function should return a list of lists of integers, where each sublist represents a row in the triangle. If n is less than or equal to 0, the function should return an empty list.

## **Task** :books:

#### **0. Pascal's Triangle**

Create a function def pascal_triangle(n): that returns a list of lists of integers representing the Pascal’s triangle of n:

* Returns an empty list if n <= 0
* You can assume n will be always an integer

```
guillaume@ubuntu:~/$ cat 0-main.py
#!/usr/bin/python3
"""
0-main
"""
pascal_triangle = __import__('0-pascal_triangle').pascal_triangle

def print_triangle(triangle):
    """
    Print the triangle
    """
    for row in triangle:
        print("[{}]".format(",".join([str(x) for x in row])))


if __name__ == "__main__":
    print_triangle(pascal_triangle(5))

guillaume@ubuntu:~/$ 
guillaume@ubuntu:~/$ ./0-main.py
[1]
[1,1]
[1,2,1]
[1,3,3,1]
[1,4,6,4,1]
guillaume@ubuntu:~/$ 
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
