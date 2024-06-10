<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/rotate_2d_matrix/image/Rotate%202D%20Matrix.png" width="1000" height="400">

# **Rotate 2D Matrix** :computer:

## **Description:** :speech_balloon:

* Rotate 2D Matrix is an operation in programming algorithms that involves rotating a two-dimensional matrix (or 2D matrix) by 90 degrees either clockwise or counterclockwise. This process is often used in image manipulation, graphics, and games. To perform the rotation, the elements of the original matrix are repositioned so that the first row becomes the last column, the second row becomes the second-to-last column, and so on. This transformation can be implemented through various techniques, such as transposing the matrix followed by reversing rows or columns, depending on the desired direction of rotation.

## **Task** :books:

#### **0. Rotate 2D Matrix**

Given an n x n 2D matrix, rotate it 90 degrees clockwise.

    Prototype: def rotate_2d_matrix(matrix):
    Do not return anything. The matrix must be edited in-place.
    You can assume the matrix will have 2 dimensions and will not be empty.

```
jessevhedden$ cat main_0.py
#!/usr/bin/python3
"""
Test  - Rotate 2D Matrix
"""
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)

jessevhedden$
jessevhedden$ ./main_0.py
[[7, 4, 1],
[8, 5, 2],
[9, 6, 3]]
jessevhedden$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
