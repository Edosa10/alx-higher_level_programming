#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0; // Initialize node count to 0

    // Traverse the list and print each node's value
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        node_count++; // Increment node count for each node visited
    }

    return node_count; // Return the total number of nodes traversed
}
