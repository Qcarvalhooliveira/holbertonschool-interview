# **Substring with concatenated words**


## **Description** :speech_balloon:

* The exercise requires implementing a function, find_substring, that identifies all starting indices in a given string s where a substring can be formed by concatenating all the words in an array words exactly once and without any intervening characters. The function must return an array of these starting indices or NULL if no valid substrings are found. Each word in the words array has the same length, and the function must efficiently check all possible substrings within the input string s to determine valid concatenations. Proper memory management and adherence to coding standards are essential for the solution.

## **Task** :books:

#### **0. Substring with concatenated words**

Write a function that finds all the possible substrings containing a list of words, within a given string.

* Prototype: int *find_substring(char const *s, char const **words, int nb_words, int *n);, where
    * s is the string to scan
    * words is the array of words all substrings must be a concatenation arrangement of
    * nb_words is the number of elements in the array words
    * n holds the address at which to store the number of elements in the returned array.
* Your function must return an allocated array, storing each index in s, at which a substring was found. If no solution is found, NULL can be returned
* All words in the array words are the same length
* A valid substring of s is the concatenation of each word in words exactly once and without any intervening characters

```
alex@~/holbertonschool-interview_prep/substring$ cat main.c
#include <stdlib.h>
#include <stdio.h>

#include "substring.h"

int main(int ac, char const **av)
{
    char const *s;
    char const **words;
    int nb_words;
    int *indices;
    int n;
    int i;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s <string> [word [word2 ...]]\n", av[0]);
        return (EXIT_FAILURE);
    }

    s = av[1];
    words = av + 2;
    nb_words = ac - 2;

    indices = find_substring(s, words, nb_words, &n);

    printf("Indices -> [");
    for (i = 0; i < n; i++)
    {
        if (i)
            printf(", ");
        printf("%d", indices[i]);
    }
    printf("]\n");

    return (EXIT_SUCCESS);
}
alex@~/holbertonschool-interview_prep/substring$ gcc -Wall -Wextra -Werror -pedantic main.c substring.c
alex@~/holbertonschool-interview_prep/substring$ ./a.out barfoothefoobarman foo bar
Indices -> [0, 9]
alex@~/holbertonschool-interview_prep/substring$ ./a.out wordgoodgoodgoodbestword word good best word
Indices -> []
alex@~/holbertonschool-interview_prep/substring$ ./a.out wordgoodgoodgoodbestword word good best good
Indices -> [8]
alex@~/holbertonschool-interview_prep/substring$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Linkedin](https://www.linkedin.com/in/queise-carvalho-de-oliveira-50359749/)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).
