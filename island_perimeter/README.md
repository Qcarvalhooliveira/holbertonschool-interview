<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/island_perimeter/image/island_perimeter.png" width="1000" height="400">

# **Island Perimeter** :computer:

## **Description:** :speech_balloon:

* This exercise require to implement a function island_perimeter(grid) that calculates the perimeter of an island represented in a grid. The grid is a list of lists of integers where 0 represents water and 1 represents land. Each cell is a square with a side length of 1, and cells are connected horizontally or vertically. The grid is completely surrounded by water, and there is exactly one island (or none). The island does not contain any lakes (water that is not connected to the grid's surrounding water). The function should return the total perimeter of the island.

## **Task** :books:

#### **0. Island Perimeter**

Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

* grid is a list of list of integers:
    * 0 represents water
    * 1 represents land
    * Each cell is square, with a side length of 1
    * Cells are connected horizontally/vertically (not diagonally).
    * grid is rectangular, with its width and height not exceeding 100
* The grid is completely surrounded by water
* There is only one island (or nothing).
* The island doesn’t have “lakes” (water inside that isn’t connected to the water surrounding the island).

```
guillaume@ubuntu:~/$ cat 0-main.py
#!/usr/bin/python3
"""
0-main
"""
island_perimeter = __import__('0-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

guillaume@ubuntu:~/$ 
guillaume@ubuntu:~/$ ./0-main.py
12
guillaume@ubuntu:~/$ 
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
