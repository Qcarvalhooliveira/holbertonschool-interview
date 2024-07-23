# **Radix Sort** :computer:

## **Description:** :speech_balloon:

* This exercise involves implementing the Radix Sort algorithm in C, using the Least Significant Digit (LSD) method. The objective is to create a radix_sort function that sorts an array of non-negative integers in ascending order. During the sorting process, the function uses print_array to display the array after each significant digit increment. To assist in the implementation, two auxiliary functions are utilized: getMax, which finds the maximum value in the array, and countSort, which performs counting sort based on a specific digit. The implementation should adhere to the Betty coding style guidelines, ensuring clarity and standardization of the code.

## **Task** :books:

#### **0. Radix sort**

Write a function that sorts an array of integers in ascending order using the Radix sort algorithm

* Prototype: void radix_sort(int *array, size_t size);
* You must implement the LSD radix sort algorithm
* You can assume that array will contain only numbers >= 0
* You are allowed to use malloc and free for this task
* You’re expected to print the array each time you increase your significant digit (See example below)

```
alexa@ubuntu-xenial:radix_sort$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    radix_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alexa@ubuntu-xenial:radix_sort$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-radix_sort.c print_array.c -o radix
alexa@ubuntu-xenial:radix_sort$ ./radix
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

71, 52, 13, 73, 96, 86, 7, 48, 19, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alexa@ubuntu-xenial:radix_sort$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
