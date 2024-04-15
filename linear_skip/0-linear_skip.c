#include "search.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located, or NULL if not found or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node, *express;

    if (list == NULL)
        return (NULL);

    node = express = list;

    while (express->express && express->express->n < value)
    {
        node = express;
        express = express->express;
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
    }

    if (express->express)
    {
        printf("Value found between indexes [%lu] and [%lu]\n", node->index, express->express->index);
    }
    else
    {
        while (express->next)
            express = express->next;
        printf("Value found between indexes [%lu] and [%lu]\n", node->index, express->index);
    }

    while (node && node->index <= express->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n == value)
            return (node);
        node = node->next;
    }

    return (NULL);
}

