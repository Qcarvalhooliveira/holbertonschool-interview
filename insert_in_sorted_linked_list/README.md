# **Insert in sorted linked list** :computer:

## **Description** :speech_balloon:

* Insert in Sorted Linked List is a fundamental operation in the realm of data structures, particularly in the context of linked lists. A linked list is a linear collection of elements, called nodes, where each node holds data and a reference (or link) to the next node in the sequence. The 'insert in sorted' operation involves adding a new node to a linked list while maintaining the list's sorted order. This process requires traversing the list to find the appropriate position for the new node, ensuring that the ordering criterion (like ascending or descending order) is not violated. This operation is crucial for maintaining sorted data for quick retrieval and efficient management. It finds extensive use in various applications, such as implementing priority queues, order statistics, and sorted data aggregation, where the inherent advantages of linked lists, like dynamic size and efficient insertion/removal, are particularly beneficial.

## **Tasks** :books:


#### **0. Insert in sorted linked list**

Technical interview preparation:

    You are not allowed to google anything
    Whiteboard first

Write a function in C that inserts a number into a sorted singly linked list.

    Prototype: listint_t *insert_node(listint_t **head, int number);
    Return: the address of the new node, or NULL if it failed

```
carrie@ubuntu:$ cat lists.h 
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

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
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */
```

```
carrie@ubuntu:$ cat linked_lists.c 
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
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }

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
carrie@ubuntu:$ cat 0-main.c 
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

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);

    printf("-----------------\n");

    insert_node(&head, 27);

    print_listint(head);

    free_listint(head);

    return (0);
}
```

## **Author** :black_nib:

* **Queise Carvalho de Oliveira** - [Queise Oliveira](https://github.com/Qcarvalhooliveira)


## License :page_with_curl:
This project is licensed under the [MIT License](https://opensource.org/license/mit/).