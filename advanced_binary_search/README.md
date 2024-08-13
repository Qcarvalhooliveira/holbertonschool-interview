<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/advanced_binary_search/image/binary_search.png" width="1000" height="400">

# **Advanced Binary Search**

## **Description** :speech_balloon:

* The exercise involves implementing an advanced binary search algorithm that finds the first occurrence of a value in a sorted array of integers. Unlike the standard binary search, which may return any index where the value is found, this advanced version ensures that the index of the first occurrence is returned. The function must be implemented recursively, and each time the array is split, the current subarray being searched should be printed. This exercise helps to deepen understanding of binary search algorithms and their implementation using recursion.

## **Task** :books:

#### **0. Advanced Binary Search**

You may have noticed that basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.

* Prototype : int advanced_binary(int *array, size_t size, int value);
* array is a pointer to the first element of the array to search in
* size is the number of elements in array
* value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
* You have to use recursion. You may only use one loop (while, for, do while, etc.) in order to print the array

```
wilfried@0x1D-search_algorithms$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1D-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-advanced_binary.c -o 0-advanced_binary
wilfried@0x1D-search_algorithms$ ./0-advanced_binary
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
