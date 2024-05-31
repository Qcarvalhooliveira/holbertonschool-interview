#include <stdlib.h>
#include "binary_trees.h"

/**
 * heap_extract - Extracts the root node of a Max Binary Heap
 * @root: Double pointer to the root node of the heap
 *
 * Return: The value stored in the root node
 */
int heap_extract(heap_t **root)
{
    if (!root || !*root)
        return (0);

    int value = (*root)->n;
    heap_t *last_node = get_last_node(*root);
    if (last_node == *root)
    {
        free(*root);
        *root = NULL;
        return (value);
    }

    (*root)->n = last_node->n;

    if (last_node->parent->left == last_node)
        last_node->parent->left = NULL;
    else
        last_node->parent->right = NULL;

    free(last_node);
    heapify_down(*root);

    return (value);
}

/**
 * get_last_node - Finds the last node in the level-order traversal
 * @root: Pointer to the root of the tree
 *
 * Return: Pointer to the last node
 */
heap_t *get_last_node(heap_t *root)
{
    if (!root)
        return (NULL);

    size_t height = tree_height(root);
    return (find_last_node(root, height));
}

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */
size_t tree_height(const heap_t *tree)
{
    if (!tree)
        return (0);

    size_t left_height = tree_height(tree->left);
    size_t right_height = tree_height(tree->right);

    return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * find_last_node - Finds the last node in a given height
 * @root: Pointer to the root node
 * @height: Height of the tree
 *
 * Return: Pointer to the last node
 */
heap_t *find_last_node(heap_t *root, size_t height)
{
    if (height == 1)
        return (root);

    heap_t *left_last = find_last_node(root->left, height - 1);
    heap_t *right_last = find_last_node(root->right, height - 1);

    if (right_last)
        return (right_last);
    else
        return (left_last);
}

/**
 * heapify_down - Restores the Max Heap property from the root node downwards
 * @node: Pointer to the root node of the subtree
 */
void heapify_down(heap_t *node)
{
    if (!node)
        return;

    heap_t *largest = node;
    if (node->left && node->left->n > largest->n)
        largest = node->left;
    if (node->right && node->right->n > largest->n)
        largest = node->right;

    if (largest != node)
    {
        int temp = node->n;
        node->n = largest->n;
        largest->n = temp;
        heapify_down(largest);
    }
}
