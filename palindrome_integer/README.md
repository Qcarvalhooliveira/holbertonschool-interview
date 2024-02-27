<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/palindrome_integer/image/palindrome_integer.png" width="1000" height="300">

# **Palindrome integer** :computer:

## **Description:** :speech_balloon:

*  A palindrome integer is a number that remains the same when read forwards or backwards, meaning it's symmetric around its midpoint. For instance, 121, 1221, and 1331 are examples of palindrome integers. To determine if an integer is a palindrome, one can simply reverse its digits and check if the reversed number equals the original. If they match, then the number is a palindrome. Palindrome integers are of interest in various mathematical contexts due to their unique property.

## **Tasks** :books:


#### **0. Palindrome unsigned integer**

Write a function that checks whether or not a given unsigned integer is a palindrome.

* Prototype: int is_palindrome(unsigned long n);
* Where n is the number to be checked
* Your function must return 1 if n is a palindrome, and 0 otherwise
* You are not allowed to allocate memory dynamically (malloc, calloc, …)

```
alex@~/palindrome_integer$ cat 0-main.c 
#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

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
    unsigned long n;
    int ret;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s arg\n", av[0]);
        return (EXIT_FAILURE);
    }

    n = (unsigned long)(atol(av[1]));
    ret = is_palindrome(n);

    printf("%lu is ", n);
    if (ret == 0)
        printf("not ");
    printf("a palindrome.\n");

    return (EXIT_SUCCESS);
}
alex@~/palindrome_integer$ gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c
alex@~/palindrome_integer$ ./palindrome 1
1 is a palindrome.
alex@~/palindrome_integer$ ./palindrome 11
11 is a palindrome.
alex@~/palindrome_integer$ ./palindrome 112
112 is not a palindrome.
alex@~/palindrome_integer$ ./palindrome 121
121 is a palindrome.
alex@~/palindrome_integer$ ./palindrome 12345678987654321
12345678987654321 is a palindrome.
alex@~/palindrome_integer$ ./palindrome 123456789987654321
123456789987654321 is a palindrome.
alex@~/palindrome_integer$ ./palindrome 1234567898654321
1234567898654321 is not a palindrome.
alex@~/palindrome_integer$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Queise Oliveira](https://github.com/Qcarvalhooliveira)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).


