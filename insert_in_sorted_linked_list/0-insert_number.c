#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: pointer to pointer of first node of listint_t list.
 * @number: integer to be included in a sorted singly linked list.
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number) {
    listint_t *newNode;
    listint_t *current;

    newNode = (listint_t *)malloc(sizeof(listint_t));
    if (newNode == NULL) { 
        return NULL;
    }

    newNode->n = number; 
    newNode->next = NULL;

    
    if (*head == NULL || (*head)->n >= number) {
        newNode->next = *head;
        *head = newNode;
    } else {
        
        current = *head;
        while (current->next != NULL && current->next->n < number) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    return newNode;
}