<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/slide_line/image/2048%20(single%20line).png" width="1000" height="400">

# **2048 (single line)** :computer:

## **Description** :speech_balloon:

* This programming task involves emulating the mechanics of the game 2048 along a single horizontal line. The function slide_line is designed to take an array of integers and either slide and merge its elements to the left or right. The function prototype is int slide_line(int *line, size_t size, int direction);, where line is the array to manipulate, size is the number of elements in the array, and direction specifies the slide direction, defined by the macros SLIDE_LEFT and SLIDE_RIGHT. A successful operation returns 1, while a failure returns 0. The implementation does not permit dynamic memory allocation, ensuring that the function operates strictly within the bounds of pre-allocated memory.

## **Task** :books:

#### **0. Slide line**

The goal of this task is to reproduce the 2048 game(NSFW !!) mechanics on a single horizontal line.

Given an array of integers, we want to be able to slide & merge it to the left or to the right. Identical numbers, if they are contiguous or separated by zeros, should be merged (See example)

* Write a function that slides and merges an array of integers
* Prototype: int slide_line(int *line, size_t size, int direction);
* Where line points to an array of integers containing size elements, that must be slided & merged to the direction represented by direction. direction can be either:
    * SLIDE_LEFT
    * SLIDE_RIGHT
    * If it is something else, the function must fail
    * Both macros SLIDE_LEFT and SLIDE_RIGHT must be defined in slide_line.h
* Your function must return 1 upon success, or 0 upon failure
* You are not allowed to allocate memory dynamically (malloc, calloc, …)

```
alex@~/slide_line$ cat 0-main.c 
#include <stdlib.h>
#include <stdio.h>

#include "slide_line.h"

#define LINE_SIZE   32

/**
 * print_array - Prints out an array of integer, followed by a new line
 * 
 * @array: Pointer to the array of integer to be printed
 * @size: Number of elements in @array
 */
static void print_array(int const *array, size_t size)
{
    size_t i;

    printf("Line: ");
    for (i = 0; i < size; i++)
        printf("%s%d", i > 0 ? ", " : "", array[i]);
    printf("\n");
}

/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
    int line[LINE_SIZE];
    int direction;
    size_t i, size;

    if (ac < 3)
    {
        fprintf(stderr, "Usage: %s <R/L> <n1> [n2...]\n", av[0]);
        return (EXIT_FAILURE);
    }

    /* Command line arguments to array of int */
    size = ac - 2;
    if (size > LINE_SIZE)
        size = LINE_SIZE;
    for (i = 0; i < size; i++)
        line[i] = atoi(av[i + 2]);

    /* Print the array */
    print_array(line, size);

    /* Parse direction */
    switch (*(av[1]))
    {
    case 'L':
        direction = SLIDE_LEFT;
        printf("Slide to the left\n");
        break;
    case 'R':
        direction = SLIDE_RIGHT;
        printf("Slide to the right\n");
        break;
    default:
        fprintf(stderr, "Unknown direction '%c'. Please use 'L' or 'R'", *(av[1]));
        return (EXIT_FAILURE);
    }

    /* Slide and merge */
    if (!slide_line(line, size, direction))
    {
        fprintf(stderr, "Failed to slide and merge line\n");
        return (EXIT_FAILURE);
    }

    /* Print the array */
    print_array(line, size);

    return (EXIT_SUCCESS);
}
alex@~/slide_line$ gcc -Wall -Wextra -Werror -pedantic -o 0-slide_line 0-main.c 0-slide_line.c
alex@~/slide_line$ ./0-slide_line L 2 2 0 0
Line: 2, 2, 0, 0
Slide to the left
Line: 4, 0, 0, 0
alex@~/slide_line$ ./0-slide_line L 2 2 0 0 0 0 0 2 0 0 0 2 0 4
Line: 2, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 4
Slide to the left
Line: 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
alex@~/slide_line$ ./0-slide_line R 2 2 2 2
Line: 2, 2, 2, 2
Slide to the right
Line: 0, 0, 4, 4
alex@~/slide_line$ ./0-slide_line R 2 2 2 2 2
Line: 2, 2, 2, 2, 2
Slide to the right
Line: 0, 0, 2, 4, 4
alex@~/slide_line$ ./0-slide_line L 2 4 8 16
Line: 2, 4, 8, 16
Slide to the left
Line: 2, 4, 8, 16
alex@~/slide_line$ ./0-slide_line R 2 4 8 16
Line: 2, 4, 8, 16
Slide to the right
Line: 2, 4, 8, 16
alex@~/slide_line$ ./0-slide_line R 4 4 8 16
Line: 4, 4, 8, 16
Slide to the right
Line: 0, 8, 8, 16
alex@~/slide_line$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
