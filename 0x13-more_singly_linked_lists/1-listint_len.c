#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: function pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodecounter = 0;

	while (h != NULL)
	{
		nodecounter++;
		h = h->next;
	}
return (nodecounter)
}
