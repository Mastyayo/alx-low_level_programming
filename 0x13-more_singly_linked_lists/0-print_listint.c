#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h:listint_t linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}
return (nodeCount);
}
