<img src="https://github.com/Qcarvalhooliveira/holbertonschool-interview/blob/main/linked_list_cycle/image/LinkedListCycle.png">

# **Linked List Cycle** :computer:

## **Description:** :speech_balloon:

* A linked list cycle occurs when a node in a linked list points back to a previous node, creating a loop. This means that if you traverse the list, you will never reach a null element that signifies the end of the list, but instead keep cycling through the loop indefinitely. Detecting a cycle in a linked list is a common problem in computer science, and various algorithms exist to identify whether a cycle exists within a linked list, with the Floyd’s Tortoise and Hare algorithm being one of the most famous solutions.

## **Tasks** :books:


#### **0. Linked list cycle**

Write a function in C that checks if a singly linked list has a cycle in it.

* Prototype: int check_cycle(listint_t *list);
* Return: 0 if there is no cycle, 1 if there is a cycle

Requirements:

* Only these functions are allowed: write, printf, putchar, puts, malloc, free

```
carrie@ubuntu:~/$ cat lists.h
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
```

```
carrie@ubuntu:~/$ cat 0-linked_lists.c
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;

    return (new);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
```

```
carrie@ubuntu:~/$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *current;
    listint_t *temp;
    int i;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    temp = current->next;
    current->next = head;

    if (check_cycle(head) == 0)
        printf("Linked list has no cycle\n");
    else if (check_cycle(head) == 1)
        printf("Linked list has a cycle\n");

    current = head;
    for (i = 0; i < 4; i++)
        current = current->next;
    current->next = temp;

    free_listint(head);

    return (0);
}
```

```
carrie@ubuntu:~/$ gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-check_cycle.c 0-linked_lists.c -o cycle
carrie@ubuntu:~/$$ ./cycle 
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle
carrie@ubuntu:~/$
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Queise Oliveira](https://github.com/Qcarvalhooliveira)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).




