<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/nqueens/image/N_Queens.png" width="1000" height="300">

# **N Queens**

## **Description:** :speech_balloon:

* The N Queens puzzle is a complex problem where N queens must be placed on an N x N chessboard without threatening each other, showcasing the backtracking method in computer science. Solving it involves a recursive strategy that places queens one by one in valid positions, backtracking when necessary. The problem's difficulty increases with more queens, serving as a test for algorithm efficiency and finding applications in areas like tournament planning and cryptography.

## **Tasks** :books:

#### **0. N queens**

The N queens puzzle is the challenge of placing N non-attacking queens on an N×N chessboard. Write a program that solves the N queens problem.

    * Usage: nqueens N
        If the user called the program with the wrong number of arguments, print Usage: nqueens N, followed by a new line, and exit with the status 1
    * where N must be an integer greater or equal to 4
        If N is not an integer, print N must be a number, followed by a new line, and exit with the status 1
        If N is smaller than 4, print N must be at least 4, followed by a new line, and exit with the status 1
    * The program should print every possible solution to the problem
        One solution per line
        Format: see example
        You don’t have to print the solutions in a specific order
    * You are only allowed to import the sys module

Read:[Queen](https://en.wikipedia.org/wiki/Queen_%28chess%29),[Backtracking](https://en.wikipedia.org/wiki/Backtracking)

```
julien@ubuntu:~/0x08. N Queens$ ./0-nqueens.py 4
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]
julien@ubuntu:~/0x08. N Queens$ ./0-nqueens.py 6
[[0, 1], [1, 3], [2, 5], [3, 0], [4, 2], [5, 4]]
[[0, 2], [1, 5], [2, 1], [3, 4], [4, 0], [5, 3]]
[[0, 3], [1, 0], [2, 4], [3, 1], [4, 5], [5, 2]]
[[0, 4], [1, 2], [2, 0], [3, 5], [4, 3], [5, 1]]
julien@ubuntu:~/0x08. N Queens$ 
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
