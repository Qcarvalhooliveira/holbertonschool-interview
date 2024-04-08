<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/sorted_array_to_avl/image/Array_to_AVL.png" width="1000" height="300>

# **Array to AVL**

## **Description** :speech_balloon:

* "Array to AVL" refers to the process of converting a linear array into an AVL (Adelson-Velsky and Landis) tree, which is a type of self-balancing binary search tree. The goal of this transformation is to take the unstructured or linearly structured data from an array and organize it into an AVL tree. This ensures that operations like search, insertion, and deletion can be performed more efficiently, with time complexities of O(log n), where n is the number of elements in the tree. The AVL tree maintains its balance using a set of rotation operations to ensure that the height difference between the left and right subtrees of any node is no more than one, thus maintaining a balanced structure that optimizes the tree's height and ensures efficient data access patterns.

## **Tasks** :books:

#### **0. AVL - From sorted array**

Write a function that builds an AVL tree from an array

* Prototype: avl_t *sorted_array_to_avl(int *array, size_t size);
* Where array is a pointer to the first element of the array to be converted
* And size is the number of element in the array
* Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
* You can assume there will be no duplicate value in the array
* You are not allowed to rotate
* You can only have 3 functions in your file

```
alex@~/sorted_array_to_avl$ cat 0-main.c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Size of the array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; ++i)
        printf("(%03d)", array[i]);
    printf("\n");
}

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
    avl_t *tree;
    int array[] = {
        1, 2, 20, 21, 22, 32, 34, 47, 62, 68,
        79, 84, 87, 91, 95, 98
    };
    size_t n = sizeof(array) / sizeof(array[0]);

    tree = sorted_array_to_avl(array, n);
    if (!tree)
        return (1);
    print_array(array, n);
    binary_tree_print(tree);
    return (0);
}
alex@~/sorted_array_to_avl$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl
alex@~/sorted_array_to_avl$ ./0-sorted_array_to_avl
(001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                           (098)
alex@~/sorted_array_to_avl$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).



