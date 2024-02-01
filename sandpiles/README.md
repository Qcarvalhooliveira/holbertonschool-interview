<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/sandpiles/image/Sandpiles.png" width="1000" height="300">

# **Sandpiles** :computer:

## **Description** :speech_balloon:

* In programming, as highlighted by Numberphile, sandpiles are a model used to explore complex systems and patterns through simple rules. They are represented as grids where each cell contains a number of "grains of sand," and a cell topples by distributing grains to adjacent cells once a threshold is exceeded. This process can lead to chain reactions, creating intricate patterns and behaviors. Sandpiles are not just a mathematical curiosity; they offer insights into self-organized criticality, chaos theory, and fractals, demonstrating how minimal rules can generate complex, emergent systems. This concept is pivotal in various fields, including computer science, physics, and mathematics, illustrating the fundamental principles of complexity and pattern formation in a visually appealing and accessible manner.

## **Tasks** :books:


#### **0. Sandpiles sum**

Write a function that computes the sum of two sandpiles

    * Prototype: void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
    * You can assume that both grid1 and grid2 are individually stable
    * A sandpile is considered stable when none of its cells contains more than 3 grains
    * When your function is done, grid1 must be stable
    * grid1 must be printed before each toppling round, only if it is unstable (See example)
    * You’re not allowed to allocate memory dynamically

```
alex@~/sandpiles$ cat 0-main.c 
#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"

/**
 * print_grid_sum - Print 3x3 grids sum
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */
static void print_grid_sum(int grid1[3][3], int grid2[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid1[i][j]);
        }

        printf(" %c ", (i == 1 ? '+' : ' '));

        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid2[i][j]);
        }
        printf("\n");
    }
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    int grid1[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };
    int grid2[3][3] = {
        {1, 3, 1},
        {3, 3, 3},
        {1, 3, 1}
    };

    print_grid_sum(grid1, grid2);

    sandpiles_sum(grid1, grid2);

    printf("=\n");
    print_grid(grid1);

    return (EXIT_SUCCESS);
}
alex@~/sandpiles$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
alex@~/sandpiles$ ./0-sandpiles 
3 3 3   1 3 1
3 3 3 + 3 3 3
3 3 3   1 3 1
=
4 6 4
6 6 6
4 6 4
=
2 5 2
5 6 5
2 5 2
=
4 2 4
2 6 2
4 2 4
=
0 5 0
5 2 5
0 5 0
=
2 1 2
1 6 1
2 1 2
=
2 2 2
2 2 2
2 2 2
alex@~/sandpiles$ cat 1-main.c
Same as 0-main.c except:
int grid1[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    int grid2[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };
alex@~/sandpiles$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 0-sandpiles.c -o 0-sandpiles
alex@~/sandpiles$ ./0-sandpiles 
0 0 0   3 3 3
0 0 0 + 3 3 3
0 0 0   3 3 3
=
3 3 3
3 3 3
3 3 3
alex@~/sandpiles$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Queise Oliveira](https://github.com/Qcarvalhooliveira)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).