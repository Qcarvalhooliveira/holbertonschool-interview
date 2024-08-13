# **Wild Compare** :computer:

## **Description** :speech_balloon:

* This exercise involves implementing a function called wildcmp that compares two strings to determine if they can be considered identical. The function must account for the possibility that the second string (s2) may contain the special character *, which can replace any sequence of characters, including an empty string. The goal is to return 1 if the strings can be considered identical and 0 otherwise. This problem tests the ability to work with recursion and handle wildcard characters in string comparison, ensuring that all possible matching cases are covered efficiently.

## **Task** :books:

#### **0. Wild Compare**

Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

* Prototype: int wildcmp(char *s1, char *s2);
* s2 can contain the special character *.
* The special char * can replace any string (including an empty string)

```
alexa@ubuntu:~/wild_cmp$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
alexa@ubuntu:~/wild_cmp$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-wildcmp.c -o 0-wildcmp
alexa@ubuntu:~/wild_cmp$ ./0-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
alexa@ubuntu:~/wild_cmp$ 
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
